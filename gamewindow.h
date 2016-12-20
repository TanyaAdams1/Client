#ifndef GameWindow_H
#define GameWindow_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    void addplayer(int,int);
    void myplayer(int,int);//信息初始化：玩家本人的id与座位号
    void start(int role);//role: 0村民、1女巫、2猎人、3预言家、4狼人
    void getmessage(int seat,QString str);//0表示上帝
    void myturn();
    void endturn();//可以内部执行，但考虑到倒计时等扩展，写为公有。

    void gameover();
    ~GameWindow();

signals:
    void speak(int, QString);//回车发送信息待实现
    void prepared(int);
    void unprepared(int);
    void goback(int);
    void exit(int);
    void end();//结束发言
private:
    void on_actionChakan_triggered();
    void on_pushButton_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_16_clicked();
    Ui::GameWindow *ui;
    QLabel *label[12];
    QPushButton *pushbutton[12];
    QFrame *frame[12];
    int identity,myseat;
};

#endif // GameWindow_H
