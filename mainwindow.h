#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRelationalTableModel>
#include <QMainWindow>
#include "dobavit.h"
#include "dobavit_comand.h"
#include "dobavit_ucha.h"
#include "dobavit_proved.h"
#include "redact.h"

#include "QDateEdit"
#include "QTimeEdit"
#include "QComboBox"
#include "QSpinBox"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void pushbutton();

    void on_pushButton_2_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);

//    void on_pushButton_3_clicked();

    void slot();

    void slot1();

    void slot2();

    void slot7();

    void slot8();

    void slot11();

    void on_pushButton_3_clicked();

signals:

    void signal(QString);

private:

    QSqlRelationalTableModel *model, *model1, *model2;
    int count = 0;
    int roow = 0;
    int col = 0;

    QSpinBox *spin;
    QDateEdit *date;
    QTimeEdit *time;
    QComboBox *box, *uu;


    dobavit *okno;
    dobavit_comand *okno1;
    dobavit_ucha *okno2;
    dobavit_proved *okno3;
    redact *okno4;

    QSqlDatabase db;
    QModelIndex *n;
    Ui::MainWindow *ui_main;

public slots:

   void slot3(QString a,QString b,QString c,QString d,QString e,QString f);
   void slot4(QString a,QString b,QString c,QString d);
   void slot5(QString a,QString b,QString c,QString d,QString e,QString f,QString g,QString h,QString i,QString j);
   void slot6(QString a,QString b,QString c,QString d,QString e,QString f);
   void slot20(QString a);

};

#endif // MAINWINDOW_H
