#include "mainwindow.h"
#include"login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login dlg;
    if (dlg.exec() == QDialog::Accepted)
        {
           w.show();
           return a.exec();
        }
        else return 0;
}
