/********************************************************************************
** Form generated from reading UI file 'reportview.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTVIEW_H
#define UI_REPORTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reportView
{
public:
    QGroupBox *groupBox;
    QPushButton *bazaar;
    QPushButton *mini;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *showCaseV;
    QLineEdit *choice;
    QLineEdit *reas;
    QLineEdit *desc;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *ban;
    QPushButton *neBan;

    void setupUi(QWidget *reportView)
    {
        if (reportView->objectName().isEmpty())
            reportView->setObjectName("reportView");
        reportView->resize(976, 592);
        groupBox = new QGroupBox(reportView);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 951, 61));
        bazaar = new QPushButton(groupBox);
        bazaar->setObjectName("bazaar");
        bazaar->setGeometry(QRect(10, 10, 191, 41));
        QFont font;
        font.setPointSize(29);
        bazaar->setFont(font);
        mini = new QPushButton(groupBox);
        mini->setObjectName("mini");
        mini->setGeometry(QRect(840, 10, 101, 41));
        mini->setCheckable(true);
        scrollArea = new QScrollArea(reportView);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 80, 501, 501));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 499, 499));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 501, 501));
        showCaseV = new QVBoxLayout(verticalLayoutWidget);
        showCaseV->setObjectName("showCaseV");
        showCaseV->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        choice = new QLineEdit(reportView);
        choice->setObjectName("choice");
        choice->setEnabled(false);
        choice->setGeometry(QRect(520, 110, 441, 41));
        reas = new QLineEdit(reportView);
        reas->setObjectName("reas");
        reas->setEnabled(false);
        reas->setGeometry(QRect(520, 180, 441, 41));
        desc = new QLineEdit(reportView);
        desc->setObjectName("desc");
        desc->setEnabled(false);
        desc->setGeometry(QRect(520, 250, 441, 51));
        label = new QLabel(reportView);
        label->setObjectName("label");
        label->setGeometry(QRect(520, 90, 49, 16));
        label_2 = new QLabel(reportView);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(520, 160, 91, 16));
        label_3 = new QLabel(reportView);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 230, 91, 16));
        ban = new QPushButton(reportView);
        ban->setObjectName("ban");
        ban->setEnabled(false);
        ban->setGeometry(QRect(520, 320, 211, 51));
        neBan = new QPushButton(reportView);
        neBan->setObjectName("neBan");
        neBan->setEnabled(false);
        neBan->setGeometry(QRect(750, 320, 211, 51));

        retranslateUi(reportView);

        QMetaObject::connectSlotsByName(reportView);
    } // setupUi

    void retranslateUi(QWidget *reportView)
    {
        reportView->setWindowTitle(QCoreApplication::translate("reportView", "Form", nullptr));
        groupBox->setTitle(QString());
        bazaar->setText(QCoreApplication::translate("reportView", "BAZAAR", nullptr));
        mini->setText(QCoreApplication::translate("reportView", "\320\274\320\270\320\275\320\270-\320\277\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        label->setText(QCoreApplication::translate("reportView", "\320\242\320\270\320\277:", nullptr));
        label_2->setText(QCoreApplication::translate("reportView", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("reportView", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        ban->setText(QCoreApplication::translate("reportView", "\320\227\320\220\320\221\320\233\320\236\320\232\320\230\320\240\320\236\320\222\320\220\320\242\320\254", nullptr));
        neBan->setText(QCoreApplication::translate("reportView", "\320\236\320\242\320\232\320\233\320\236\320\235\320\230\320\242\320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reportView: public Ui_reportView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTVIEW_H
