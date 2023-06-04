/********************************************************************************
** Form generated from reading UI file 'dobavit_proved.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOBAVIT_PROVED_H
#define UI_DOBAVIT_PROVED_H

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
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_dobavit_proved
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_2;
    QTimeEdit *timeEdit;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *dobavit_proved)
    {
        if (dobavit_proved->objectName().isEmpty())
            dobavit_proved->setObjectName(QStringLiteral("dobavit_proved"));
        dobavit_proved->resize(500, 429);
        gridLayout = new QGridLayout(dobavit_proved);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(dobavit_proved);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(dobavit_proved);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(dobavit_proved);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label_3 = new QLabel(dobavit_proved);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(dobavit_proved);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        timeEdit = new QTimeEdit(dobavit_proved);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 3, 1, 1, 1);

        label_4 = new QLabel(dobavit_proved);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dateEdit = new QDateEdit(dobavit_proved);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(dobavit_proved);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 4, 1, 1, 1);

        pushButton = new QPushButton(dobavit_proved);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 6, 0, 1, 2);

        pushButton_2 = new QPushButton(dobavit_proved);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 7, 0, 1, 2);

        label_5 = new QLabel(dobavit_proved);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(dobavit_proved);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAcceptDrops(false);
        label_6->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_6->setWordWrap(true);
        label_6->setOpenExternalLinks(false);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEdit_3 = new QLineEdit(dobavit_proved);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 5, 1, 1, 1);


        retranslateUi(dobavit_proved);

        QMetaObject::connectSlotsByName(dobavit_proved);
    } // setupUi

    void retranslateUi(QDialog *dobavit_proved)
    {
        dobavit_proved->setWindowTitle(QApplication::translate("dobavit_proved", "Dialog", 0));
        label->setText(QApplication::translate("dobavit_proved", "\320\223\320\276\321\200\320\276\320\264", 0));
        label_3->setText(QApplication::translate("dobavit_proved", "\320\224\320\260\321\202\320\260", 0));
        label_2->setText(QApplication::translate("dobavit_proved", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        label_4->setText(QApplication::translate("dobavit_proved", "\320\222\321\200\320\265\320\274\321\217", 0));
        pushButton->setText(QApplication::translate("dobavit_proved", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 ID\321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        pushButton_2->setText(QApplication::translate("dobavit_proved", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", 0));
        label_5->setText(QApplication::translate("dobavit_proved", "\320\237\320\276\321\207\321\202\320\260", 0));
        label_6->setText(QApplication::translate("dobavit_proved", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271 (\320\265\321\201\320\273\320\270 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271 \320\277\321\200\320\276\321\210\320\273\320\270, \321\202\320\276 \320\275\320\260\320\277\320\270\321\210\320\270\321\202\320\265 \320\277\320\276\320\261\320\265\320\264\320\270\321\202\320\265\320\273\321\217, \320\265\321\201\320\273\320\270 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271 \320\275\320\265 \320\277\321\200\320\276\320\262\320\276\320\264\320\270\320\273\320\270\321\201\321\214, \321\202\320\276 \320\276\321\202\320\274\320\265\321\202\321\214\321\202\320\265 \321\215\321\202\320\276)", 0));
    } // retranslateUi

};

namespace Ui {
    class dobavit_proved: public Ui_dobavit_proved {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOBAVIT_PROVED_H
