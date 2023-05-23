/********************************************************************************
** Form generated from reading UI file 'viewadv.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWADV_H
#define UI_VIEWADV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewAdv
{
public:
    QLineEdit *cost;
    QLineEdit *name;
    QLineEdit *lineEdit_2;
    QPushButton *cansell;
    QTextEdit *description;
    QPushButton *editOrP;
    QLabel *img;
    QPushButton *repOrCh;
    QPushButton *writeCust;

    void setupUi(QWidget *viewAdv)
    {
        if (viewAdv->objectName().isEmpty())
            viewAdv->setObjectName("viewAdv");
        viewAdv->resize(744, 411);
        cost = new QLineEdit(viewAdv);
        cost->setObjectName("cost");
        cost->setEnabled(false);
        cost->setGeometry(QRect(450, 230, 251, 31));
        name = new QLineEdit(viewAdv);
        name->setObjectName("name");
        name->setEnabled(false);
        name->setGeometry(QRect(340, 10, 381, 41));
        lineEdit_2 = new QLineEdit(viewAdv);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(360, 230, 61, 31));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        cansell = new QPushButton(viewAdv);
        cansell->setObjectName("cansell");
        cansell->setGeometry(QRect(550, 300, 171, 51));
        QFont font;
        font.setPointSize(15);
        cansell->setFont(font);
        description = new QTextEdit(viewAdv);
        description->setObjectName("description");
        description->setEnabled(false);
        description->setGeometry(QRect(340, 80, 381, 121));
        editOrP = new QPushButton(viewAdv);
        editOrP->setObjectName("editOrP");
        editOrP->setGeometry(QRect(340, 300, 171, 51));
        editOrP->setFont(font);
        img = new QLabel(viewAdv);
        img->setObjectName("img");
        img->setGeometry(QRect(10, 10, 291, 391));
        repOrCh = new QPushButton(viewAdv);
        repOrCh->setObjectName("repOrCh");
        repOrCh->setGeometry(QRect(340, 360, 291, 41));
        QFont font1;
        font1.setPointSize(12);
        repOrCh->setFont(font1);
        writeCust = new QPushButton(viewAdv);
        writeCust->setObjectName("writeCust");
        writeCust->setEnabled(false);
        writeCust->setGeometry(QRect(640, 360, 81, 41));

        retranslateUi(viewAdv);

        QMetaObject::connectSlotsByName(viewAdv);
    } // setupUi

    void retranslateUi(QWidget *viewAdv)
    {
        viewAdv->setWindowTitle(QCoreApplication::translate("viewAdv", "Form", nullptr));
        cost->setText(QCoreApplication::translate("viewAdv", "1000", nullptr));
        name->setText(QCoreApplication::translate("viewAdv", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("viewAdv", "\320\246\320\225\320\235\320\220:", nullptr));
        cansell->setText(QCoreApplication::translate("viewAdv", "\320\235\320\220\320\227\320\220\320\224", nullptr));
        description->setHtml(QCoreApplication::translate("viewAdv", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265</p></body></html>", nullptr));
        editOrP->setText(QCoreApplication::translate("viewAdv", "\320\237\320\240\320\230\320\235\320\257\320\242\320\254", nullptr));
        img->setText(QCoreApplication::translate("viewAdv", "\321\204\320\276\321\202\320\272\320\260", nullptr));
        repOrCh->setText(QString());
        writeCust->setText(QCoreApplication::translate("viewAdv", "\321\201\320\277\321\200\320\276\321\201\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewAdv: public Ui_viewAdv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWADV_H
