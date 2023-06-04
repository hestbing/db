#ifndef DOBAVIT_H
#define DOBAVIT_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include "dobavit.h"
#include "QPushButton"

namespace Ui {
class dobavit;
}

class dobavit : public QDialog
{
    Q_OBJECT

public:
    explicit dobavit(QWidget *parent = 0);
    ~dobavit();


private slots:
    void slot2();
    void slot3();

signals:
    void signaldobavit1();
    void signaldobavit(QString,QString,QString,QString,QString,QString);
private:
    int g=1;
    Ui::dobavit *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
};

#endif // DOBAVIT_H
