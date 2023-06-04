#include "dobavit_comand.h"
#include "ui_dobavit_comand.h"
#include "mainwindow.h"
#include "QMessageBox"

dobavit_comand::dobavit_comand(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dobavit_comand)
{

    ui->setupUi(this);

    setWindowTitle("Добавить строку в таблицу ");

    ui->comboBox->clear();

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../sport.db");
    db.open();
    model = new QSqlTableModel(this, db);
    model->setTable("соревнования");
    model->submitAll();
    model->select();

    for(int i = 0; i<model->rowCount(); i++)
    {
        ui->comboBox->addItem(model->data(model->index(i,1)).toString());
    }


    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(slot2()));

}

dobavit_comand::~dobavit_comand()
{
    delete ui;
}


void dobavit_comand::slot2()
{

    model = new QSqlTableModel(this, db);
    model->setTable("команда");
    model->submitAll();
    model->select();
    int n = 0;
    for(int i = 0;i<model->rowCount(); i++)
    {
        if((ui->lineEdit->text())==(model->data(model->index(i,0)).toString()))
        {
            n++;
        }

    }

    if(n==1)
    {
             QMessageBox::warning(this, "Внимание", "Команда уже существует");
    }
    else
    {
        if((ui->lineEdit->text()== NULL ) || (ui->lineEdit_2->text()== NULL ))
        {
            QMessageBox::warning(this, "Внимание", "Заполните все поля");
        }
        else
        {
            emit signaldobavit_comand(ui->lineEdit->text(),ui->comboBox->currentText(),
                               ui->lineEdit_2->text(),ui->label->text());
        }
    }

}

void dobavit_comand::on_pushButton_clicked()
{
    ui->comboBox->clear();
    db.open();
    model = new QSqlTableModel(this, db);
    model->setTable("соревнования");
    model->submitAll();
    model->select();

    for(int i = 0; i<model->rowCount(); i++)
    {
        ui->comboBox->addItem(model->data(model->index(i,1)).toString());
    }
}



void dobavit_comand::on_comboBox_currentTextChanged()
{
    ui->label->setText(model->data(model->index(ui->comboBox->currentIndex(),2)).toString());
}
