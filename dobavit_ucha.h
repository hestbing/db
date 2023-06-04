#ifndef DOBAVIT_UCHA_H
#define DOBAVIT_UCHA_H


#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include "dobavit.h"

namespace Ui {
class dobavit_ucha;
}

class dobavit_ucha : public QDialog
{
    Q_OBJECT

public:
    explicit dobavit_ucha(QWidget *parent = 0);
    ~dobavit_ucha();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentTextChanged();

signals:

    void signaldobavit_ucha(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString);

private:
    int g=1;
    Ui::dobavit_ucha *ui;
    QSqlDatabase db;
    QSqlTableModel *model, *model1,*model2;
};

#endif // DOBAVIT_UCHA_H
