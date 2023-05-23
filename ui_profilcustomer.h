/********************************************************************************
** Form generated from reading UI file 'profilcustomer.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILCUSTOMER_H
#define UI_PROFILCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profilCustomer
{
public:
    QGroupBox *groupBox_3;
    QTextEdit *description;
    QGroupBox *groupBox_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *showCase;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *img;
    QLabel *log;
    QPushButton *editBut;
    QTextEdit *status;
    QLabel *label;
    QLineEdit *description2;
    QLineEdit *rang;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QPushButton *mini;
    QPushButton *bazaar;
    QPushButton *addBut;

    void setupUi(QWidget *profilCustomer)
    {
        if (profilCustomer->objectName().isEmpty())
            profilCustomer->setObjectName("profilCustomer");
        profilCustomer->resize(973, 599);
        groupBox_3 = new QGroupBox(profilCustomer);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(330, 80, 631, 261));
        description = new QTextEdit(groupBox_3);
        description->setObjectName("description");
        description->setEnabled(false);
        description->setGeometry(QRect(10, 30, 611, 221));
        description->setAutoFormatting(QTextEdit::AutoNone);
        groupBox_4 = new QGroupBox(profilCustomer);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(330, 360, 629, 229));
        scrollArea = new QScrollArea(groupBox_4);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 20, 631, 211));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"    border: 2px solid grey;\n"
"    background: #af5050;\n"
"    height: 15px;\n"
"    margin: 0px 20px 0 20px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: white;\n"
"    min-width: 20px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"    border: 2px solid grey;\n"
"    background: #af5050;\n"
"    width: 20px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 2px solid grey;\n"
"    background: #af5050;\n"
"    width: 20px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 629, 209));
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 631, 211));
        showCase = new QHBoxLayout(horizontalLayoutWidget);
        showCase->setObjectName("showCase");
        showCase->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox_2 = new QGroupBox(profilCustomer);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 80, 311, 511));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 311, 539));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        img = new QPushButton(verticalLayoutWidget);
        img->setObjectName("img");
        img->setEnabled(true);
        img->setMinimumSize(QSize(300, 300));
        img->setFlat(true);

        verticalLayout->addWidget(img);

        log = new QLabel(verticalLayoutWidget);
        log->setObjectName("log");
        log->setMaximumSize(QSize(16777211, 167771));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font.setPointSize(22);
        font.setBold(false);
        log->setFont(font);
        log->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(log);

        editBut = new QPushButton(verticalLayoutWidget);
        editBut->setObjectName("editBut");
        editBut->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(editBut);

        status = new QTextEdit(verticalLayoutWidget);
        status->setObjectName("status");
        status->setEnabled(false);
        status->setMinimumSize(QSize(0, 30));
        status->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(status);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        description2 = new QLineEdit(verticalLayoutWidget);
        description2->setObjectName("description2");
        description2->setEnabled(false);
        description2->setMinimumSize(QSize(0, 26));

        verticalLayout->addWidget(description2);

        rang = new QLineEdit(verticalLayoutWidget);
        rang->setObjectName("rang");
        rang->setEnabled(false);
        rang->setMinimumSize(QSize(0, 26));

        verticalLayout->addWidget(rang);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(profilCustomer);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 951, 61));
        mini = new QPushButton(groupBox);
        mini->setObjectName("mini");
        mini->setGeometry(QRect(840, 10, 101, 41));
        mini->setCheckable(true);
        bazaar = new QPushButton(groupBox);
        bazaar->setObjectName("bazaar");
        bazaar->setGeometry(QRect(10, 10, 191, 41));
        QFont font1;
        font1.setPointSize(29);
        bazaar->setFont(font1);
        addBut = new QPushButton(profilCustomer);
        addBut->setObjectName("addBut");
        addBut->setGeometry(QRect(880, 350, 81, 24));
        addBut->setStyleSheet(QString::fromUtf8("border-radius:5px;border: 1px solid #345781; color:black;background: white;"));

        retranslateUi(profilCustomer);

        QMetaObject::connectSlotsByName(profilCustomer);
    } // setupUi

    void retranslateUi(QWidget *profilCustomer)
    {
        profilCustomer->setWindowTitle(QCoreApplication::translate("profilCustomer", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("profilCustomer", "\320\236 \321\201\320\265\320\261\320\265", nullptr));
        description->setHtml(QCoreApplication::translate("profilCustomer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("profilCustomer", "\320\222\320\270\321\202\321\200\320\270\320\275\320\260 \320\267\320\260\320\272\320\260\320\267\320\276\320\262", nullptr));
        groupBox_2->setTitle(QString());
        img->setText(QCoreApplication::translate("profilCustomer", "\321\204\320\276\321\202\320\272\320\260", nullptr));
        log->setText(QCoreApplication::translate("profilCustomer", "\320\233\320\236\320\223\320\230\320\235", nullptr));
        editBut->setText(QCoreApplication::translate("profilCustomer", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        status->setHtml(QCoreApplication::translate("profilCustomer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">CUSTOMER</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("profilCustomer", "\320\244\320\230\320\236:", nullptr));
        description2->setText(QString());
        rang->setText(QCoreApplication::translate("profilCustomer", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263: ", nullptr));
        groupBox->setTitle(QString());
        mini->setText(QCoreApplication::translate("profilCustomer", "\320\234\320\270\320\275\320\270-\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        bazaar->setText(QCoreApplication::translate("profilCustomer", "BAZAAR", nullptr));
        addBut->setText(QCoreApplication::translate("profilCustomer", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profilCustomer: public Ui_profilCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILCUSTOMER_H
