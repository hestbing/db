/********************************************************************************
** Form generated from reading UI file 'avto.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVTO_H
#define UI_AVTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_avto
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *avto)
    {
        if (avto->objectName().isEmpty())
            avto->setObjectName(QStringLiteral("avto"));
        avto->resize(500, 150);
        avto->setMaximumSize(QSize(500, 150));
        centralwidget = new QWidget(avto);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);

        avto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(avto);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 26));
        avto->setMenuBar(menubar);
        statusbar = new QStatusBar(avto);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        avto->setStatusBar(statusbar);

        retranslateUi(avto);

        QMetaObject::connectSlotsByName(avto);
    } // setupUi

    void retranslateUi(QMainWindow *avto)
    {
        avto->setWindowTitle(QApplication::translate("avto", "MainWindow", 0));
        label->setText(QApplication::translate("avto", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", 0));
        pushButton->setText(QApplication::translate("avto", "\320\222\320\276\320\271\321\202\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class avto: public Ui_avto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVTO_H
