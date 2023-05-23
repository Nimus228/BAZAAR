/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *log;
    QLineEdit *pas;
    QLineEdit *repeatPas;
    QLineEdit *mail;
    QRadioButton *typeBut;
    QHBoxLayout *horizontalLayout;
    QPushButton *complete;
    QPushButton *LogIn;

    void setupUi(QWidget *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName("registration");
        registration->resize(608, 475);
        layoutWidget = new QWidget(registration);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(200, 150, 170, 176));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        log = new QLineEdit(layoutWidget);
        log->setObjectName("log");
        log->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(log);

        pas = new QLineEdit(layoutWidget);
        pas->setObjectName("pas");
        pas->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pas);

        repeatPas = new QLineEdit(layoutWidget);
        repeatPas->setObjectName("repeatPas");
        repeatPas->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(repeatPas);

        mail = new QLineEdit(layoutWidget);
        mail->setObjectName("mail");
        mail->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(mail);

        typeBut = new QRadioButton(layoutWidget);
        typeBut->setObjectName("typeBut");

        verticalLayout->addWidget(typeBut);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        complete = new QPushButton(layoutWidget);
        complete->setObjectName("complete");

        horizontalLayout->addWidget(complete);

        LogIn = new QPushButton(layoutWidget);
        LogIn->setObjectName("LogIn");

        horizontalLayout->addWidget(LogIn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QWidget *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "Form", nullptr));
        log->setText(QCoreApplication::translate("registration", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        pas->setText(QCoreApplication::translate("registration", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        repeatPas->setText(QCoreApplication::translate("registration", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        mail->setText(QCoreApplication::translate("registration", "\320\255\320\273.\320\277\320\276\321\207\321\202\320\260", nullptr));
        typeBut->setText(QCoreApplication::translate("registration", "\320\267\320\260\320\272\320\260\320\267\321\207\320\270\320\272", nullptr));
        complete->setText(QCoreApplication::translate("registration", "\320\227\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\320\265", nullptr));
        LogIn->setText(QCoreApplication::translate("registration", "\320\222\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
