/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Warning
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Warning)
    {
        if (Warning->objectName().isEmpty())
            Warning->setObjectName(QStringLiteral("Warning"));
        Warning->resize(400, 241);
        label = new QLabel(Warning);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 0, 181, 91));
        label->setStyleSheet(QLatin1String("font: 26pt \"Adobe Arabic\";\n"
"color: rgb(223, 223, 223);"));
        pushButton = new QPushButton(Warning);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 170, 91, 31));
        label_2 = new QLabel(Warning);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-40, -30, 451, 321));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/image/d0.jpg);"));
        lineEdit = new QLineEdit(Warning);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(120, 80, 161, 61));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setStyleSheet(QLatin1String("font: 26pt \"Adobe Arabic\";\n"
"color: rgb(223, 223, 223);"));
        label_2->raise();
        label->raise();
        pushButton->raise();
        lineEdit->raise();

        retranslateUi(Warning);
        QObject::connect(pushButton, SIGNAL(clicked()), Warning, SLOT(close()));

        QMetaObject::connectSlotsByName(Warning);
    } // setupUi

    void retranslateUi(QDialog *Warning)
    {
        Warning->setWindowTitle(QApplication::translate("Warning", "\351\224\231\350\257\257", 0));
        label->setText(QApplication::translate("Warning", "\346\223\215\344\275\234\345\244\261\350\264\245", 0));
        pushButton->setText(QApplication::translate("Warning", "\345\205\263\351\227\255", 0));
        label_2->setText(QApplication::translate("Warning", "TextLabel", 0));
        lineEdit->setText(QApplication::translate("Warning", "\346\223\215\344\275\234\345\244\261\350\264\245", 0));
    } // retranslateUi

};

namespace Ui {
    class Warning: public Ui_Warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
