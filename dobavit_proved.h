#ifndef DOBAVIT_PROVED_H
#define DOBAVIT_PROVED_H

#include <QDialog>
#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include "dobavit.h"

namespace Ui {
class dobavit_proved;
}

class dobavit_proved : public QDialog
{
    Q_OBJECT

public:
    explicit dobavit_proved(QWidget *parent = 0);
    ~dobavit_proved();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:

    void signaldobavit_proved(QString,QString,QString,QString,QString,QString);

private:

    QSqlDatabase db;
    QSqlTableModel *model;
    Ui::dobavit_proved *ui;
};

#endif // DOBAVIT_PROVED_H
