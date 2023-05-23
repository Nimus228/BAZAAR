/********************************************************************************
** Form generated from reading UI file 'minimenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIMENU_H
#define UI_MINIMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_miniMenu
{
public:
    QLabel *login;
    QLabel *rang;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *profil;
    QPushButton *message;
    QPushButton *pushButton_4;
    QPushButton *exit;

    void setupUi(QWidget *miniMenu)
    {
        if (miniMenu->objectName().isEmpty())
            miniMenu->setObjectName("miniMenu");
        miniMenu->resize(224, 179);
        login = new QLabel(miniMenu);
        login->setObjectName("login");
        login->setEnabled(true);
        login->setGeometry(QRect(13, 10, 121, 27));
        rang = new QLabel(miniMenu);
        rang->setObjectName("rang");
        rang->setGeometry(QRect(140, 10, 70, 27));
        rang->setMaximumSize(QSize(70, 16777215));
        widget = new QWidget(miniMenu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 45, 201, 116));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        profil = new QPushButton(widget);
        profil->setObjectName("profil");

        verticalLayout->addWidget(profil);

        message = new QPushButton(widget);
        message->setObjectName("message");

        verticalLayout->addWidget(message);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        exit = new QPushButton(widget);
        exit->setObjectName("exit");

        verticalLayout->addWidget(exit);


        retranslateUi(miniMenu);

        QMetaObject::connectSlotsByName(miniMenu);
    } // setupUi

    void retranslateUi(QWidget *miniMenu)
    {
        miniMenu->setWindowTitle(QCoreApplication::translate("miniMenu", "Form", nullptr));
        login->setText(QCoreApplication::translate("miniMenu", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        rang->setText(QCoreApplication::translate("miniMenu", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263: 9.8", nullptr));
        profil->setText(QCoreApplication::translate("miniMenu", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        message->setText(QCoreApplication::translate("miniMenu", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", nullptr));
        pushButton_4->setText(QCoreApplication::translate("miniMenu", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        exit->setText(QCoreApplication::translate("miniMenu", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class miniMenu: public Ui_miniMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIMENU_H
