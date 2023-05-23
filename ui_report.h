/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QPushButton *choice;
    QLineEdit *reason;
    QLineEdit *description;
    QPushButton *accept;
    QPushButton *cancel;

    void setupUi(QWidget *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName("report");
        report->resize(410, 255);
        choice = new QPushButton(report);
        choice->setObjectName("choice");
        choice->setGeometry(QRect(10, 10, 391, 41));
        reason = new QLineEdit(report);
        reason->setObjectName("reason");
        reason->setGeometry(QRect(10, 70, 391, 41));
        description = new QLineEdit(report);
        description->setObjectName("description");
        description->setGeometry(QRect(10, 130, 391, 51));
        accept = new QPushButton(report);
        accept->setObjectName("accept");
        accept->setGeometry(QRect(10, 200, 181, 41));
        cancel = new QPushButton(report);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(220, 200, 181, 41));

        retranslateUi(report);

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QWidget *report)
    {
        report->setWindowTitle(QCoreApplication::translate("report", "Form", nullptr));
        choice->setText(QCoreApplication::translate("report", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\202\320\270\320\277", nullptr));
        reason->setText(QCoreApplication::translate("report", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260", nullptr));
        description->setText(QCoreApplication::translate("report", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
        accept->setText(QCoreApplication::translate("report", "\320\237\320\236\320\224\320\242\320\222\320\225\320\240\320\224\320\230\320\242\320\254", nullptr));
        cancel->setText(QCoreApplication::translate("report", "\320\236\320\242\320\234\320\225\320\235\320\230\320\242\320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
