/********************************************************************************
** Form generated from reading UI file 'modminmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODMINMENU_H
#define UI_MODMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modMinMenu
{
public:
    QPushButton *message;
    QPushButton *change;
    QPushButton *profil;
    QPushButton *exit;
    QLabel *login;
    QPushButton *report;

    void setupUi(QWidget *modMinMenu)
    {
        if (modMinMenu->objectName().isEmpty())
            modMinMenu->setObjectName("modMinMenu");
        modMinMenu->resize(215, 162);
        message = new QPushButton(modMinMenu);
        message->setObjectName("message");
        message->setGeometry(QRect(10, 70, 191, 24));
        change = new QPushButton(modMinMenu);
        change->setObjectName("change");
        change->setGeometry(QRect(10, 100, 191, 24));
        profil = new QPushButton(modMinMenu);
        profil->setObjectName("profil");
        profil->setGeometry(QRect(10, 40, 191, 24));
        exit = new QPushButton(modMinMenu);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(10, 130, 191, 24));
        login = new QLabel(modMinMenu);
        login->setObjectName("login");
        login->setGeometry(QRect(20, 10, 91, 21));
        report = new QPushButton(modMinMenu);
        report->setObjectName("report");
        report->setGeometry(QRect(120, 10, 81, 24));

        retranslateUi(modMinMenu);

        QMetaObject::connectSlotsByName(modMinMenu);
    } // setupUi

    void retranslateUi(QWidget *modMinMenu)
    {
        modMinMenu->setWindowTitle(QCoreApplication::translate("modMinMenu", "Form", nullptr));
        message->setText(QCoreApplication::translate("modMinMenu", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", nullptr));
        change->setText(QCoreApplication::translate("modMinMenu", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        profil->setText(QCoreApplication::translate("modMinMenu", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        exit->setText(QCoreApplication::translate("modMinMenu", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        login->setText(QCoreApplication::translate("modMinMenu", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        report->setText(QCoreApplication::translate("modMinMenu", "\320\226\320\260\320\273\320\276\320\261\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modMinMenu: public Ui_modMinMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODMINMENU_H
