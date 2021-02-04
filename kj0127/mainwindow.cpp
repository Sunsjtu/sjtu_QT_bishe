#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QVBoxLayout>
#include "MyParameter.h"


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

void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    iComboXYZ = index;
}

void MainWindow::on_radioButton_clicked(bool checked)
{
    if(checked)
        bPosOrDistance = checked;
}

void MainWindow::on_radioButton_2_clicked(bool checked)
{
    if(checked)
        bPosOrDistance = false;
}

void MainWindow::on_pushButton_AxInit_clicked()
{
    u32Return = Acm_GetDevNum(Adv_PCI1203, 15, &u32DevSerisNum);//获取板卡设备号
    u32Return = Acm_GetDevNum(Adv_PCI1203, 15, &u32DevSerisNum);//获取板卡设备号
    u32Return = Acm_DevOpen(u32DevSerisNum, &pDevHandle);//打开板卡，获取设备Handle
    u32Return = Acm_GetU32Property(pDevHandle, FT_DevAxesCount, &u32AxisCount);//获取轴数量

    //根据轴数，将所有轴打开
    for (uint u32AxisNum=0; u32AxisNum<u32AxisCount; u32AxisNum++)
    {
        u32Return = Acm_AxOpen(pDevHandle, (USHORT)u32AxisNum, &pAxisHandle[u32AxisNum]);//打开轴，获取每个轴的Handle
        Acm_AxSetCmdPosition(pAxisHandle[u32AxisNum], 0);//设置轴的命令位置为0
        Acm_AxSetActualPosition(pAxisHandle[u32AxisNum], 0);//设置轴的实际位置为0
    }

    //将轴0，1，2添加到群组中
    u32Return = Acm_GpAddAxis(&pGroupHandle, pAxisHandle[0]);
    u32Return = Acm_GpAddAxis(&pGroupHandle, pAxisHandle[1]);
    u32Return = Acm_GpAddAxis(&pGroupHandle, pAxisHandle[2]);
}

void MainWindow::on_pushButton_AxMov_clicked()
{
    U32 u32AxVelHigh ; //设置最大运动速度
    U32 u32AxVelLow ; //设置最小运动速度
    U32 u32AxAcc ;  //设置运动加速度
    U32 u32AxDec ;  //设置运动减速度
    I32 i32AxJerk ;  //设置默认运动曲线类型
    u32AxVelHigh = ui->lineEdit_AxVelHigh->text().toULong(); //读取输入的最大速度
    u32AxVelLow = ui -> lineEdit_AxVelLow -> text().toULong(); //读取输入的最小速度
    u32AxAcc = ui -> lineEdit_AxAcc -> text().toULong(); //读取输入的加速度
    u32AxDec = ui -> lineEdit_AxDec -> text().toULong(); //读取输入的减速度
    i32AxJerk = ui ->comboBox_Curve -> currentIndex(); //根据索引值确定输入的曲线类型

    /* 执行轴的单轴运动 */
    //设置参数
    u32Return = Acm_SetF64Property(pAxisHandle[iComboXYZ], PAR_AxVelLow, u32AxVelLow);
    u32Return = Acm_SetF64Property(pAxisHandle[iComboXYZ], PAR_AxVelHigh, u32AxVelHigh);
    u32Return = Acm_SetF64Property(pAxisHandle[iComboXYZ], PAR_AxAcc, u32AxAcc);
    u32Return = Acm_SetF64Property(pAxisHandle[iComboXYZ], PAR_AxDec, u32AxDec);
    u32Return = Acm_SetF64Property(pAxisHandle[iComboXYZ],PAR_AxJerk, i32AxJerk);

    if(bPosOrDistance == true)
    {
        F64 fCmdPos = ui -> lineEdit_AxCmdPos -> text().toFloat();
        u32Return = Acm_AxMoveAbs(pAxisHandle[iComboXYZ],fCmdPos); //执行运动到目标位置
    }

    else
    {
        F64 fCmdDistance = ui -> lineEdit_AxDistance -> text().toFloat();
        u32Return = Acm_AxMoveRel(pAxisHandle[iComboXYZ],fCmdDistance);
    }

    F64 fCmdPosition;//命令位置
    F64 fActPosition;//实际位置
    U16 u16State;//轴状态

    //读取轴的状态和位置
    Acm_AxGetCmdPosition(pAxisHandle[iComboXYZ], &fCmdPosition);
    Acm_AxGetActualPosition(pAxisHandle[iComboXYZ], &fActPosition);
    Acm_AxGetState(pAxisHandle[iComboXYZ], &u16State);

    //将轴的状态和位置显示到软件
    ui -> label_AxActPos -> setNum(fActPosition);
    ui -> label_AxCmdPos -> setNum(fCmdPosition);
    ui -> label_AxState -> setNum(u16State);




}



void MainWindow::on_pushButton_AxStop_clicked()
{
    //操作执行完毕，关闭轴、群组、设备
    Acm_GpClose(&pGroupHandle);//关闭群组

    for (uint u32AxisNum=0; u32AxisNum<u32AxisCount; u32AxisNum++)
    {
        Acm_AxClose(&pAxisHandle[u32AxisNum]);//关闭每个被打开的轴
    }

    Acm_DevClose(&pDevHandle);
}

void MainWindow::on_pushButton_AxPosReset_clicked()
{
    Acm_AxResetError(pAxisHandle[iComboXYZ]);
}
