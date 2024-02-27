#include "wordseeker.h"
#include "ui_wordseeker.h"

WordSeeker::WordSeeker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WordSeeker)
{
    ui->setupUi(this);
    connect (ui->t_before, &QLineEdit::textChanged, this, &WordSeeker::counter);
    connect (ui->e_key, &QLineEdit::textChanged, this, &WordSeeker::counter);
    connect (ui->radioButton_2, &QRadioButton::clicked, this, &WordSeeker::counter);
    connect (ui->radioButton, &QRadioButton::clicked, this, &WordSeeker::counter);

}

WordSeeker::~WordSeeker()
{
    delete ui;
}

void WordSeeker::counter()
{
    QString text = ui->t_before->text();
    QString key = ui->e_key->text();
    bool endButton = ui->radioButton->isChecked();
    QString encodedText;

    if (text.isEmpty() || key.isEmpty())
        return;

    if (endButton) {
        for (int i = 0; i < text.length(); i++) {
            if (text[i].isLetter()) {
                int keyIndex = i % key.length();
                int encode = key[keyIndex].unicode() - 'a';
                QChar encodedChar = QChar('a' + ((text[i].unicode() - 'a' + encode + 26) % 26));

                encodedText += encodedChar;
            } else {
                encodedText += text[i];
            }
        }
        ui->t_after->setText(encodedText);
    } else {
        for (int i = 0; i < text.length(); i++) {
            if (text[i].isLetter()) {
                int keyIndex = i % key.length();
                int decode = key[keyIndex].unicode() - 'a';
                QChar encodedChar = QChar('a' + ((text[i].unicode() - 'a' - decode + 26) % 26));
                encodedText += encodedChar;
            } else {
                encodedText += text[i];
            }
        }
        ui->t_after->setText(encodedText);
    }
}
