#include "redact.h"
#include "ui_redact.h"


redact::redact(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::redact)
{
    ui->setupUi(this);

    setWindowTitle("Выбрать команду");

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../sport.db");
    db.open();
    model = new QSqlTableModel(this, db);
    model->setTable("команда");
    model->submitAll();
    model->select();

}

redact::~redact()
{
    delete ui;
}

void redact::on_pushButton_2_clicked()
{
    ui->comboBox->clear();

    db.open();
    model = new QSqlTableModel(this, db);
    model->setTable("команда");
    model->submitAll();
    model->select();

    for(int i = 0; i<model->rowCount(); i++)
    {
        ui->comboBox->addItem(model->data(model->index(i,3)).toString());
    }
}

void redact::on_pushButton_clicked()
{
    emit redact1(ui->comboBox->currentText());
}

void redact::slot(QString a)
{
    ui->comboBox->clear();
    model = new QSqlTableModel(this, db);
    model->setTable("команда");
    model->submitAll();
    model->select();
    ui->comboBox->clear();
    for(int i = 0; i<model->rowCount();i++)
    {
        if(model->data(model->index(i,1)).toString() == a)
        {
        ui->comboBox->addItem(model->data(model->index(i,0)).toString());
        }

    }

}
