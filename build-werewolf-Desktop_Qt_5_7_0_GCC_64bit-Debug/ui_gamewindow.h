/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QAction *actionChakan;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QTextEdit *textEdit_2;
    QFrame *frame_1;
    QPushButton *pushButton_1;
    QLabel *label_1;
    QFrame *frame_2;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QFrame *frame_3;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QFrame *frame_4;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QFrame *frame_5;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QFrame *frame_6;
    QPushButton *pushButton_6;
    QLabel *label_6;
    QFrame *frame_7;
    QPushButton *pushButton_7;
    QLabel *label_7;
    QFrame *frame_8;
    QPushButton *pushButton_8;
    QLabel *label_8;
    QFrame *frame_9;
    QPushButton *pushButton_9;
    QLabel *label_9;
    QFrame *frame_10;
    QPushButton *pushButton_10;
    QLabel *label_10;
    QFrame *frame_11;
    QPushButton *pushButton_11;
    QLabel *label_11;
    QFrame *frame_12;
    QPushButton *pushButton_12;
    QLabel *label_12;
    QTextEdit *textEdit;
    QPushButton *pushButton_16;
    QLabel *label_13;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_23;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_H;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->setEnabled(true);
        GameWindow->resize(982, 694);
        GameWindow->setStyleSheet(QString::fromUtf8("#centralWidget{border-image: url(:/new/prefix1/icon/\345\243\201\347\272\270.jpg);}\n"
""));
        actionChakan = new QAction(GameWindow);
        actionChakan->setObjectName(QStringLiteral("actionChakan"));
        centralWidget = new QWidget(GameWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(550, 410, 81, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(810, 190, 111, 191));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(2);
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icon/\346\234\250\346\235\277.jpg")));
        label->setAlignment(Qt::AlignCenter);
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(680, 190, 101, 28));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(680, 230, 101, 28));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(680, 270, 101, 28));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setEnabled(false);
        pushButton_17->setGeometry(QRect(690, 410, 71, 21));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(true);
        textEdit_2->setGeometry(QRect(60, 190, 571, 201));
        textEdit_2->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 150);"));
        textEdit_2->setFrameShape(QFrame::Box);
        textEdit_2->setFrameShadow(QFrame::Raised);
        textEdit_2->setLineWidth(2);
        textEdit_2->setMidLineWidth(0);
        textEdit_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2->setReadOnly(true);
        frame_1 = new QFrame(centralWidget);
        frame_1->setObjectName(QStringLiteral("frame_1"));
        frame_1->setGeometry(QRect(60, 40, 111, 131));
        frame_1->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_1->setFrameShape(QFrame::Box);
        frame_1->setFrameShadow(QFrame::Raised);
        frame_1->setLineWidth(5);
        frame_1->setMidLineWidth(0);
        pushButton_1 = new QPushButton(frame_1);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setEnabled(false);
        pushButton_1->setGeometry(QRect(10, 10, 93, 91));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/\346\273\221\347\250\275.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/\346\273\221\347\250\275.jpg"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/\346\273\221\347\250\275.jpg"), QSize(), QIcon::Disabled, QIcon::On);
        pushButton_1->setIcon(icon);
        pushButton_1->setIconSize(QSize(90, 90));
        pushButton_1->setFlat(false);
        label_1 = new QLabel(frame_1);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(10, 100, 91, 21));
        label_1->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_1->setFrameShape(QFrame::Box);
        label_1->setFrameShadow(QFrame::Sunken);
        label_1->setLineWidth(0);
        label_1->setMidLineWidth(1);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(210, 40, 111, 131));
        frame_2->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(5);
        frame_2->setMidLineWidth(0);
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(10, 10, 93, 91));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/icon/\346\273\221\347\250\275.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/new/prefix1/icon/\346\273\221\347\250\275.jpg"), QSize(), QIcon::Disabled, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(90, 90));
        pushButton_2->setFlat(false);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 91, 21));
        label_2->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setLineWidth(0);
        label_2->setMidLineWidth(1);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(360, 40, 111, 131));
        frame_3->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(5);
        frame_3->setMidLineWidth(0);
        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(10, 10, 93, 91));
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(90, 90));
        pushButton_3->setFlat(false);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 91, 21));
        label_3->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Sunken);
        label_3->setLineWidth(0);
        label_3->setMidLineWidth(1);
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(510, 40, 111, 131));
        frame_4->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_4->setLineWidth(5);
        frame_4->setMidLineWidth(0);
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setGeometry(QRect(10, 10, 93, 91));
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(90, 90));
        pushButton_4->setFlat(false);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 91, 21));
        label_4->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Sunken);
        label_4->setLineWidth(0);
        label_4->setMidLineWidth(1);
        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(660, 40, 111, 131));
        frame_5->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(5);
        frame_5->setMidLineWidth(0);
        pushButton_5 = new QPushButton(frame_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(false);
        pushButton_5->setGeometry(QRect(10, 10, 93, 91));
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(90, 90));
        pushButton_5->setFlat(false);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 100, 91, 21));
        label_5->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_5->setFrameShape(QFrame::Box);
        label_5->setFrameShadow(QFrame::Sunken);
        label_5->setLineWidth(0);
        label_5->setMidLineWidth(1);
        frame_6 = new QFrame(centralWidget);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(810, 40, 111, 131));
        frame_6->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_6->setLineWidth(5);
        frame_6->setMidLineWidth(0);
        pushButton_6 = new QPushButton(frame_6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(false);
        pushButton_6->setGeometry(QRect(10, 10, 93, 91));
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(90, 90));
        pushButton_6->setFlat(false);
        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 100, 91, 21));
        label_6->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_6->setFrameShape(QFrame::Box);
        label_6->setFrameShadow(QFrame::Sunken);
        label_6->setLineWidth(0);
        label_6->setMidLineWidth(1);
        frame_7 = new QFrame(centralWidget);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(60, 460, 111, 131));
        frame_7->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_7->setLineWidth(5);
        frame_7->setMidLineWidth(0);
        pushButton_7 = new QPushButton(frame_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setEnabled(false);
        pushButton_7->setGeometry(QRect(10, 10, 93, 91));
        pushButton_7->setIcon(icon1);
        pushButton_7->setIconSize(QSize(90, 90));
        pushButton_7->setFlat(false);
        label_7 = new QLabel(frame_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 100, 91, 21));
        label_7->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_7->setFrameShape(QFrame::Box);
        label_7->setFrameShadow(QFrame::Sunken);
        label_7->setLineWidth(0);
        label_7->setMidLineWidth(1);
        frame_8 = new QFrame(centralWidget);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(210, 460, 111, 131));
        frame_8->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_8->setLineWidth(5);
        frame_8->setMidLineWidth(0);
        pushButton_8 = new QPushButton(frame_8);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setEnabled(false);
        pushButton_8->setGeometry(QRect(10, 10, 93, 91));
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(90, 90));
        pushButton_8->setFlat(false);
        label_8 = new QLabel(frame_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 100, 91, 21));
        label_8->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_8->setFrameShape(QFrame::Box);
        label_8->setFrameShadow(QFrame::Sunken);
        label_8->setLineWidth(0);
        label_8->setMidLineWidth(1);
        frame_9 = new QFrame(centralWidget);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(370, 460, 111, 131));
        frame_9->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_9->setLineWidth(5);
        frame_9->setMidLineWidth(0);
        pushButton_9 = new QPushButton(frame_9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setEnabled(false);
        pushButton_9->setGeometry(QRect(10, 10, 93, 91));
        pushButton_9->setIcon(icon1);
        pushButton_9->setIconSize(QSize(90, 90));
        pushButton_9->setFlat(false);
        label_9 = new QLabel(frame_9);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 100, 91, 21));
        label_9->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_9->setFrameShape(QFrame::Box);
        label_9->setFrameShadow(QFrame::Sunken);
        label_9->setLineWidth(0);
        label_9->setMidLineWidth(1);
        frame_10 = new QFrame(centralWidget);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(510, 460, 111, 131));
        frame_10->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_10->setFrameShape(QFrame::Box);
        frame_10->setFrameShadow(QFrame::Raised);
        frame_10->setLineWidth(5);
        frame_10->setMidLineWidth(0);
        pushButton_10 = new QPushButton(frame_10);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setEnabled(false);
        pushButton_10->setGeometry(QRect(10, 10, 93, 91));
        pushButton_10->setIcon(icon1);
        pushButton_10->setIconSize(QSize(90, 90));
        pushButton_10->setFlat(false);
        label_10 = new QLabel(frame_10);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 100, 91, 21));
        label_10->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_10->setFrameShape(QFrame::Box);
        label_10->setFrameShadow(QFrame::Sunken);
        label_10->setLineWidth(0);
        label_10->setMidLineWidth(1);
        frame_11 = new QFrame(centralWidget);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(660, 460, 111, 131));
        frame_11->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_11->setFrameShape(QFrame::Box);
        frame_11->setFrameShadow(QFrame::Raised);
        frame_11->setLineWidth(5);
        frame_11->setMidLineWidth(0);
        pushButton_11 = new QPushButton(frame_11);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setEnabled(false);
        pushButton_11->setGeometry(QRect(10, 10, 93, 91));
        pushButton_11->setIcon(icon1);
        pushButton_11->setIconSize(QSize(90, 90));
        pushButton_11->setFlat(false);
        label_11 = new QLabel(frame_11);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 100, 91, 21));
        label_11->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_11->setFrameShape(QFrame::Box);
        label_11->setFrameShadow(QFrame::Sunken);
        label_11->setLineWidth(0);
        label_11->setMidLineWidth(1);
        frame_12 = new QFrame(centralWidget);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(810, 460, 111, 131));
        frame_12->setStyleSheet(QLatin1String("background-color: \n"
" rgb(122, 33, 255);"));
        frame_12->setFrameShape(QFrame::Box);
        frame_12->setFrameShadow(QFrame::Raised);
        frame_12->setLineWidth(5);
        frame_12->setMidLineWidth(0);
        pushButton_12 = new QPushButton(frame_12);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setEnabled(false);
        pushButton_12->setGeometry(QRect(10, 10, 93, 91));
        pushButton_12->setIcon(icon1);
        pushButton_12->setIconSize(QSize(90, 90));
        pushButton_12->setFlat(false);
        label_12 = new QLabel(frame_12);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 100, 91, 21));
        label_12->setStyleSheet(QLatin1String("background-color: rgb(145, 71, 255);\n"
"font: 10pt \"Algerian\";\n"
""));
        label_12->setFrameShape(QFrame::Box);
        label_12->setFrameShadow(QFrame::Sunken);
        label_12->setLineWidth(0);
        label_12->setMidLineWidth(1);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(60, 410, 491, 21));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 150);"));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setFrameShadow(QFrame::Plain);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(680, 310, 101, 28));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(820, 350, 81, 31));
        label_13->setStyleSheet(QStringLiteral("font: 57 14pt \"Yu Gothic Medium\";"));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(680, 190, 101, 28));
        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(680, 270, 101, 28));
        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(680, 310, 101, 28));
        pushButton_21 = new QPushButton(centralWidget);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(810, 390, 111, 28));
        pushButton_22 = new QPushButton(centralWidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(810, 420, 111, 28));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(850, 190, 31, 31));
        label_14->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";"));
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(810, 320, 111, 31));
        label_15->setStyleSheet(QString::fromUtf8("font: 18pt \"\351\273\221\344\275\223\";"));
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(820, 220, 101, 101));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icon/question30.png")));
        label_16->setScaledContents(true);
        label_16->setAlignment(Qt::AlignCenter);
        label_16->setWordWrap(false);
        pushButton_23 = new QPushButton(centralWidget);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setEnabled(false);
        pushButton_23->setGeometry(QRect(680, 350, 101, 28));
        GameWindow->setCentralWidget(centralWidget);
        pushButton_19->raise();
        pushButton_15->raise();
        pushButton_20->raise();
        pushButton_16->raise();
        pushButton_18->raise();
        pushButton->raise();
        label->raise();
        pushButton_13->raise();
        pushButton_14->raise();
        pushButton_17->raise();
        textEdit_2->raise();
        frame_1->raise();
        frame_2->raise();
        frame_3->raise();
        frame_4->raise();
        frame_5->raise();
        frame_6->raise();
        frame_7->raise();
        frame_8->raise();
        frame_9->raise();
        frame_10->raise();
        frame_11->raise();
        frame_12->raise();
        textEdit->raise();
        label_13->raise();
        pushButton_21->raise();
        pushButton_22->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        pushButton_23->raise();
        menuBar = new QMenuBar(GameWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 982, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        GameWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(GameWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GameWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(GameWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        GameWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_H->addAction(actionChakan);

        retranslateUi(GameWindow);

        pushButton_1->setDefault(false);
        pushButton_2->setDefault(false);
        pushButton_3->setDefault(false);
        pushButton_4->setDefault(false);
        pushButton_5->setDefault(false);
        pushButton_6->setDefault(false);
        pushButton_7->setDefault(false);
        pushButton_8->setDefault(false);
        pushButton_9->setDefault(false);
        pushButton_10->setDefault(false);
        pushButton_11->setDefault(false);
        pushButton_12->setDefault(false);


        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "GameWindow", 0));
        actionChakan->setText(QApplication::translate("GameWindow", "\346\237\245\347\234\213\345\270\256\345\212\251", 0));
#ifndef QT_NO_TOOLTIP
        actionChakan->setToolTip(QApplication::translate("GameWindow", "\347\231\276\347\247\221", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("GameWindow", "\345\217\221\351\200\201\357\274\210&S\357\274\211", 0));
        label->setText(QString());
        pushButton_13->setText(QApplication::translate("GameWindow", "\345\207\206\345\244\207", 0));
        pushButton_14->setText(QApplication::translate("GameWindow", "\346\270\205\351\231\244\350\256\260\345\275\225", 0));
        pushButton_15->setText(QApplication::translate("GameWindow", "\350\277\224\345\233\236\345\244\247\345\216\205", 0));
        pushButton_17->setText(QApplication::translate("GameWindow", "\347\273\223\346\235\237\345\217\221\350\250\200", 0));
        textEdit_2->setHtml(QApplication::translate("GameWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff007f;\">\346\254\242\350\277\216\345\212\240\345\205\245\346\270\270\346\210\217\357\274\201</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#ff007f;\"><br /></p></body></html>", 0));
        pushButton_1->setText(QString());
        label_1->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_2->setText(QString());
        label_2->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_3->setText(QString());
        label_3->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_4->setText(QString());
        label_4->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_5->setText(QString());
        label_5->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_6->setText(QString());
        label_6->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_7->setText(QString());
        label_7->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_8->setText(QString());
        label_8->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_9->setText(QString());
        label_9->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_10->setText(QString());
        label_10->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_11->setText(QString());
        label_11->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        pushButton_12->setText(QString());
        label_12->setText(QApplication::translate("GameWindow", "ID\357\274\2321234", 0));
        textEdit->setHtml(QApplication::translate("GameWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton_16->setText(QApplication::translate("GameWindow", "\351\200\200\345\207\272\346\270\270\346\210\217", 0));
        label_13->setText(QApplication::translate("GameWindow", "ID:1234", 0));
        pushButton_18->setText(QApplication::translate("GameWindow", "\350\256\260\344\272\213\346\234\254", 0));
        pushButton_19->setText(QApplication::translate("GameWindow", "\347\251\272\345\210\200/\344\270\215\346\257\222", 0));
        pushButton_20->setText(QApplication::translate("GameWindow", "\350\207\252\347\210\206", 0));
        pushButton_21->setText(QApplication::translate("GameWindow", "\346\220\234\347\264\242\345\217\221\350\250\200", 0));
        pushButton_22->setText(QApplication::translate("GameWindow", "\346\233\264\346\224\271\346\226\207\345\255\227\346\240\274\345\274\217", 0));
        label_14->setText(QApplication::translate("GameWindow", "1\345\217\267", 0));
        label_15->setText(QApplication::translate("GameWindow", "\346\234\252\347\237\245", 0));
        label_16->setText(QString());
        pushButton_23->setText(QApplication::translate("GameWindow", "\345\274\203\347\245\250", 0));
        menu->setTitle(QApplication::translate("GameWindow", "\346\270\270\346\210\217(&G)", 0));
        menu_H->setTitle(QApplication::translate("GameWindow", "\345\270\256\345\212\251(&H)", 0));
        toolBar->setWindowTitle(QApplication::translate("GameWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
