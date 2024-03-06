#include "deloractsong.h"
#include "ui_deloractsong.h"

DelOrActSong::DelOrActSong(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DelOrActSong)
{
    ui->setupUi(this);
}

DelOrActSong::~DelOrActSong()
{
    delete ui;
}

void DelOrActSong::acceptedForm()
{
    this->accept();
}
