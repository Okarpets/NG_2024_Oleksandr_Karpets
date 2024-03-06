#ifndef DELORACTSONG_H
#define DELORACTSONG_H

#include <QDialog>

namespace Ui {
class DelOrActSong;
}

class DelOrActSong : public QDialog
{
    Q_OBJECT

public:
    explicit DelOrActSong(QWidget *parent = nullptr);
    ~DelOrActSong();

private slots:
    void acceptedForm();


private:
    Ui::DelOrActSong *ui;
};

#endif // DELORACTSONG_H
