#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

    QPair<QString,int> getpair();

    void reset();

    void hidelogin();

    void showlogin();

signals:
    void Login(const QPair<QString,int> pair);

    void stoptimer();

private slots:
    void timerDone();

    void timerDone2();

    void timerDone3();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
private:
    QPair<QString,int> pair;

    Ui::login *ui;

    double i=1;
};

#endif // LOGIN_H
