#ifndef REDACT_H
#define REDACT_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>


namespace Ui {
class redact;
}

class redact : public QDialog
{
    Q_OBJECT

public:
    explicit redact(QWidget *parent = 0);
    ~redact();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();


public slots:

    void slot(QString a);

signals:

    void redact1(QString);

private:

    QSqlTableModel *model;
    QSqlDatabase db;
    Ui::redact *ui;
};

#endif // REDACT_H
