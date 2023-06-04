#ifndef DOBAVIT_COMAND_H
#define DOBAVIT_COMAND_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include "dobavit.h"
#include "QPushButton"

namespace Ui {
class dobavit_comand;
}

class dobavit_comand : public QDialog
{
    Q_OBJECT

public:

    explicit dobavit_comand(QWidget *parent = 0);
    ~dobavit_comand();

private slots:

    void slot2();

    void on_pushButton_clicked();

    void on_comboBox_currentTextChanged();

signals:

    void signaldobavit_comand(QString,QString,QString,QString);

private:

    QPushButton *button;
    QSqlDatabase db;
    QSqlTableModel *model;
    Ui::dobavit_comand *ui;

};

#endif // DOBAVIT_COMAND_H
