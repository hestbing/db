/********************************************************************************
** Form generated from reading UI file 'dobavit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOBAVIT_H
#define UI_DOBAVIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_dobavit
{
public:
    QGridLayout *gridLayout_5;
    QPushButton *pushButton;
    QGridLayout *gridLayout_2;
    QLabel *label_20;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;

    void setupUi(QDialog *dobavit)
    {
        if (dobavit->objectName().isEmpty())
            dobavit->setObjectName(QStringLiteral("dobavit"));
        dobavit->resize(425, 262);
        gridLayout_5 = new QGridLayout(dobavit);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButton = new QPushButton(dobavit);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_5->addWidget(pushButton, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_20 = new QLabel(dobavit);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_2->addWidget(label_20, 6, 0, 1, 1);

        label_9 = new QLabel(dobavit);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        label_7 = new QLabel(dobavit);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(dobavit);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        spinBox_2 = new QSpinBox(dobavit);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(999999999);
        spinBox_2->setValue(1);

        gridLayout_2->addWidget(spinBox_2, 1, 1, 1, 1);

        label_4 = new QLabel(dobavit);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        spinBox = new QSpinBox(dobavit);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(999999999);

        gridLayout_2->addWidget(spinBox, 5, 1, 1, 1);

        lineEdit = new QLineEdit(dobavit);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 3, 1, 1, 1);

        comboBox = new QComboBox(dobavit);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 6, 1, 1, 1);

        label = new QLabel(dobavit);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(dobavit);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(dobavit);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 2, 1, 1, 1);

        comboBox_2 = new QComboBox(dobavit);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_2->addWidget(comboBox_2, 4, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(dobavit);

        QMetaObject::connectSlotsByName(dobavit);
    } // setupUi

    void retranslateUi(QDialog *dobavit)
    {
        dobavit->setWindowTitle(QApplication::translate("dobavit", "Dialog", 0));
        pushButton->setText(QApplication::translate("dobavit", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", 0));
        label_20->setText(QApplication::translate("dobavit", "\320\234\321\203\320\266\321\207\320\270\320\275\321\213/\320\226\320\265\320\275\321\211\320\270\320\275\321\213", 0));
        label_9->setText(QApplication::translate("dobavit", "\320\222\320\270\320\264 \321\201\320\277\320\276\321\200\321\202\320\260", 0));
        label_7->setText(QApplication::translate("dobavit", "\320\241\320\236\320\240\320\225\320\222\320\235\320\236\320\222\320\220\320\235\320\230\320\257", 0));
        label_8->setText(QApplication::translate("dobavit", "ID\321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        label_4->setText(QApplication::translate("dobavit", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\203\321\207\320\260\321\201\321\202\320\275\320\270\320\272\320\276\320\262/\320\272\320\276\320\274\320\260\320\275\320\264", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("dobavit", "\320\234", 0)
         << QApplication::translate("dobavit", "\320\226", 0)
        );
        label->setText(QApplication::translate("dobavit", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        label_2->setText(QApplication::translate("dobavit", "\320\232\320\276\320\274\320\260\320\275\320\264\320\275\321\213\320\265/\320\230\320\275\320\264\320\270\320\262\320\270\320\264\321\203\320\260\320\273\321\214\320\275\321\213\320\265", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("dobavit", "\320\232\320\276\320\274\320\260\320\275\320\264\320\275\321\213\320\265", 0)
         << QApplication::translate("dobavit", "\320\230\320\275\320\264\320\270\320\262\320\270\320\264\321\203\320\260\320\273\321\214\320\275\321\213\320\265", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class dobavit: public Ui_dobavit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOBAVIT_H
