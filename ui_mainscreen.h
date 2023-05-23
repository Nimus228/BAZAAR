/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

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

class Ui_mainscreen
{
public:
    QGroupBox *groupBox_2;
    QPushButton *bazaar;
    QPushButton *miniProf;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *showCaseV;
    QWidget *filGroup;
    QLabel *label_6;
    QLineEdit *endd;
    QLineEdit *startt;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *findInName;
    QPushButton *filtr;

    void setupUi(QWidget *mainscreen)
    {
        if (mainscreen->objectName().isEmpty())
            mainscreen->setObjectName("mainscreen");
        mainscreen->resize(973, 614);
        groupBox_2 = new QGroupBox(mainscreen);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 10, 951, 61));
        bazaar = new QPushButton(groupBox_2);
        bazaar->setObjectName("bazaar");
        bazaar->setGeometry(QRect(10, 10, 191, 41));
        QFont font;
        font.setPointSize(29);
        bazaar->setFont(font);
        miniProf = new QPushButton(groupBox_2);
        miniProf->setObjectName("miniProf");
        miniProf->setGeometry(QRect(840, 10, 101, 41));
        miniProf->setCheckable(true);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(851, 20, 81, 20));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(851, 20, 51, 20));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(871, 20, 51, 20));
        label_3->raise();
        label_2->raise();
        label->raise();
        bazaar->raise();
        miniProf->raise();
        groupBox_4 = new QGroupBox(mainscreen);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 80, 951, 521));
        scrollArea = new QScrollArea(groupBox_4);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 20, 571, 501));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 569, 499));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 941, 501));
        showCaseV = new QVBoxLayout(verticalLayoutWidget);
        showCaseV->setObjectName("showCaseV");
        showCaseV->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        filGroup = new QWidget(groupBox_4);
        filGroup->setObjectName("filGroup");
        filGroup->setGeometry(QRect(590, 80, 341, 101));
        label_6 = new QLabel(filGroup);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 60, 49, 21));
        endd = new QLineEdit(filGroup);
        endd->setObjectName("endd");
        endd->setGeometry(QRect(210, 20, 111, 24));
        startt = new QLineEdit(filGroup);
        startt->setObjectName("startt");
        startt->setGeometry(QRect(40, 20, 113, 24));
        label_5 = new QLabel(filGroup);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 20, 21, 21));
        label_4 = new QLabel(filGroup);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 20, 21, 21));
        findInName = new QLineEdit(filGroup);
        findInName->setObjectName("findInName");
        findInName->setGeometry(QRect(82, 60, 241, 24));
        filtr = new QPushButton(groupBox_4);
        filtr->setObjectName("filtr");
        filtr->setGeometry(QRect(600, 20, 321, 51));
        filtr->setCheckable(true);

        retranslateUi(mainscreen);

        QMetaObject::connectSlotsByName(mainscreen);
    } // setupUi

    void retranslateUi(QWidget *mainscreen)
    {
        mainscreen->setWindowTitle(QCoreApplication::translate("mainscreen", "Form", nullptr));
        groupBox_2->setTitle(QString());
        bazaar->setText(QCoreApplication::translate("mainscreen", "BAZAAR", nullptr));
        miniProf->setText(QCoreApplication::translate("mainscreen", "\320\274\320\270\320\275\320\270-\320\277\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("mainscreen", "\320\277\320\276\320\272\320\260 \321\202\321\203\321\202 \321\202\320\270\320\277 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("mainscreen", "\320\277\320\276\320\272\320\260 \321\202\321\203\321\202 \320\273\320\276\320\263\320\270\320\275", nullptr));
        label->setText(QCoreApplication::translate("mainscreen", "\321\202\321\203\321\202 \320\261\321\203\320\264\321\203\321\202 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        groupBox_4->setTitle(QString());
        label_6->setText(QCoreApplication::translate("mainscreen", "\320\237\320\236\320\230\320\241\320\232:", nullptr));
        label_5->setText(QCoreApplication::translate("mainscreen", "\320\224\320\236:", nullptr));
        label_4->setText(QCoreApplication::translate("mainscreen", "\320\236\320\242:", nullptr));
        filtr->setText(QCoreApplication::translate("mainscreen", "\320\244\320\230\320\233\320\254\320\240\320\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainscreen: public Ui_mainscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
