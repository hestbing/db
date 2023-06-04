#include "dobavit.h"
#include "ui_dobavit.h"
#include "mainwindow.h"
#include "QMessageBox"



dobavit::dobavit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dobavit)
{


    ui->setupUi(this);




    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../sport.db");
    db.open();
    model = new QSqlTableModel(this, db);
    model->setTable("соревнования");
    model->submitAll();
    model->select();
    ui->spinBox_2->setMinimum(1);
    for(int i = 0; i <model->rowCount();i++)
    {
        if((model->data(model->index(i,0)).toInt() - model->data(model->index(i-1,0)).toInt()) == 1)
        {
            g++;
        }
    }
    ui->spinBox_2->setValue(g);

    setWindowTitle("Добавить строку в таблицу ");
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(slot3()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(slot2()));


}
dobavit::~dobavit()
{
    delete ui;
}


void dobavit::slot3()
{
    emit signaldobavit1();
}
void dobavit::slot2()
{
    model = new QSqlTableModel(this, db);
    model->setTable("соревнования");
    model->submitAll();
    model->select();
    int n = 0;
    for(int i = 0;i<model->rowCount(); i++)
    {
        if((ui->spinBox_2->text())==(model->data(model->index(i,0)).toString()))
        {
            n++;
        }

    }


    if(n==1)
    {
             QMessageBox::warning(this, "Внимание", "Соревнования c Id " + ui->spinBox_2->text() + " уже существует");
    }
    else
    {
        if((ui->spinBox_2->text() == "0")||(ui->lineEdit->text()== NULL ) || (ui->spinBox->text()=="0"))
        {
            QMessageBox::warning(this, "Внимание", "Заполните все поля");
        }
        else
        {


        emit signaldobavit(ui->lineEdit->text(),ui->comboBox->currentText(),ui->spinBox->text(),
                           ui->spinBox_2->text(),ui->comboBox_2->currentText(),ui->lineEdit_2->text());

            model = new QSqlTableModel(this, db);
            model->setTable("соревнования");
            model->submitAll();
            model->select();

            g = 1;
            for(int i = 0; i <model->rowCount();i++)
            {
                if((model->data(model->index(i,0)).toInt() - model->data(model->index(i-1,0)).toInt()) == 1)
                {
                    g++;
                }
            }
            ui->spinBox_2->setValue(g);
        }
    }
}

