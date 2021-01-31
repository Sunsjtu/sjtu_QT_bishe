#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QVBoxLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    QLabel* image_label_3 = new QLabel;
    image_label_3->setFixedSize(50,50);
    image_label_3->setStyleSheet("QLabel{border-image:url(:/img/config.png)}");
    QVBoxLayout *topLayout_3 = new QVBoxLayout();
    topLayout_3->addWidget(image_label_3);
    topLayout_3->setContentsMargins(40,6,0,20);
    ui->pushButton->setLayout(topLayout_3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
