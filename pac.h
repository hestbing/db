#ifndef PAC_H
#define PAC_H

#include <QDialog>
#include <mainwindow.h>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class pac;
}

class pac : public QDialog
{
    Q_OBJECT

public:
    explicit pac(QWidget *parent = 0);
    ~pac();

private slots:
    void on_pushButton_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_listWidget_2_doubleClicked(const QModelIndex &index);

    void on_listWidget_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    QSqlTableModel *model,*model1,*model2,*model3;

    QSqlDatabase db;
    Ui::pac *ui;
    MainWindow *w;

};

#endif // PAC_H
