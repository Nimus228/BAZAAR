/********************************************************************************
** Form generated from reading UI file 'owner.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNER_H
#define UI_OWNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_owner
{
public:
    QLineEdit *lineEdit;

    void setupUi(QWidget *owner)
    {
        if (owner->objectName().isEmpty())
            owner->setObjectName("owner");
        owner->resize(842, 558);
        lineEdit = new QLineEdit(owner);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(350, 190, 113, 24));

        retranslateUi(owner);

        QMetaObject::connectSlotsByName(owner);
    } // setupUi

    void retranslateUi(QWidget *owner)
    {
        owner->setWindowTitle(QCoreApplication::translate("owner", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class owner: public Ui_owner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNER_H
