#include "dobavit_proved.h"
#include "ui_dobavit_proved.h"
#include "QMessageBox"
#include "QTimer"

dobavit_proved::dobavit_proved(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dobavit_proved)
{
    ui->setupUi(this);

    setWindowTitle("Добавить строку в таблицу ");

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

}

dobavit_proved::~dobavit_proved()
{
    delete ui;
}

void dobavit_proved::on_pushButton_clicked()
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

    delete model;
}

void dobavit_proved::on_pushButton_2_clicked()
{

    model = new QSqlTableModel(this, db);
    model->setTable("проведение_соревнований");
    model->submitAll();
    model->select();
    int n = 0;
    for(int i = 0;i<model->rowCount(); i++)
    {
        if(((ui->lineEdit->text())==(model->data(model->index(i,0)).toString())) &&
            (ui->dateEdit->text()==model->data(model->index(i,2)).toString()) &&
            (ui->timeEdit->text()==model->data(model->index(i,3)).toString()))
        {
            n++;
        }

    }

    if(n==1)
    {
             QMessageBox::warning(this, "Внимание", "В " + ui->lineEdit->text() + " уже проводятся соревнования " + ui->dateEdit->text() +
             " в " + ui->timeEdit->text());
    }
    else
    {
        if((ui->lineEdit->text()== NULL ) || (ui->lineEdit_2->text()== NULL ))
        {
            QMessageBox::warning(this, "Внимание", "Заполните все поля");
        }
        else
        {
            emit signaldobavit_proved(ui->lineEdit->text(),ui->comboBox->currentText(),
                               ui->dateEdit->text(),ui->timeEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_3->text());
        }
    }


}


