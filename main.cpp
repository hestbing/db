#include "mainwindow.h"
#include <QApplication>
#include "pac.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pac w;
    w.show();
    w.setWindowTitle("Расписание спортивных соревнований");
    w.resize(1400,700);

    return a.exec();
}
