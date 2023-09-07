#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QHostAddress>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QMessageBox msg;

    QHostAddress ip;
    ip.setAddress("1.2.3.4");

    QSqlDatabase datab;

    msg.setText("IP address: "+ip.toString() + ",  Database Name - " + datab.databaseName());
    msg.setStyleSheet("color : black");
    msg.setIcon(QMessageBox::Information);
    msg.show();

    return a.exec();
}
