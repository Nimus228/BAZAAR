/********************************************************************************
** Form generated from reading UI file 'createadv.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEADV_H
#define UI_CREATEADV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createAdv
{
public:
    QPushButton *img;
    QLineEdit *name;
    QTextEdit *description;
    QLineEdit *lineEdit_2;
    QLineEdit *cost;
    QPushButton *savee;
    QPushButton *cansell;

    void setupUi(QWidget *createAdv)
    {
        if (createAdv->objectName().isEmpty())
            createAdv->setObjectName("createAdv");
        createAdv->resize(715, 381);
        img = new QPushButton(createAdv);
        img->setObjectName("img");
        img->setGeometry(QRect(20, 20, 271, 341));
        name = new QLineEdit(createAdv);
        name->setObjectName("name");
        name->setGeometry(QRect(310, 20, 381, 41));
        description = new QTextEdit(createAdv);
        description->setObjectName("description");
        description->setGeometry(QRect(310, 90, 381, 121));
        lineEdit_2 = new QLineEdit(createAdv);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(330, 240, 61, 31));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        cost = new QLineEdit(createAdv);
        cost->setObjectName("cost");
        cost->setGeometry(QRect(420, 240, 251, 31));
        savee = new QPushButton(createAdv);
        savee->setObjectName("savee");
        savee->setGeometry(QRect(310, 310, 171, 51));
        QFont font;
        font.setPointSize(15);
        savee->setFont(font);
        cansell = new QPushButton(createAdv);
        cansell->setObjectName("cansell");
        cansell->setGeometry(QRect(520, 310, 171, 51));
        cansell->setFont(font);

        retranslateUi(createAdv);

        QMetaObject::connectSlotsByName(createAdv);
    } // setupUi

    void retranslateUi(QWidget *createAdv)
    {
        createAdv->setWindowTitle(QCoreApplication::translate("createAdv", "Form", nullptr));
        img->setText(QCoreApplication::translate("createAdv", "\320\244\320\276\321\202\320\272\320\260", nullptr));
        name->setText(QCoreApplication::translate("createAdv", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        description->setHtml(QCoreApplication::translate("createAdv", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265</p></body></html>", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("createAdv", "\320\246\320\225\320\235\320\220:", nullptr));
        cost->setText(QCoreApplication::translate("createAdv", "1000", nullptr));
        savee->setText(QCoreApplication::translate("createAdv", "\320\241\320\236\320\245\320\240\320\220\320\235\320\230\320\242\320\254", nullptr));
        cansell->setText(QCoreApplication::translate("createAdv", "\320\236\320\242\320\234\320\225\320\235\320\230\320\242\320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createAdv: public Ui_createAdv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEADV_H
