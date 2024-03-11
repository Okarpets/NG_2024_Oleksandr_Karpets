#include "history.h"
#include "ui_history.h"

History::History(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::History)
{
    ui->setupUi(this);
    this->setWindowTitle("History");

}

History::~History()
{
    delete ui;
}
