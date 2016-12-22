/********************************************************************************
** Form generated from reading UI file 'hall.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALL_H
#define UI_HALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hall
{
public:
    QAction *action;
    QAction *action_Q;
    QAction *action_2;
    QAction *action_J;
    QWidget *centralWidget;
    QTableWidget *roomtableWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *port;
    QLabel *ip;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *createButton;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_H;
    QMenu *menu_J;
    QStatusBar *statusBar;
    QDockWidget *notepad;
    QWidget *dockWidgetContents_4;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *hall)
    {
        if (hall->objectName().isEmpty())
            hall->setObjectName(QStringLiteral("hall"));
        hall->resize(1246, 675);
        hall->setStyleSheet(QStringLiteral(""));
        action = new QAction(hall);
        action->setObjectName(QStringLiteral("action"));
        action_Q = new QAction(hall);
        action_Q->setObjectName(QStringLiteral("action_Q"));
        action_2 = new QAction(hall);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_J = new QAction(hall);
        action_J->setObjectName(QStringLiteral("action_J"));
        centralWidget = new QWidget(hall);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        roomtableWidget = new QTableWidget(centralWidget);
        if (roomtableWidget->columnCount() < 2)
            roomtableWidget->setColumnCount(2);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        roomtableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        roomtableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        roomtableWidget->setObjectName(QStringLiteral("roomtableWidget"));
        roomtableWidget->setEnabled(true);
        roomtableWidget->setGeometry(QRect(80, 60, 620, 461));
        roomtableWidget->setMaximumSize(QSize(621, 16777215));
        roomtableWidget->setStyleSheet(QString::fromUtf8("border-color: rgb(30, 15, 15);\n"
"selection-background-color: rgb(40, 41, 75);\n"
"font: 75 9pt \"\346\226\260\345\256\213\344\275\223\";\n"
"color: rgb(221, 221, 221);\n"
"border-style: outset;\n"
"border-width: 5px;"));
        roomtableWidget->setFrameShape(QFrame::StyledPanel);
        roomtableWidget->setLineWidth(2);
        roomtableWidget->setMidLineWidth(1);
        roomtableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        roomtableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        roomtableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        roomtableWidget->setShowGrid(false);
        roomtableWidget->setColumnCount(2);
        roomtableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        roomtableWidget->horizontalHeader()->setDefaultSectionSize(305);
        roomtableWidget->horizontalHeader()->setHighlightSections(true);
        roomtableWidget->horizontalHeader()->setMinimumSectionSize(10);
        roomtableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        roomtableWidget->horizontalHeader()->setStretchLastSection(true);
        roomtableWidget->verticalHeader()->setVisible(false);
        roomtableWidget->verticalHeader()->setDefaultSectionSize(30);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(770, 140, 201, 131));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(223, 223, 223);\n"
"font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        port = new QLabel(groupBox);
        port->setObjectName(QStringLiteral("port"));

        gridLayout->addWidget(port, 1, 1, 1, 1);

        ip = new QLabel(groupBox);
        ip->setObjectName(QStringLiteral("ip"));

        gridLayout->addWidget(ip, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-260, 50, 1550, 731));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/image/image.jpg);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 370, 101, 51));
        QPalette palette;
        QBrush brush(QColor(9, 11, 152, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton->setPalette(palette);
        pushButton->setStyleSheet(QLatin1String("font: 75 14pt \"Adobe Arabic\";\n"
""));
        pushButton->setIconSize(QSize(16, 16));
        createButton = new QPushButton(centralWidget);
        createButton->setObjectName(QStringLiteral("createButton"));
        createButton->setGeometry(QRect(810, 436, 101, 51));
        createButton->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        createButton->setIconSize(QSize(16, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(770, 164, 201, 106));
        label_4->setStyleSheet(QStringLiteral("background-color: rgba(30, 15, 15, 180);"));
        hall->setCentralWidget(centralWidget);
        label_3->raise();
        roomtableWidget->raise();
        pushButton->raise();
        createButton->raise();
        label_4->raise();
        groupBox->raise();
        menuBar = new QMenuBar(hall);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1246, 23));
        menuBar->setStyleSheet(QLatin1String("background-color: rgb(30, 12, 15);\n"
"color: rgb(173, 173, 173);"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        menu_J = new QMenu(menuBar);
        menu_J->setObjectName(QStringLiteral("menu_J"));
        hall->setMenuBar(menuBar);
        statusBar = new QStatusBar(hall);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setLayoutDirection(Qt::RightToLeft);
        statusBar->setStyleSheet(QLatin1String("background-color: rgb(31, 12,15);\n"
"color: rgb(216, 216, 216);"));
        hall->setStatusBar(statusBar);
        notepad = new QDockWidget(hall);
        notepad->setObjectName(QStringLiteral("notepad"));
        notepad->setEnabled(true);
        notepad->setStyleSheet(QLatin1String("border-color: rgb(31, 32, 38);\n"
"border-style: outset;\n"
"border-width: 6px;"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        textEdit = new QTextEdit(dockWidgetContents_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 80, 607));
        textEdit->setStyleSheet(QLatin1String("color: rgb(212, 212, 212);\n"
"background-color: rgb(25, 15, 15);"));
        notepad->setWidget(dockWidgetContents_4);
        hall->addDockWidget(static_cast<Qt::DockWidgetArea>(1), notepad);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_J->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu->addAction(action);
        menu->addAction(action_Q);
        menu_H->addAction(action_2);
        menu_J->addAction(action_J);

        retranslateUi(hall);

        QMetaObject::connectSlotsByName(hall);
    } // setupUi

    void retranslateUi(QMainWindow *hall)
    {
        hall->setWindowTitle(QApplication::translate("hall", "\346\270\270\346\210\217\345\244\247\345\216\205", 0));
        action->setText(QApplication::translate("hall", "\351\200\200\345\207\272\345\275\223\345\211\215\345\270\220\345\217\267(&W)", 0));
        action->setShortcut(QApplication::translate("hall", "Ctrl+W", 0));
        action_Q->setText(QApplication::translate("hall", "\351\200\200\345\207\272\346\270\270\346\210\217(&Q)", 0));
        action_Q->setShortcut(QApplication::translate("hall", "Ctrl+Q", 0));
        action_2->setText(QApplication::translate("hall", "\346\237\245\347\234\213\345\270\256\345\212\251(&H)", 0));
        action_2->setShortcut(QApplication::translate("hall", "Ctrl+H", 0));
        action_J->setText(QApplication::translate("hall", "\346\211\223\345\274\200\350\256\260\344\272\213\346\234\254(&J)", 0));
        action_J->setShortcut(QApplication::translate("hall", "Ctrl+J", 0));
        QTableWidgetItem *___qtablewidgetitem = roomtableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("hall", "\346\210\277\351\227\264ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = roomtableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("hall", "\346\210\277\351\227\264\344\272\272\346\225\260", 0));
        groupBox->setTitle(QApplication::translate("hall", "\347\224\250\346\210\267\344\277\241\346\201\257\357\274\232", 0));
        label->setText(QApplication::translate("hall", "ip\357\274\232", 0));
        port->setText(QString());
        ip->setText(QString());
        label_2->setText(QApplication::translate("hall", "port\357\274\232", 0));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("hall", "\345\277\253\351\200\237\345\212\240\345\205\245", 0));
        createButton->setText(QApplication::translate("hall", "\345\210\233\345\273\272\346\210\277\351\227\264", 0));
        label_4->setText(QApplication::translate("hall", "TextLabel", 0));
        menu->setTitle(QApplication::translate("hall", "\345\270\220\345\217\267(&Z)", 0));
        menu_H->setTitle(QApplication::translate("hall", "\345\270\256\345\212\251(&H)", 0));
        menu_J->setTitle(QApplication::translate("hall", "\350\256\260\344\272\213\346\234\254(&J)", 0));
        notepad->setWindowTitle(QApplication::translate("hall", "\350\256\260\344\272\213\346\234\254", 0));
    } // retranslateUi

};

namespace Ui {
    class hall: public Ui_hall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALL_H
