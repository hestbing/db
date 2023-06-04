/********************************************************************************
** Form generated from reading UI file 'redact.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDACT_H
#define UI_REDACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_redact
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *redact)
    {
        if (redact->objectName().isEmpty())
            redact->setObjectName(QStringLiteral("redact"));
        redact->resize(400, 137);
        gridLayout = new QGridLayout(redact);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(redact);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);

        pushButton = new QPushButton(redact);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        label = new QLabel(redact);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(redact);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);


        retranslateUi(redact);

        QMetaObject::connectSlotsByName(redact);
    } // setupUi

    void retranslateUi(QDialog *redact)
    {
        redact->setWindowTitle(QApplication::translate("redact", "Dialog", 0));
        pushButton->setText(QApplication::translate("redact", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        label->setText(QApplication::translate("redact", "                                 \320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\272\320\276\320\274\320\260\320\275\320\264\321\203", 0));
        pushButton_2->setText(QApplication::translate("redact", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\260\320\275\320\264\321\213", 0));
    } // retranslateUi

};

namespace Ui {
    class redact: public Ui_redact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDACT_H
