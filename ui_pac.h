/********************************************************************************
** Form generated from reading UI file 'pac.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAC_H
#define UI_PAC_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pac
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QListWidget *listWidget_2;
    QLabel *label_2;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *pac)
    {
        if (pac->objectName().isEmpty())
            pac->setObjectName(QStringLiteral("pac"));
        pac->resize(880, 429);
        pac->setBaseSize(QSize(0, 0));
        gridLayout = new QGridLayout(pac);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(pac);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 6, 2, 1, 1);

        lineEdit = new QLineEdit(pac);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 6, 4, 1, 1);

        pushButton_2 = new QPushButton(pac);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 6, 5, 1, 1);

        label_3 = new QLabel(pac);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        tableView = new QTableView(pac);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(tableView, 0, 0, 1, 6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_3 = new QPushButton(pac);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton = new QPushButton(pac);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout_2, 3, 0, 1, 1);

        listWidget_2 = new QListWidget(pac);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setMaximumSize(QSize(170, 150));

        gridLayout->addWidget(listWidget_2, 3, 4, 1, 1);

        label_2 = new QLabel(pac);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 4, 1, 1);

        label = new QLabel(pac);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 2, 1, 1);

        listWidget = new QListWidget(pac);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMaximumSize(QSize(170, 150));

        gridLayout->addWidget(listWidget, 3, 2, 1, 1);


        retranslateUi(pac);

        QMetaObject::connectSlotsByName(pac);
    } // setupUi

    void retranslateUi(QDialog *pac)
    {
        pac->setWindowTitle(QApplication::translate("pac", "Dialog", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("pac", "\320\224\320\260\321\202\320\260", 0)
         << QApplication::translate("pac", "\320\222\321\200\320\265\320\274\321\217", 0)
         << QApplication::translate("pac", "\320\223\320\276\321\200\320\276\320\264", 0)
         << QApplication::translate("pac", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\321\217", 0)
         << QApplication::translate("pac", "\320\222\320\270\320\264 \321\201\320\277\320\276\321\200\321\202\320\260", 0)
        );
        pushButton_2->setText(QApplication::translate("pac", "\320\237\320\276\320\270\321\201\320\272", 0));
        label_3->setText(QApplication::translate("pac", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\277\320\276\320\270\321\201\320\272\320\260", 0));
        pushButton_3->setText(QApplication::translate("pac", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", 0));
        pushButton->setText(QApplication::translate("pac", "\320\240\320\260\320\261\320\276\321\202\321\213 \321\201 \320\261\320\260\320\267\320\276\320\271 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        label_2->setText(QApplication::translate("pac", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\270", 0));
        label->setText(QApplication::translate("pac", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271", 0));
    } // retranslateUi

};

namespace Ui {
    class pac: public Ui_pac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAC_H
