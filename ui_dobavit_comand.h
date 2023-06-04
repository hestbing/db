/********************************************************************************
** Form generated from reading UI file 'dobavit_comand.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOBAVIT_COMAND_H
#define UI_DOBAVIT_COMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dobavit_comand
{
public:
    QFormLayout *formLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_20;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;

    void setupUi(QDialog *dobavit_comand)
    {
        if (dobavit_comand->objectName().isEmpty())
            dobavit_comand->setObjectName(QStringLiteral("dobavit_comand"));
        dobavit_comand->resize(347, 231);
        formLayout = new QFormLayout(dobavit_comand);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        pushButton_2 = new QPushButton(dobavit_comand);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_2);

        pushButton = new QPushButton(dobavit_comand);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_9 = new QLabel(dobavit_comand);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 6, 0, 1, 1);

        label_7 = new QLabel(dobavit_comand);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_4 = new QLabel(dobavit_comand);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_8 = new QLabel(dobavit_comand);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        label_20 = new QLabel(dobavit_comand);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_2->addWidget(label_20, 5, 0, 1, 1);

        comboBox = new QComboBox(dobavit_comand);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 3, 1, 1, 1);

        lineEdit = new QLineEdit(dobavit_comand);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(dobavit_comand);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 5, 1, 1, 1);

        label = new QLabel(dobavit_comand);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 6, 1, 1, 1);


        formLayout->setLayout(0, QFormLayout::SpanningRole, gridLayout_2);


        retranslateUi(dobavit_comand);

        QMetaObject::connectSlotsByName(dobavit_comand);
    } // setupUi

    void retranslateUi(QDialog *dobavit_comand)
    {
        dobavit_comand->setWindowTitle(QApplication::translate("dobavit_comand", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("dobavit_comand", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", 0));
        pushButton->setText(QApplication::translate("dobavit_comand", "\320\276\320\261\320\275\320\276\320\262\320\270\321\202\321\214 ID\321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        label_9->setText(QApplication::translate("dobavit_comand", "\320\222\320\270\320\264 \321\201\320\277\320\276\321\200\321\202\320\260", 0));
        label_7->setText(QApplication::translate("dobavit_comand", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260", 0));
        label_4->setText(QApplication::translate("dobavit_comand", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260", 0));
        label_8->setText(QApplication::translate("dobavit_comand", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        label_20->setText(QApplication::translate("dobavit_comand", "\320\242\321\200\320\265\320\275\320\265\321\200", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dobavit_comand: public Ui_dobavit_comand {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOBAVIT_COMAND_H
