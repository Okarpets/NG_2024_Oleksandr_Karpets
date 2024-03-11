#ifndef LUNA_H
#define LUNA_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QMenu>
#include <QAction>
#include <QDebug>

#include "ui_history.h"
#include "history.h"
#include "sethomepage.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Luna;
}
QT_END_NAMESPACE

class Luna : public QMainWindow
{
    Q_OBJECT

public:
    Luna(QWidget *parent = nullptr);
    ~Luna();

public slots:
    void showContextMenuForWidget(const QPoint &pos);
    void openLink();
    void updateURL(QUrl url);
    void addTab();
    void removeTab(int index);
    void tabChanged(int index);
    void titleChanged(QString title);
    void openHistory();
    void updateHomepage();
    void openFromHistory();
    void deleteFromHistory();
    void clearStory();

private:
    Ui::Luna *ui;
    Ui::History *ui_history = new Ui::History();
    History *c_history = new History();
    QMenu *m_fileMenu;
    QMenu *m_settingsMenu;

    QAction *m_delete = new QAction(tr("Delete"), this);
    QAction *m_opened = new QAction(tr("Open"), this);
    QAction *m_clear = new QAction(tr("Clear all"), this);
    QAction *m_history;
    QAction *m_quit;
    QAction *m_addTab;
    QAction *m_reloadTab;

    QAction *m_updateHomepage;

    QMap<QWidget *, QWebEngineView *> m_tabs;
    QVector<QMetaObject::Connection> m_tabDynamicConnections;

    QString m_homepage;

    void debug(QString message);
};
#endif // LUNA_H
