#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QVBoxLayout>
#include "MyParameter.h"
//#include "GigECamera_Types.h"
#include"ant_path.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    fnGetData();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::receivelogin()
{
    this->show();
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

void MainWindow::on_radioButton_AbsoluteDistance_clicked(bool checked)
{
    if(checked)
        bPosOrDistance = checked;
}

void MainWindow::on_radioButton_RelativeDistance_clicked(bool checked)
{
    if(checked)
        bPosOrDistance = false;
}

void MainWindow::on_pushButton_AxInit_clicked()
{

    //u32Return = Acm_GetDevNum(Adv_PCI1203, 15, &u32DevSerisNum);//获取板卡设备号
    u32Return = Acm_DevOpen(0x66000000, &pDevHandle);//打开板卡，获取设备handle
    u32Return = Acm_DevOpen(u32DevSerisNum, &pDevHandle);//打开板卡，获取设备Handle
    u32Return = Acm_GetU32Property(pDevHandle, FT_DevAxesCount, &u32AxisCount);//获取轴数量

    //根据轴数，将所有轴打开
    for (uint u32AxisNum=0; u32AxisNum<u32AxisCount; u32AxisNum++)
    {
        u32Return = Acm_AxOpen(pDevHandle, (USHORT)u32AxisNum, &pAxisHandle[u32AxisNum]);//打开轴，获取每个轴的Handle
        //Acm_AxSetCmdPosition(pAxisHandle[u32AxisNum], 0);//设置轴的命令位置为0
        //Acm_AxSetActualPosition(pAxisHandle[u32AxisNum], 0);//设置轴的实际位置为0
        u32Return = Acm_AxSetSvOn(pAxisHandle[u32AxisNum], 1);//打开0轴伺服
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

//    //读取轴的状态和位置
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

        u32Return = Acm_AxSetSvOn(pAxisHandle[u32AxisNum], 0);//打开0轴伺服
        Acm_AxClose(&pAxisHandle[u32AxisNum]);//关闭每个被打开的轴

    }

    Acm_DevClose(&pDevHandle);

}

void MainWindow::on_pushButton_AxPosReset_clicked()
{
    Acm_AxResetError(pAxisHandle[iComboXYZ]);
}

////--------------------------主函数--------------------------------------------------
//int main()
//{
//    fnGetData();
//    fnCalculateAllDistance();
//    fnGreedy();
//    cout << "贪婪算法得到最短长度为：" << fnCalculateTotalDistance() << endl;
//    time_t timer, timerl;

//    time(&timer);
//    unsigned long seed = timer;
//    seed %= 56000;
//    srand((unsigned int)seed);

//    //由矩阵表示两两城市之间的距离
//    calculateAllDistance();
//    //蚁群系统对象
//    AntColonySystem* acs = new AntColonySystem();
//    ACSAnt* ants[M];
//    //蚂蚁均匀分布在城市上
//    for (int k = 0; k < M; k++)
//    {
//        ants[k] = new ACSAnt(acs, (int)(k % N));
//    }
//    calculateAllDistance();
//    //随机选择一个节点计算由最近邻方法得到的一个长度
//    int node = rand() % N;
//    Lnn = CalAdjacentDistance(node);

//    //各条路径上初始化的信息素强度
//    double initInfo = 1 / (N * Lnn);
//    acs->InitParameter(initInfo);

//    //全局最优路径
//    int globalTour[N][2];
//    //全局最优长度
//    double globalBestLength = 0.0;
//    ofstream indiedai;
//    indiedai.open("diedai.txt", ios::trunc);
//    for (int i = 0; i < 500; i++)
//    {
//        //局部最优路径
//        int localTour[N][2];
//        //局部最优长度
//        double localBestLength = 0.0;
//        //当前路径长度
//        double tourLength;
//        for (int j = 0; j < M; j++)
//        {
//            int* tourPath = ants[j]->Search();
//            tourLength = calculateSumOfDistance(tourPath);
//            //局部比较，并记录路径和长度
//            if (tourLength < localBestLength || (localBestLength - 0.0 < 0.000001 && localBestLength - 0.0 > -0.000001))
//            {
//                for (int m = 0; m < N; m++)
//                {
//                    int row = *(tourPath + 2 * m);
//                    int col = *(tourPath + 2 * m + 1);
//                    localTour[m][0] = row;
//                    localTour[m][1] = col;
//                }
//                localBestLength = tourLength;
//            }
//        }
//        //全局比较，并记录路径和长度
//        if (localBestLength < globalBestLength || (globalBestLength - 0.0 < 0.000001 && globalBestLength - 0.0 > -0.000001))
//        {
//           ///////////////////////////////////////////////////////////////////////////////////////////////
//            //用贪婪算法算出初始解
//             if (i == 0)
//            {
//                cout << "begin:" << endl;
//                for (int ii = 0; ii < N-1; ii++)
//                {
//                    localTour[ii][0] = aRoute[ii]-1;
//                    localTour[ii][1] = aRoute[ii + 1]-1;
//                }
//                localTour[N - 1][0] = aRoute[N - 1]-1;
//                localTour[N - 1][1] = aRoute[0]-1;
//            }
//             /////////////////////////////////////////////////////////////////////////////////////////////////
//            for (int j = 0; j < N; j++)
//            {
//                globalTour[j][0] = localTour[j][0];
//                globalTour[j][1] = localTour[j][1];
//            }
//            globalBestLength = localBestLength;
//        }
//        acs->UpdateGlobalPathRule(*globalTour, globalBestLength);
//        //输出所有蚂蚁循环一次后的迭代最优路径
//        cout << "第 " << i + 1 << " 次迭代最优路径:" << localBestLength << "." << endl;

//        indiedai << localBestLength << "\n";

//        for (int m = 0; m < N; m++)
//        {
//            cout << localTour[m][0] << ".";
//        }
//        cout << endl;
//    }
//    indiedai.close();
//    //输出全局最优路径
//    cout << "全局最优路径长度:" << globalBestLength << endl;
//    cout << "全局最优路径:";
//    ofstream inroute;
//    inroute.open("route.txt", ios::trunc);
//    for (int m = 0; m < N; m++)
//    {
//        cout << globalTour[m][0] << ".";
//        inroute << globalTour[m][0] << "\n";
//    }
//    inroute.close();
//    cout << endl;
//    for (int m = 0; m < N; m++)
//    {
//    }
//    time(&timerl);
//    int t = timerl - timer;
//    return 0;
//}

