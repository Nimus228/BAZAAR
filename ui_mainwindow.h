/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *log;
    QLineEdit *pas;
    QPushButton *exit;
    QPushButton *reg;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(250, 250, 261, 181));
        frame->setStyleSheet(QString::fromUtf8("border-radius:30px; color:af5050; background: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 201, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        log = new QLineEdit(layoutWidget);
        log->setObjectName("log");
        QFont font;
        font.setPointSize(11);
        log->setFont(font);
        log->setStyleSheet(QString::fromUtf8("border-radius:30px; color: #af5050; background: #d9d9d9;"));
        log->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(log);

        pas = new QLineEdit(layoutWidget);
        pas->setObjectName("pas");
        pas->setEnabled(true);
        pas->setFont(font);
        pas->setStyleSheet(QString::fromUtf8("border-radius:30px; color: #af5050; background: #d9d9d9;"));
        pas->setEchoMode(QLineEdit::Normal);
        pas->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pas);

        exit = new QPushButton(layoutWidget);
        exit->setObjectName("exit");
        exit->setFont(font);
        exit->setStyleSheet(QString::fromUtf8("border-radius:30px; color: #af5050; "));

        verticalLayout->addWidget(exit);

        reg = new QPushButton(layoutWidget);
        reg->setObjectName("reg");
        QFont font1;
        font1.setPointSize(10);
        reg->setFont(font1);
        reg->setStyleSheet(QString::fromUtf8("border-radius:30px; color: #af5050;"));

        verticalLayout->addWidget(reg);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 180, 201, 61));
        QFont font2;
        font2.setPointSize(33);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("border-radius:30px; color: #af5050;"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        log->setText(QCoreApplication::translate("MainWindow", "\320\233\320\236\320\223\320\230\320\235", nullptr));
        pas->setText(QCoreApplication::translate("MainWindow", "\320\237\320\220\320\240\320\236\320\233\320\254", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\320\222\320\245\320\236\320\224", nullptr));
        reg->setText(QCoreApplication::translate("MainWindow", "\320\227\320\220\320\240\320\225\320\223\320\230\320\241\320\242\320\240\320\230\320\240\320\236\320\222\320\220\320\242\320\254\320\241\320\257", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "BAZZAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
