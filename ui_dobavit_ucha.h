/********************************************************************************
** Form generated from reading UI file 'dobavit_ucha.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOBAVIT_UCHA_H
#define UI_DOBAVIT_UCHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_dobavit_ucha
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QDateEdit *dateEdit;
    QSpinBox *spinBox;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QLabel *label_11;
    QLabel *label_13;
    QComboBox *comboBox_2;

    void setupUi(QDialog *dobavit_ucha)
    {
        if (dobavit_ucha->objectName().isEmpty())
            dobavit_ucha->setObjectName(QStringLiteral("dobavit_ucha"));
        dobavit_ucha->resize(282, 375);
        gridLayout = new QGridLayout(dobavit_ucha);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(dobavit_ucha);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        lineEdit_5 = new QLineEdit(dobavit_ucha);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 7, 1, 1, 1);

        label_9 = new QLabel(dobavit_ucha);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label_3 = new QLabel(dobavit_ucha);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(dobavit_ucha);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_7 = new QLabel(dobavit_ucha);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_10 = new QLabel(dobavit_ucha);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        lineEdit_3 = new QLineEdit(dobavit_ucha);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 4, 1, 1, 1);

        label = new QLabel(dobavit_ucha);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dateEdit = new QDateEdit(dobavit_ucha);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 5, 1, 1, 1);

        spinBox = new QSpinBox(dobavit_ucha);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(999999999);

        gridLayout->addWidget(spinBox, 0, 1, 1, 1);

        label_5 = new QLabel(dobavit_ucha);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_8 = new QLabel(dobavit_ucha);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        lineEdit = new QLineEdit(dobavit_ucha);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        label_4 = new QLabel(dobavit_ucha);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        pushButton = new QPushButton(dobavit_ucha);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 10, 0, 1, 2);

        lineEdit_2 = new QLineEdit(dobavit_ucha);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 1);

        label_6 = new QLabel(dobavit_ucha);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        pushButton_2 = new QPushButton(dobavit_ucha);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 11, 0, 1, 2);

        label_11 = new QLabel(dobavit_ucha);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 8, 1, 1, 1);

        label_13 = new QLabel(dobavit_ucha);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 6, 1, 1, 1);

        comboBox_2 = new QComboBox(dobavit_ucha);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 9, 1, 1, 1);


        retranslateUi(dobavit_ucha);

        QMetaObject::connectSlotsByName(dobavit_ucha);
    } // setupUi

    void retranslateUi(QDialog *dobavit_ucha)
    {
        dobavit_ucha->setWindowTitle(QApplication::translate("dobavit_ucha", "Dialog", 0));
        label_9->setText(QApplication::translate("dobavit_ucha", "\320\222\320\270\320\264_\321\201\320\277\320\276\321\200\321\202\320\260", 0));
        label_3->setText(QApplication::translate("dobavit_ucha", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", 0));
        label_2->setText(QApplication::translate("dobavit_ucha", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        label_7->setText(QApplication::translate("dobavit_ucha", "\320\237\320\276\320\273", 0));
        label_10->setText(QApplication::translate("dobavit_ucha", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260", 0));
        label->setText(QApplication::translate("dobavit_ucha", "ID\321\203\321\207\320\260\321\201\321\202\320\275\320\270\320\272\320\260", 0));
        label_5->setText(QApplication::translate("dobavit_ucha", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        label_8->setText(QApplication::translate("dobavit_ucha", "\320\234\320\265\321\201\321\202\320\276 \320\266\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276", 0));
        label_4->setText(QApplication::translate("dobavit_ucha", "\320\230\320\274\321\217", 0));
        pushButton->setText(QApplication::translate("dobavit_ucha", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 ID\321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        label_6->setText(QApplication::translate("dobavit_ucha", "\320\224\320\260\321\202\320\260_\321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", 0));
        pushButton_2->setText(QApplication::translate("dobavit_ucha", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", 0));
        label_11->setText(QString());
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dobavit_ucha: public Ui_dobavit_ucha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOBAVIT_UCHA_H
