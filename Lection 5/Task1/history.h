#ifndef HISTORY_H
#define HISTORY_H

#include <QMainWindow>
#include <QListWidget>

namespace Ui {
class History;
}

class History : public QMainWindow
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = nullptr);
    ~History();
    Ui::History *ui;

};

#endif // HISTORY_H
