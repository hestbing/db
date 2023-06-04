#include "dobavit_ucha.h"
#include "ui_dobavit_ucha.h"
#include "QMessageBox"

dobavit_ucha::dobavit_ucha(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dobavit_ucha)
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
    model1 = new QSqlTableModel(this, db);
    model1->setTable("команда");
    model1->submitAll();
    model1->select();

    for(int i = 0; i<model->rowCount(); i++)
    {
        ui->comboBox->addItem(model->data(model->index(i,1)).toString());
    }

    model2 = new QSqlTableModel(this, db);
    model2->setTable("участники");
    model2->submitAll();
    model2->select();
    ui->spinBox->setMinimum(1);

    for(int i = 0; i <model2->rowCount();i++)
    {

        if((model2->data(model2->index(i,0)).toInt() - model2->data(model2->index(i-1,0)).toInt()) == 1)
        {
            g++;
        }


    }
    ui->spinBox->setValue(g);

}

dobavit_ucha::~dobavit_ucha()
{
    delete ui;
}


void dobavit_ucha::on_pushButton_clicked()
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

void dobavit_ucha::on_pushButton_2_clicked()
{

    model = new QSqlTableModel(this, db);
    model->setTable("участники");
    model->submitAll();
    model->select();
    int n = 0;
    for(int i = 0;i<model->rowCount(); i++)
    {
        if((ui->spinBox->text())== (model->data(model->index(i,0)).toString()))
        {
            n++;
        }

    }

    if(n>0)
    {
             QMessageBox::warning(this, "Внимание", "Участник c Id " + ui->spinBox->text() + " уже существует");
    }
    else
    {
        if((ui->lineEdit->text()== NULL ) || (ui->spinBox->text()=="0") || (ui->lineEdit_2->text()== NULL ) ||
                (ui->lineEdit_5->text() == NULL))
        {
            QMessageBox::warning(this, "Внимание", "Заполните все поля");
        }
        else
        {
            emit signaldobavit_ucha(ui->spinBox->text(),ui->comboBox->currentText(),
                               ui->lineEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_3->text(),
                               ui->dateEdit->text(),ui->label_13->text(),ui->lineEdit_5->text(),
                               ui->label_11->text(),ui->comboBox_2->currentText());
            model2 = new QSqlTableModel(this, db);
            model2->setTable("участники");
            model2->submitAll();
            model2->select();

            g=1;
            for(int i = 0; i <model2->rowCount();i++)
            {
                if((model2->data(model2->index(i,0)).toInt() - model2->data(model2->index(i-1,0)).toInt()) == 1)
                {
                    g++;
                }
            }
            ui->spinBox->setValue(g);
        }
    }

}

void dobavit_ucha::on_comboBox_currentTextChanged()
{

    model = new QSqlTableModel(this, db);
    model->setTable("соревнования");
    model->submitAll();
    model->select();

    model1 = new QSqlTableModel(this, db);
    model1->setTable("команда");
    model1->submitAll();
    model1->select();

    ui->label_11->setText(model->data(model->index(ui->comboBox->currentIndex(),2)).toString());

    ui->comboBox_2->clear();
    for(int i = 0; i<model1->rowCount();i++)
    {
        if(model1->data(model1->index(i,1)).toString() == ui->comboBox->currentText())
        {
            if((model->data(model->index(ui->comboBox->currentIndex(),3)).toString()) == "Индивидуальные")
            {
                ui->comboBox_2->clear();
                ui->comboBox_2->addItem("Индивидуальные");
            }
            else
            {
                ui->comboBox_2->addItem(model1->data(model1->index(i,0)).toString());
            }

        }
        else
        {

            if(((model->data(model->index(ui->comboBox->currentIndex(),3)).toString()) == "Индивидуальные"))
            {
                if((ui->comboBox_2->count() < 1))
                {
                        ui->comboBox_2->clear();
                        ui->comboBox_2->addItem("Нужно добавить команду");
                }

               ui->comboBox_2->clear();
               ui->comboBox_2->addItem("Индивидуальные");
            }


        }
    }

    ui->label_13->setText(model->data(model->index(ui->comboBox->currentIndex(),5)).toString());
}

