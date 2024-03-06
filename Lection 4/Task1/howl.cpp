#include "howl.h"
#include "ui_howl.h"
#include "deloractsong.h"

Howl::Howl(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Howl)
{
    ui->setupUi(this);

    m_player = new QMediaPlayer(this);
    m_audioOutput = new QAudioOutput(this);

    m_player->setAudioOutput(m_audioOutput);
    ui->s_volume->setValue(m_audioOutput->volume());
    ui->p_position->setValue(0);
    ui->s_volume->setRange(0, 100);
    m_audioOutput->setVolume(25);


    connect (ui->b_select, &QPushButton::clicked, this, &Howl::addSong);
    connect (ui->b_next, &QPushButton::clicked, this, &Howl::next);
    connect (ui->b_previous, &QPushButton::clicked, this, &Howl::previous);
    connect (ui->s_volume, &QSlider::valueChanged, this, &Howl::updateVolume);
    connect (ui->b_playPause, &QPushButton::clicked, this, &Howl::playPause);
    connect (m_player, &QMediaPlayer::positionChanged, this, &Howl::updatePosition);


    connect (ui->listWidget, &QListWidget::itemClicked, this, &Howl::playSong);
    connect (ui->listWidget, &QListWidget::itemDoubleClicked, this, &Howl::deleteSong);

}

Howl::~Howl()
{
    delete ui;
}


void Howl::playPause()
{
    if (m_player->isPlaying())
    {
        m_player->pause();
        ui->b_playPause->setText(">");
    }
    else if (ui->l_songName->text() == "" || ui->l_songName->text() == "Please, select a song")
    {
        m_player->stop();
        ui->l_songName->setText("Please, select a song");
    }
    else
    {
        m_player->play();
        ui->b_playPause->setText("||");
    }
}

void Howl::next()
{
    QListWidgetItem *songNow = ui->listWidget->currentItem();
    int index = ui->listWidget->row(songNow);
    QListWidgetItem *songAfter = ui->listWidget->item(index + 1);
    if(songAfter)
    {
        QString nameSongAfter = songAfter->text();
        setSong(nameSongAfter);
        ui->listWidget->setCurrentItem(songAfter);
    }
}

void Howl::previous()
{
    QListWidgetItem *songNow = ui->listWidget->currentItem();
    int index = ui->listWidget->row(songNow);
    QListWidgetItem *songAfter = ui->listWidget->item(index - 1);
    if(songAfter)
    {
        QString nameSongAfter = songAfter->text();
        setSong(nameSongAfter);
        ui->listWidget->setCurrentItem(songAfter);
    }
}

void Howl::updatePosition(qint64 pos)
{
    ui->p_position->setValue(pos / (m_player->duration() / 100));
}

void Howl::setSong(QString path)
{
    ui->l_songName->setText(path);
    m_player->setSource(QUrl::fromLocalFile(path));
    ui->b_playPause->setText(">");
}

void Howl::updateVolume(float volume)
{
    m_audioOutput->setVolume(volume/100);
}

void Howl::playSong()
{
    QString path = ui->listWidget->currentItem()->text();
    m_player->setSource(QUrl::fromLocalFile(path));
    ui->l_songName->setText(path);
    ui->b_playPause->setText(">");
}

void Howl::deleteSong()
{
    DelOrActSong *DialogWindow = new DelOrActSong();
    DialogWindow->show();
    if (DialogWindow->exec() == QDialog::Accepted)
    {
        ui->listWidget->currentItem()->~QListWidgetItem();
        ui->l_songName->setText("");
    }
    else return;
}

void Howl::addSong()
{
    QString path = QFileDialog::getOpenFileName(this, "File manager", QDir::homePath(), "*.mp3");
    ui->listWidget->addItem(path);
    setSong(path);
}
