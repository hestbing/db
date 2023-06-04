#include "pac.h"
#include "ui_pac.h"
#include "mainwindow.h"

pac::pac(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pac)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../sport.db");
    db.open();

    model = new QSqlTableModel(this,db);
    model1 = new QSqlTableModel(this,db);
    model2 = new QSqlTableModel(this,db);
    model3 = new QSqlTableModel(this,db);

    model->setTable("соревнования");
    model->select();
    model1->setTable("команда");
    model1->select();
    model2->setTable("участники");
    model2->select();
    model3->setTable("проведение_соревнований");
    model3->select();

    for(int i = 0; i<model->rowCount();i++)
    {
    ui->listWidget->addItem(model->data(model->index(i,1)).toString());
    }


    for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
       {
           ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }

    w = new MainWindow();

}

pac::~pac()
{
    delete ui;
}

void pac::on_pushButton_clicked()
{

    w->show();
}

void pac::on_listWidget_doubleClicked(const QModelIndex &index)
{
    ui->listWidget_2->clear();
    ui->listWidget_2->addItem("Основная информация");
    ui->listWidget_2->addItem("Команды");
    ui->listWidget_2->addItem("Участники");
    ui->listWidget_2->addItem("Проведение");

}

void pac::on_listWidget_2_doubleClicked(const QModelIndex &index)
{
    if(index.row() == 0)
    {
        model = new QSqlTableModel(this,db);
        model->setTable("соревнования");
        QString txt = ui->listWidget->currentIndex().data().toString();
        model->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
        model->select();
        ui->tableView->setModel(model);
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
    if(index.row() == 1)
    {
        QString txt = ui->listWidget->currentIndex().data().toString();
        model1->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
        model1->select();
        ui->tableView->setModel(model1);
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
    if(index.row() == 2)
    {
        QString txt = ui->listWidget->currentIndex().data().toString();
        model2->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
        model2->select();
        ui->tableView->setModel(model2);
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
    if(index.row() == 3)
    {
        QString txt = ui->listWidget->currentIndex().data().toString();
        model3->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
        model3->select();
        ui->tableView->setModel(model3);
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
}

void pac::on_listWidget_clicked(const QModelIndex &index)
{
    if(ui->listWidget_2->currentIndex().data().toString() == "Основная информация")
    {
        QString txt = ui->listWidget->currentIndex().data().toString();
        model->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
        model->select();
        ui->tableView->setModel(model);
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }

    if(ui->listWidget_2->currentIndex().data().toString() == "Команды")
    {
        QString txt = ui->listWidget->currentIndex().data().toString();
        model1->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
        model1->select();
        ui->tableView->setModel(model1);
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
    if(ui->listWidget_2->currentIndex().data().toString() == "Участники")
    {
        QString txt = ui->listWidget->currentIndex().data().toString();
        model2->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
        model2->select();
        ui->tableView->setModel(model2);
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
    if(ui->listWidget_2->currentIndex().data().toString() == "Проведение")
    {
        QString txt = ui->listWidget->currentIndex().data().toString();
        model3->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
        model3->select();
        ui->tableView->setModel(model3);
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
}

void pac::on_pushButton_2_clicked()
{
    if(ui->comboBox->currentText() == "Название соревнования")
    {
        QString txt = ui->lineEdit->text();
        model = new QSqlTableModel(this,db);
        model->setTable("соревнования");
        model->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
        model->select();
        ui->listWidget->clear();
        for(int i = 0; i<model->rowCount();i++)
        {
        ui->listWidget->addItem(model->data(model->index(i,1)).toString());
        }
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
    if(ui->comboBox->currentText() == "Вид спорта")
    {
        QString txt = ui->lineEdit->text();
        model = new QSqlTableModel(this,db);
        model->setTable("соревнования");
        model->setFilter(QString("Вид_спорта LIKE '%1'").arg(txt));
        model->select();
        ui->listWidget->clear();
        for(int i = 0; i<model->rowCount();i++)
        {
        ui->listWidget->addItem(model->data(model->index(i,1)).toString());
        }
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
    if(ui->comboBox->currentText() == "Дата")
    {
        QString txt = ui->lineEdit->text();
        model3 = new QSqlTableModel(this,db);
        model3->setTable("проведение_соревнований");
        model3->setFilter(QString("Дата LIKE '%1'").arg(txt));
        model3->select();
        ui->listWidget->clear();
        for(int i = 0; i<model3->rowCount();i++)
        {
        ui->listWidget->addItem(model3->data(model3->index(i,1)).toString());
        }
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
    if(ui->comboBox->currentText() == "Время")
    {
        QString txt = ui->lineEdit->text();
        model3 = new QSqlTableModel(this,db);
        model3->setTable("проведение_соревнований");
        model3->setFilter(QString("Время LIKE '%1'").arg(txt));
        model3->select();
        ui->listWidget->clear();
        for(int i = 0; i<model3->rowCount();i++)
        {
        ui->listWidget->addItem(model3->data(model3->index(i,1)).toString());
        }
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
    if(ui->comboBox->currentText() == "Город")
    {
        QString txt = ui->lineEdit->text();
        model3 = new QSqlTableModel(this,db);
        model3->setTable("проведение_соревнований");
        model3->setFilter(QString("Город LIKE '%1'").arg(txt));
        model3->select();
        ui->listWidget->clear();
        for(int i = 0; i<model3->rowCount();i++)
        {
        ui->listWidget->addItem(model3->data(model3->index(i,1)).toString());
        }
        for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
           {
               ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
    }
}

void pac::on_pushButton_3_clicked()
{
    model = new QSqlTableModel(this,db);
    model1 = new QSqlTableModel(this,db);
    model2 = new QSqlTableModel(this,db);
    model3 = new QSqlTableModel(this,db);

    model->setTable("соревнования");
    model->select();
    model1->setTable("команда");
    model1->select();
    model2->setTable("участники");
    model2->select();
    model3->setTable("проведение_соревнований");
    model3->select();

    ui->listWidget->clear();

    for(int i = 0; i<model->rowCount();i++)
    {
    ui->listWidget->addItem(model->data(model->index(i,1)).toString());
    }
    for (int i=0; i< ui->tableView->horizontalHeader()->count(); i++)
       {
           ui->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }
}
