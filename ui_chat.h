/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QGroupBox *groupBox_2;
    QPushButton *bazaar;
    QPushButton *mini;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *showCaseV;
    QTextEdit *writeStory;
    QLineEdit *writeMes;
    QPushButton *send;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName("Chat");
        Chat->resize(973, 590);
        groupBox_2 = new QGroupBox(Chat);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 10, 951, 61));
        bazaar = new QPushButton(groupBox_2);
        bazaar->setObjectName("bazaar");
        bazaar->setGeometry(QRect(10, 10, 191, 41));
        QFont font;
        font.setPointSize(29);
        bazaar->setFont(font);
        mini = new QPushButton(groupBox_2);
        mini->setObjectName("mini");
        mini->setGeometry(QRect(840, 10, 101, 41));
        mini->setCheckable(true);
        scrollArea = new QScrollArea(Chat);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 80, 321, 501));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 319, 499));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 321, 501));
        showCaseV = new QVBoxLayout(verticalLayoutWidget);
        showCaseV->setObjectName("showCaseV");
        showCaseV->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        writeStory = new QTextEdit(Chat);
        writeStory->setObjectName("writeStory");
        writeStory->setEnabled(false);
        writeStory->setGeometry(QRect(340, 80, 621, 451));
        writeMes = new QLineEdit(Chat);
        writeMes->setObjectName("writeMes");
        writeMes->setEnabled(false);
        writeMes->setGeometry(QRect(340, 540, 521, 41));
        send = new QPushButton(Chat);
        send->setObjectName("send");
        send->setEnabled(false);
        send->setGeometry(QRect(870, 540, 91, 41));

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Form", nullptr));
        groupBox_2->setTitle(QString());
        bazaar->setText(QCoreApplication::translate("Chat", "BAZAAR", nullptr));
        mini->setText(QCoreApplication::translate("Chat", "\320\274\320\270\320\275\320\270-\320\277\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        send->setText(QCoreApplication::translate("Chat", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
