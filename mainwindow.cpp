#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSqlRelationalDelegate"
#include "QLabel"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_main(new Ui::MainWindow)
{
    ui_main->setupUi(this);

    setWindowTitle("База данных");

    spin = new QSpinBox();
    date = new QDateEdit();
    time = new QTimeEdit();
    box = new QComboBox();

    okno = new dobavit(this);
    okno1 = new dobavit_comand(this);
    okno2 = new dobavit_ucha(this);
    okno3 = new dobavit_proved(this);
    okno4 = new redact(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../sport.db");
    db.open();

    ui_main->tableView->setSortingEnabled(true);

    connect(ui_main->pushButton,SIGNAL(clicked()),this,SLOT(pushbutton()));
    connect(okno,&dobavit::signaldobavit,this,&MainWindow::slot3);
    connect(okno1,&dobavit_comand::signaldobavit_comand,this,&MainWindow::slot4);
    connect(okno2,&dobavit_ucha::signaldobavit_ucha,this,&MainWindow::slot5);
    connect(okno3,&dobavit_proved::signaldobavit_proved,this,&MainWindow::slot6);
    connect(okno4,&redact::redact1,this,&MainWindow::slot20);
    connect(this,&MainWindow::signal,okno4,&redact::slot);

    model = new QSqlRelationalTableModel(this, db);
    model->setTable("соревнования");
    model->select();
    ui_main->tableView->setModel(model);

    int n =  0;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }

    for (int i =0;i<model->rowCount();i++)
    {
        ui_main->tableView->setIndexWidget(model->index(i,5), new QLabel(ui_main->tableView));
    }

    ui_main->comboBox_2->addItem("Название_соревнований");
    ui_main->comboBox_2->addItem("Вид_спорта");

    model1 = new QSqlRelationalTableModel(this, db);
    model2 = new QSqlRelationalTableModel(this, db);

}





void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{

    int n = 0;
    model->setTable(arg1);

    model->select();
    ui_main->tableView->setModel(model);


    if(ui_main->comboBox->currentText()== "соревнования")
    {
        for (int i =0;i<model->rowCount();i++)
        {
            ui_main->tableView->setIndexWidget(model->index(i,5), new QLabel(ui_main->tableView));
        }
        ui_main->comboBox_2->clear();
        ui_main->comboBox_2->addItem("Название_соревнований");
        ui_main->comboBox_2->addItem("Вид_спорта");
    }

    if(ui_main->comboBox->currentText()== "участники")
    {
        for(int i = 0; i<model->rowCount();i++)
        {
        ui_main->tableView->setIndexWidget(model->index(i,9), new QLabel(ui_main->tableView));
        ui_main->tableView->setIndexWidget(model->index(i,8), new QLabel(ui_main->tableView));
        ui_main->tableView->setIndexWidget(model->index(i,6), new QLabel(ui_main->tableView));
        }
        ui_main->comboBox_2->clear();
        ui_main->comboBox_2->addItem("Фамилия");
        ui_main->comboBox_2->addItem("Имя");
        ui_main->comboBox_2->addItem("Отчество");
        ui_main->comboBox_2->addItem("Место_жительства");
        ui_main->comboBox_2->addItem("Вид_спорта");
        ui_main->comboBox_2->addItem("Команда");
    }

    if(ui_main->comboBox->currentText()== "команда")
    {
        for(int i = 0; i<model->rowCount();i++)
        {
        ui_main->tableView->setIndexWidget(model->index(i,3), new QLabel(ui_main->tableView));
        }
        ui_main->comboBox_2->clear();
        ui_main->comboBox_2->addItem("Команда");
        ui_main->comboBox_2->addItem("Тренер");
        ui_main->comboBox_2->addItem("Вид_спорта");
    }

    if(ui_main->comboBox->currentText()== "проведение_соревнований")
    {
        ui_main->comboBox_2->clear();
        ui_main->comboBox_2->addItem("Город");
//        ui_main->comboBox_2->addItem("Дата(до)");
//        ui_main->comboBox_2->addItem("Дата(после)");
        ui_main->comboBox_2->addItem("Найти определенную дату");
        ui_main->comboBox_2->addItem("Время(до)");
        ui_main->comboBox_2->addItem("Время(после)");
        ui_main->comboBox_2->addItem("Почта");
    }



    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }

}


void MainWindow::pushbutton()
{
    if(ui_main->comboBox->currentText()=="соревнования")
    {

    okno->show();

    }
    else if(ui_main->comboBox->currentText()=="команда")
    {

    okno1->show();

    }
    else if(ui_main->comboBox->currentText()=="участники")
    {

    okno2->show();

    }
    else if(ui_main->comboBox->currentText()=="проведение_соревнований")
    {

    okno3->show();

    }

}

void MainWindow::slot3(QString a,QString b,QString c,QString d,QString e,QString f)
{
    model->setTable("соревнования");
    model->select();
    count = model->rowCount();
    model->insertRow(model->rowCount());
    model->setData(model->index(count,0),d.toInt());
    model->setData(model->index(count,1),f);
    model->setData(model->index(count,2),a);
    model->setData(model->index(count,3),e);
    model->setData(model->index(count,4),c.toInt());
    model->setData(model->index(count,5),b);
    model->submitAll();
    model->select();

    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }

    for (int i =0;i<model->rowCount();i++)
    {
        ui_main->tableView->setIndexWidget(model->index(i,5), new QLabel(ui_main->tableView));
    }

}

void MainWindow::slot4(QString a,QString b,QString c,QString d)
{

    model->setTable("команда");
    model->select();
    count = model->rowCount();
    model->insertRow(model->rowCount());
    model->setData(model->index(count,0),a);
    model->setData(model->index(count,1),b);
    model->setData(model->index(count,2),c);
    model->setData(model->index(count,3),d);
    model->submitAll();
    model->select();

    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }

    for (int i =0;i<model->rowCount();i++)
    {
    ui_main->tableView->setIndexWidget(model->index(i,3), new QLabel(ui_main->tableView));
    }
}

void MainWindow::slot5(QString a,QString b,QString c,QString d,QString e,QString f,QString g,QString h,QString i,QString j)
{

    model->setTable("участники");
    model->select();
    count = model->rowCount();
    model->insertRow(model->rowCount());
    model->setData(model->index(count,0),a.toInt());
    model->setData(model->index(count,1),b);
    model->setData(model->index(count,2),c);
    model->setData(model->index(count,3),d);
    model->setData(model->index(count,4),e);
    model->setData(model->index(count,5),f);
    model->setData(model->index(count,6),g);
    model->setData(model->index(count,7),h);
    model->setData(model->index(count,8),i);
    model->setData(model->index(count,9),j);
    model->submitAll();
    model->select();

    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
    {
        ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
    }

    for (int i =0;i<model->rowCount();i++)
    {
        ui_main->tableView->setIndexWidget(model->index(i,6), new QLabel(ui_main->tableView));
        ui_main->tableView->setIndexWidget(model->index(i,8), new QLabel(ui_main->tableView));
        ui_main->tableView->setIndexWidget(model->index(i,9), new QLabel(ui_main->tableView));
    }


}

void MainWindow::slot6(QString a,QString b,QString c,QString d,QString e,QString f)
{

    model->setTable("проведение_соревнований");
    model->select();
    count = model->rowCount();
    model->insertRow(model->rowCount());
    model->setData(model->index(count,0),a);
    model->setData(model->index(count,1),b);
    model->setData(model->index(count,2),c);
    model->setData(model->index(count,3),d);
    model->setData(model->index(count,4),e);
    model->setData(model->index(count,5),f);
    model->submitAll();
    model->select();

    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }

}



void MainWindow::on_pushButton_2_clicked()
{
   model->removeRow(ui_main->tableView->currentIndex().row());
   model->submitAll();
   model->select();
}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    if(model->tableName() == "соревнования")
    {
        if(index.column() == 0 || index.column() == 4)
        {
        ui_main->tableView->setIndexWidget(index, spin = new QSpinBox(this));

        spin->setMaximum(9999999);

        roow = index.row();
        col = index.column();
        connect(spin,SIGNAL(editingFinished()),this,SLOT(slot8()));
        }

        if(index.column() == 3)
        {
        ui_main->tableView->setIndexWidget(index, box = new QComboBox(this));

        box->addItem(" ");
        box->addItem("Командные");
        box->addItem("Индивидуальные");

        roow = index.row();
        col = index.column();
        connect(box,SIGNAL(currentIndexChanged(int)),this,SLOT(slot()));
        }


    }

    if(model->tableName() == "команда")
     {
         if(index.column() == 1)
         {
         ui_main->tableView->setIndexWidget(index, box = new QComboBox(this));

         model1->setTable("соревнования");
         model1->select();

         box->addItem(" ");

         for(int i = 0; i<model1->rowCount(); i++)
         {
         box->addItem(model1->data(model1->index(i,1)).toString());
         }

         roow = index.row();
         col = index.column();
         connect(box,SIGNAL(currentIndexChanged(int)),this,SLOT(slot7()));
         }


     }

    if(model->tableName() == "проведение_соревнований")
     {
         if(index.column() == 1)
         {
         ui_main->tableView->setIndexWidget(index, box = new QComboBox(this));

         model1->setTable("соревнования");
         model1->select();

         box->addItem(" ");

         for(int i = 0; i<model1->rowCount(); i++)
         {
         box->addItem(model1->data(model1->index(i,1)).toString());
         }

         roow = index.row();
         col = index.column();
         connect(box,SIGNAL(currentIndexChanged(int)),this,SLOT(slot()));
         }

         if(index.column() == 2)
         {

         ui_main->tableView->setIndexWidget(index, date = new QDateEdit(this));

         roow = index.row();
         col = index.column();

         connect(date,SIGNAL(editingFinished()),this,SLOT(slot1()));
         }

         if(index.column() == 3)
         {

         ui_main->tableView->setIndexWidget(index, time = new QTimeEdit(this));

         roow = index.row();
         col = index.column();

         connect(time,SIGNAL(editingFinished()),this,SLOT(slot2()));
         }
     }

    if(model->tableName() == "участники")
     {

        if(index.column() == 0)
        {
        ui_main->tableView->setIndexWidget(index, spin = new QSpinBox(this));

        spin->setMaximum(9999999);

        roow = index.row();
        col = index.column();
        connect(spin,SIGNAL(editingFinished()),this,SLOT(slot8()));
        }


         if(index.column() == 1)
         {
         ui_main->tableView->setIndexWidget(index, box = new QComboBox(this));

         model1->setTable("соревнования");
         model1->select();
         model2->setTable("команда");
         model2->select();

         box->addItem(" ");

         for(int i = 0; i<model1->rowCount(); i++)
         {
         box->addItem(model1->data(model1->index(i,1)).toString());
         }

         roow = index.row();
         col = index.column();
         connect(box,SIGNAL(currentIndexChanged(int)),this,SLOT(slot11()));
         }

         if(index.column() == 5)
         {

         ui_main->tableView->setIndexWidget(index, date = new QDateEdit(this));

         roow = index.row();
         col = index.column();

         connect(date,SIGNAL(editingFinished()),this,SLOT(slot1()));
         }
     }


}

void MainWindow::slot()
{
    model->setData(model->index(roow,col), box->currentText());
    model->submitAll();
    model->select();
    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }

    for (int i =0;i<model->rowCount();i++)
    {
        ui_main->tableView->setIndexWidget(model->index(i,5), new QLabel(ui_main->tableView));
    }
}

void MainWindow::slot1()
{
    model->setData(model->index(roow,col), date->text());
    model->submitAll();
    model->select();
    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }

    for(int i = 0; i<model->rowCount();i++)
    {
    ui_main->tableView->setIndexWidget(model->index(i,9), new QLabel(ui_main->tableView));
    ui_main->tableView->setIndexWidget(model->index(i,8), new QLabel(ui_main->tableView));
    ui_main->tableView->setIndexWidget(model->index(i,6), new QLabel(ui_main->tableView));
    }
}

void MainWindow::slot2()
{
    model->setData(model->index(roow,col), time->text());
    model->submitAll();
    model->select();
    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }
}

void MainWindow::slot7()
{
    model->setData(model->index(roow,3), model1->data(model1->index(box->currentIndex()-1,2)).toString());
    model->setData(model->index(roow,col), box->currentText());
    model->submitAll();
    model->select();
    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }
    for (int i=0; i<model->rowCount(); i++)
    {
    ui_main->tableView->setIndexWidget(model->index(i,3), new QLabel(ui_main->tableView));
    }
}

void MainWindow::slot8()
{
    model->setData(model->index(roow,col), spin->text());
    model->submitAll();
    model->select();
    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }

    if(model->tableName() == "соревнования")
    {
    for (int i =0;i<model->rowCount();i++)
    {
        ui_main->tableView->setIndexWidget(model->index(i,5), new QLabel(ui_main->tableView));
    }
    }

    for(int i = 0; i<model->rowCount();i++)
    {
    ui_main->tableView->setIndexWidget(model->index(i,9), new QLabel(ui_main->tableView));
    ui_main->tableView->setIndexWidget(model->index(i,8), new QLabel(ui_main->tableView));
    ui_main->tableView->setIndexWidget(model->index(i,6), new QLabel(ui_main->tableView));
    }
}


void MainWindow::slot11()
{
    int j = 0;
    for(int i = 0; i<model2->rowCount();i++)
    {
        if(model2->data(model2->index(i,1)).toString() != box->currentText())
        {
            j++;
        }
        else
        {
           break;
        }
    }

    if(j == model2->rowCount())
    {
        if(model1->data(model1->index(ui_main->comboBox->currentIndex(),3)).toString() == "Индивидуальные")
        {
            model->setData(model->index(roow,9), "Индивидуальные");
            model->setData(model->index(roow,8), model1->data(model1->index(box->currentIndex()-1,2)).toString());
            model->setData(model->index(roow,col), box->currentText());
            model->submitAll();
            model->select();
            int n;
            n = ui_main->tableView->horizontalHeader()->count();
            for (int i=0; i<n; i++)
               {
                   ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
               }
        }
        else
        {
        model->setData(model->index(roow,9), "Нужно добавить команду");
        model->setData(model->index(roow,8), model1->data(model1->index(box->currentIndex()-1,2)).toString());
        model->setData(model->index(roow,col), box->currentText());
        model->submitAll();
        model->select();
        int n;
        n = ui_main->tableView->horizontalHeader()->count();
        for (int i=0; i<n; i++)
           {
               ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
           }
        }
    }
    else
    {
        okno4->show();
        emit signal(box->currentText());
    model->setData(model->index(roow,9), model2->data(model2->index(j,0)).toString());
    model->setData(model->index(roow,8), model2->data(model2->index(j,3)).toString());
    model->setData(model->index(roow,col), box->currentText());
    model->submitAll();
    model->select();
    int n;
    n = ui_main->tableView->horizontalHeader()->count();
    for (int i=0; i<n; i++)
       {
           ui_main->tableView->horizontalHeader()->setSectionResizeMode(0+i,QHeaderView::Stretch);
       }
    }

    for(int i = 0; i<model->rowCount();i++)
    {
    ui_main->tableView->setIndexWidget(model->index(i,9), new QLabel(ui_main->tableView));
    ui_main->tableView->setIndexWidget(model->index(i,8), new QLabel(ui_main->tableView));
    ui_main->tableView->setIndexWidget(model->index(i,6), new QLabel(ui_main->tableView));
    }

}

void MainWindow::slot20(QString a)
{
    model->setData(model->index(roow,9),a);
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui_main;
}

void MainWindow::on_pushButton_3_clicked()
{
    QString txt = ui_main->lineEdit->text();
    if(ui_main->comboBox->currentText()== "соревнования" && ui_main->comboBox_2->currentText()== "Вид_спорта")
    {
    model->setFilter(QString("Вид_спорта LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "соревнования" && ui_main->comboBox_2->currentText()== "Название_соревнований")
    {
    model->setFilter(QString("Название_соревнований LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "участники" && ui_main->comboBox_2->currentText()== "Вид_спорта")
    {
    model->setFilter(QString("Вид_спорта LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "участники" && ui_main->comboBox_2->currentText()== "Фамилия")
    {
    model->setFilter(QString("Фамилия LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "участники" && ui_main->comboBox_2->currentText()== "Имя")
    {
    model->setFilter(QString("Имя LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "участники" && ui_main->comboBox_2->currentText()== "Отчество")
    {
    model->setFilter(QString("Отчество LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "участники" && ui_main->comboBox_2->currentText()== "Место_жительства")
    {
    model->setFilter(QString("Место_жительства LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "участники" && ui_main->comboBox_2->currentText()== "Команда")
    {
    model->setFilter(QString("Команда LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "команда" && ui_main->comboBox_2->currentText()== "Команда")
    {
    model->setFilter(QString("Команда LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "команда" && ui_main->comboBox_2->currentText()== "Тренер")
    {
    model->setFilter(QString("Тренер LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "команда" && ui_main->comboBox_2->currentText()== "Вид_спорта")
    {
    model->setFilter(QString("Вид_спорта LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "проведение_соревнований" && ui_main->comboBox_2->currentText()== "Город")
    {
    model->setFilter(QString("Город LIKE '%1'").arg(txt));
    model->select();
    }
//    if(ui_main->comboBox->currentText()== "проведение_соревнований" && ui_main->comboBox_2->currentText()== "Дата(до)")
//    {
//    model->setFilter(QString("Дата < '%1'").arg(txt));
//    model->select();
//    }
//    if(ui_main->comboBox->currentText()== "проведение_соревнований" && ui_main->comboBox_2->currentText()== "Дата(после)")
//    {
//    model->setFilter(QString("Дата > '%1'").arg(txt));
//    model->select();
//    }
    if(ui_main->comboBox->currentText()== "проведение_соревнований" && ui_main->comboBox_2->currentText()== "Время(до)")
    {
    model->setFilter(QString("Время < '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "проведение_соревнований" && ui_main->comboBox_2->currentText()== "Время(после)")
    {
    model->setFilter(QString("Время > '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "проведение_соревнований" && ui_main->comboBox_2->currentText()== "Почта")
    {
    model->setFilter(QString("Почта LIKE '%1'").arg(txt));
    model->select();
    }
    if(ui_main->comboBox->currentText()== "проведение_соревнований" && ui_main->comboBox_2->currentText()== "Найти определенную дату")
    {
    model->setFilter(QString("Дата LIKE '%1'").arg(txt));
    model->select();
    }
}
