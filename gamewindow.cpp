#include "gamewindow.h"
#include "ui_GameWindow.h"
#include "gui.h"
#include <QDesktopServices>
#include <QUrl>
#include <Qpalette>
GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{

    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setFixedSize(this->width(),this->height());
    ui->textEdit->setTextColor(Qt::white);
    ui->textEdit_1->setTextColor(Qt::red);
    ui->textEdit_2->setTextColor(Qt::red);
    label[0]=ui->label_1;
    label[1]=ui->label_2;
    label[2]=ui->label_3;
    label[3]=ui->label_4;
    label[4]=ui->label_5;
    label[5]=ui->label_6;
    label[6]=ui->label_7;
    label[7]=ui->label_8;
    label[8]=ui->label_9;
    label[9]=ui->label_10;
    label[10]=ui->label_11;
    label[11]=ui->label_12;
    pushbutton[0]=ui->pushButton_1;
    pushbutton[1]=ui->pushButton_2;
    pushbutton[2]=ui->pushButton_3;
    pushbutton[3]=ui->pushButton_4;
    pushbutton[4]=ui->pushButton_5;
    pushbutton[5]=ui->pushButton_6;
    pushbutton[6]=ui->pushButton_7;
    pushbutton[7]=ui->pushButton_8;
    pushbutton[8]=ui->pushButton_9;
    pushbutton[9]=ui->pushButton_10;
    pushbutton[10]=ui->pushButton_11;
    pushbutton[11]=ui->pushButton_12;
    frame[0]=ui->frame_1;
    frame[1]=ui->frame_2;
    frame[2]=ui->frame_3;
    frame[3]=ui->frame_4;
    frame[4]=ui->frame_5;
    frame[5]=ui->frame_6;
    frame[6]=ui->frame_7;
    frame[7]=ui->frame_8;
    frame[8]=ui->frame_9;
    frame[9]=ui->frame_10;
    frame[10]=ui->frame_11;
    frame[11]=ui->frame_12;
    for(int i=0;i<=11;i++)
    {
        label[i]->setVisible(false);
        pushbutton[i]->setVisible(false);
    }
    ui->pushButton_20->setVisible(false);
    connect(ui->pushButton,&QPushButton::clicked,this,&GameWindow::on_pushButton_clicked);
    connect(ui->pushButton_13,&QPushButton::clicked,this,&GameWindow::on_pushButton_13_clicked);
    connect(ui->pushButton_15,&QPushButton::clicked,this,&GameWindow::on_pushButton_15_clicked);
    connect(ui->pushButton_16,&QPushButton::clicked,this,&GameWindow::on_pushButton_16_clicked);
    connect(ui->pushButton_17,&QPushButton::clicked,this,&GameWindow::endturn);
}


GameWindow::~GameWindow()
{
    delete ui;
}
void GameWindow::myplayer(int seat,int id)
{
    myseat=seat;
    identity=id;
    ui->label_13->setText(tr("ID:%1").arg(identity));
    ui->label_14->setText(tr("%1号").arg(seat+1));
    frame[seat]->setStyleSheet("background-color: rgb(0, 85, 255)");

}

void GameWindow::addplayer(int seat,int id)
{
    label[seat]->setVisible(true);
    pushbutton[seat]->setVisible(true);
    label[seat]->setText(tr("ID:%1").arg(id));

}
void GameWindow::on_actionChakan_triggered()
{
    QDesktopServices::openUrl(QUrl("http://baike.baidu.com/link?url=NIp1tudVwrioy0g3GF4QEles_ctV6TEpD_-sQ21huAlzyu7m-g4l1WrnQzhSovRjZpaJ1Zf3hMsrjejzpOESFludN9CZfCfA2F4PPDvXEdYTww_NCJP6unzDD6DiNGGd"));
}

void GameWindow::on_pushButton_clicked()
{
    QString str=ui->textEdit->toPlainText();
    emit speak(identity,str);
    ui->textEdit->clear();
}
void GameWindow::on_pushButton_13_clicked()
{
    if(ui->pushButton_13->text()==tr("准备"))
    {
        emit prepared(identity);
        ui->pushButton_13->setText("取消准备");

    }
    else
    {
        emit unprepared(identity);
        ui->pushButton_13->setText("准备");

    }
}


void GameWindow::on_pushButton_15_clicked()
{
    emit goback(identity);
    close();
}
void GameWindow::on_pushButton_16_clicked()
{
    emit exit(identity);
    close();

}
void GameWindow::start(int role)
{
    ui->pushButton_13->setVisible(false);
    ui->pushButton_15->setVisible(false);
    ui->pushButton_16->setVisible(false);

    if(role==0)
    {
        ui->pushButton_19->setVisible(false);
        ui->label_15->setText(tr("平民"));
    }
    else if(role==3)

    {
        ui->pushButton_19->setVisible(false);
        ui->label_15->setText(tr("预言家"));
    }
    else if(role==1)
    {
        ui->pushButton_19->setText(tr("不毒"));
        ui->label_15->setText(tr("女巫"));
    }
    else if(role==2)
    {
        ui->pushButton_19->setText(tr("空枪"));
        ui->label_15->setText(tr("猎人"));
    }
    else
    {
        ui->pushButton_19->setText(tr("空刀"));
        ui->pushButton_20->setVisible(true);
        ui->label_15->setText(tr("狼人"));
    }
}//图标暂不可用
void GameWindow::getmessage(int seat, QString str)
{
    if(seat!=0)
    ui->textEdit_2->append(tr("%1号玩家：").arg(seat));//换行未考虑
    ui->textEdit_2->append(str);//文本颜色暂不能改
//发言者边框高亮待写
//文本我再慢慢调
}
void GameWindow::myturn()
{
    ui->textEdit->setEnabled(true);
    ui->pushButton->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->textEdit_2->append(tr("轮到你了："));
}
void GameWindow::endturn()
{
    ui->textEdit->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->textEdit_2->append(tr("发言结束。"));
    emit end();
}

void GameWindow::gameover()
{
    ui->textEdit_2->append(tr("游戏结束。"));

    ui->pushButton_13->setVisible(true);
    ui->pushButton_15->setVisible(true);
    ui->pushButton_16->setVisible(true);
    ui->pushButton->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
}
