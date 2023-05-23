/********************************************************************************
** Form generated from reading UI file 'choosing.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSING_H
#define UI_CHOOSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choosing
{
public:
    QGroupBox *groupBox_2;
    QPushButton *bazaar;
    QPushButton *mini;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *showCaseV;

    void setupUi(QWidget *choosing)
    {
        if (choosing->objectName().isEmpty())
            choosing->setObjectName("choosing");
        choosing->resize(713, 594);
        groupBox_2 = new QGroupBox(choosing);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 10, 691, 61));
        bazaar = new QPushButton(groupBox_2);
        bazaar->setObjectName("bazaar");
        bazaar->setGeometry(QRect(10, 10, 191, 41));
        QFont font;
        font.setPointSize(29);
        bazaar->setFont(font);
        mini = new QPushButton(groupBox_2);
        mini->setObjectName("mini");
        mini->setGeometry(QRect(580, 10, 101, 41));
        mini->setCheckable(true);
        scrollArea = new QScrollArea(choosing);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 80, 691, 501));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 689, 499));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 941, 501));
        showCaseV = new QVBoxLayout(verticalLayoutWidget);
        showCaseV->setObjectName("showCaseV");
        showCaseV->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(choosing);

        QMetaObject::connectSlotsByName(choosing);
    } // setupUi

    void retranslateUi(QWidget *choosing)
    {
        choosing->setWindowTitle(QCoreApplication::translate("choosing", "Form", nullptr));
        groupBox_2->setTitle(QString());
        bazaar->setText(QCoreApplication::translate("choosing", "BAZAAR", nullptr));
        mini->setText(QCoreApplication::translate("choosing", "\320\274\320\270\320\275\320\270-\320\277\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choosing: public Ui_choosing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSING_H
