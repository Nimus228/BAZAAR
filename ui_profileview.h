/********************************************************************************
** Form generated from reading UI file 'profileview.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEVIEW_H
#define UI_PROFILEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profileView
{
public:
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *img;
    QLabel *log;
    QPushButton *backBut;
    QTextEdit *status;
    QLabel *label;
    QLineEdit *description2;
    QLineEdit *rang;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QTextEdit *description;
    QGroupBox *groupBox_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *showcase;

    void setupUi(QWidget *profileView)
    {
        if (profileView->objectName().isEmpty())
            profileView->setObjectName("profileView");
        profileView->resize(972, 534);
        groupBox_2 = new QGroupBox(profileView);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 10, 311, 511));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 311, 539));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        img = new QPushButton(verticalLayoutWidget_2);
        img->setObjectName("img");
        img->setEnabled(true);
        img->setMinimumSize(QSize(300, 300));
        img->setFlat(true);

        verticalLayout->addWidget(img);

        log = new QLabel(verticalLayoutWidget_2);
        log->setObjectName("log");
        log->setMaximumSize(QSize(16777211, 167771));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font.setPointSize(22);
        font.setBold(false);
        log->setFont(font);
        log->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(log);

        backBut = new QPushButton(verticalLayoutWidget_2);
        backBut->setObjectName("backBut");

        verticalLayout->addWidget(backBut);

        status = new QTextEdit(verticalLayoutWidget_2);
        status->setObjectName("status");
        status->setEnabled(false);
        status->setMinimumSize(QSize(0, 30));
        status->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(status);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        description2 = new QLineEdit(verticalLayoutWidget_2);
        description2->setObjectName("description2");
        description2->setEnabled(false);
        description2->setMinimumSize(QSize(0, 33));

        verticalLayout->addWidget(description2);

        rang = new QLineEdit(verticalLayoutWidget_2);
        rang->setObjectName("rang");
        rang->setEnabled(false);
        rang->setMinimumSize(QSize(0, 33));

        verticalLayout->addWidget(rang);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox_3 = new QGroupBox(profileView);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(330, 10, 631, 261));
        description = new QTextEdit(groupBox_3);
        description->setObjectName("description");
        description->setEnabled(false);
        description->setGeometry(QRect(10, 30, 611, 221));
        description->setAutoFormatting(QTextEdit::AutoNone);
        groupBox_4 = new QGroupBox(profileView);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(330, 290, 629, 229));
        horizontalLayoutWidget_2 = new QWidget(groupBox_4);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 20, 631, 211));
        showcase = new QHBoxLayout(horizontalLayoutWidget_2);
        showcase->setObjectName("showcase");
        showcase->setContentsMargins(0, 0, 0, 0);

        retranslateUi(profileView);

        QMetaObject::connectSlotsByName(profileView);
    } // setupUi

    void retranslateUi(QWidget *profileView)
    {
        profileView->setWindowTitle(QCoreApplication::translate("profileView", "Form", nullptr));
        groupBox_2->setTitle(QString());
        img->setText(QCoreApplication::translate("profileView", "\321\204\320\276\321\202\320\272\320\260", nullptr));
        log->setText(QCoreApplication::translate("profileView", "\320\233\320\236\320\223\320\230\320\235", nullptr));
        backBut->setText(QCoreApplication::translate("profileView", "\320\275\320\260\320\267\320\260\320\264", nullptr));
        status->setHtml(QCoreApplication::translate("profileView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">EXECUTOR</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("profileView", "\320\244\320\230\320\236:", nullptr));
        description2->setText(QString());
        rang->setText(QCoreApplication::translate("profileView", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263: ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("profileView", "\320\236 \321\201\320\265\320\261\320\265", nullptr));
        description->setHtml(QCoreApplication::translate("profileView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("profileView", "\320\237\321\200\320\270\320\275\321\217\321\202\321\213\320\265 \320\267\320\260\320\272\320\260\320\267\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profileView: public Ui_profileView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEVIEW_H
