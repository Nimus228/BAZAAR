/********************************************************************************
** Form generated from reading UI file 'messages.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGES_H
#define UI_MESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_messages
{
public:

    void setupUi(QWidget *messages)
    {
        if (messages->objectName().isEmpty())
            messages->setObjectName("messages");
        messages->resize(970, 658);

        retranslateUi(messages);

        QMetaObject::connectSlotsByName(messages);
    } // setupUi

    void retranslateUi(QWidget *messages)
    {
        messages->setWindowTitle(QCoreApplication::translate("messages", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class messages: public Ui_messages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGES_H
