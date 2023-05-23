/********************************************************************************
** Form generated from reading UI file 'profilemod.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEMOD_H
#define UI_PROFILEMOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profileMod
{
public:
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *img_2;
    QLabel *log_2;
    QPushButton *editBut_2;
    QTextEdit *status_2;
    QLabel *label_2;
    QLineEdit *description2_2;
    QLineEdit *rang_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QPushButton *mini_2;
    QPushButton *bazaar_2;

    void setupUi(QWidget *profileMod)
    {
        if (profileMod->objectName().isEmpty())
            profileMod->setObjectName("profileMod");
        profileMod->resize(334, 601);
        groupBox_2 = new QGroupBox(profileMod);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 80, 311, 511));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 311, 539));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        img_2 = new QPushButton(verticalLayoutWidget_2);
        img_2->setObjectName("img_2");
        img_2->setEnabled(true);
        img_2->setMinimumSize(QSize(300, 300));
        img_2->setFlat(true);

        verticalLayout_2->addWidget(img_2);

        log_2 = new QLabel(verticalLayoutWidget_2);
        log_2->setObjectName("log_2");
        log_2->setMaximumSize(QSize(16777211, 167771));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font.setPointSize(22);
        font.setBold(false);
        log_2->setFont(font);
        log_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(log_2);

        editBut_2 = new QPushButton(verticalLayoutWidget_2);
        editBut_2->setObjectName("editBut_2");
        editBut_2->setMinimumSize(QSize(0, 35));

        verticalLayout_2->addWidget(editBut_2);

        status_2 = new QTextEdit(verticalLayoutWidget_2);
        status_2->setObjectName("status_2");
        status_2->setEnabled(false);
        status_2->setMinimumSize(QSize(0, 30));
        status_2->setMaximumSize(QSize(16777215, 25));

        verticalLayout_2->addWidget(status_2);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        description2_2 = new QLineEdit(verticalLayoutWidget_2);
        description2_2->setObjectName("description2_2");
        description2_2->setEnabled(false);
        description2_2->setMinimumSize(QSize(0, 26));

        verticalLayout_2->addWidget(description2_2);

        rang_2 = new QLineEdit(verticalLayoutWidget_2);
        rang_2->setObjectName("rang_2");
        rang_2->setEnabled(false);
        rang_2->setMinimumSize(QSize(0, 26));

        verticalLayout_2->addWidget(rang_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        groupBox = new QGroupBox(profileMod);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 311, 61));
        mini_2 = new QPushButton(groupBox);
        mini_2->setObjectName("mini_2");
        mini_2->setGeometry(QRect(200, 10, 101, 41));
        mini_2->setCheckable(true);
        bazaar_2 = new QPushButton(groupBox);
        bazaar_2->setObjectName("bazaar_2");
        bazaar_2->setGeometry(QRect(10, 10, 181, 41));
        QFont font1;
        font1.setPointSize(29);
        bazaar_2->setFont(font1);

        retranslateUi(profileMod);

        QMetaObject::connectSlotsByName(profileMod);
    } // setupUi

    void retranslateUi(QWidget *profileMod)
    {
        profileMod->setWindowTitle(QCoreApplication::translate("profileMod", "Form", nullptr));
        groupBox_2->setTitle(QString());
        img_2->setText(QCoreApplication::translate("profileMod", "\321\204\320\276\321\202\320\272\320\260", nullptr));
        log_2->setText(QCoreApplication::translate("profileMod", "\320\233\320\236\320\223\320\230\320\235", nullptr));
        editBut_2->setText(QCoreApplication::translate("profileMod", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        status_2->setHtml(QCoreApplication::translate("profileMod", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">MODERATOR</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("profileMod", "\320\244\320\230\320\236:", nullptr));
        description2_2->setText(QString());
        rang_2->setText(QCoreApplication::translate("profileMod", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263: ", nullptr));
        groupBox->setTitle(QString());
        mini_2->setText(QCoreApplication::translate("profileMod", "\320\234\320\270\320\275\320\270-\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        bazaar_2->setText(QCoreApplication::translate("profileMod", "BAZAAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profileMod: public Ui_profileMod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEMOD_H
