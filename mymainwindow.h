#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include "map.h"
#include "monster.h"
#include "tower.h"

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

    int gameState;  //用于标记游戏进行的状态，
                             //0表示刚打开窗口，游戏未初始化，
                             //1表示处于选择角色界面
                             //2表示处于游戏进行界面
                             //3表示处于游戏暂停
                             //4表示处于游戏结束

    int roleChoose; //用于表示玩家身份，0表示玩家扮演塔，1表示玩家扮演怪

    int originX, originY; //用于记录鼠标点击的位置，主要用于造塔时拖动用

    int towerCategory; //用于表示造塔的种类

    bool dragMouse; //用于表示鼠标拖动状态，0表示拖动完成，1表示即将拖动

    //Map myMap; 要不直接写进去，map类也作为monster和tower类的成员共用

    void mousePressEvent(QMouseEvent *);

    void mouseMoveEvent(QMouseEvent *);

    void QPaintEvent(QPaintEvent *);

    void initial(); //根据玩家身份选择，初始化游戏界面



private slots:
    void on_actionHelp_triggered();

    void on_actionExit_triggered();

    void on_actionStart_triggered();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H