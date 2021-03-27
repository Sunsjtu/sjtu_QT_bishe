#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QVBoxLayout>
//#include "MyParameter.h"

#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>
#include <QScreen>

#include "opencv2/opencv.hpp"
#include <iostream>
//#include "AdvMotApi.h"
#include "MyParameter.h"
using namespace std;
#define N 144
double hole[N][2];
double PPU_now[3]; //获取当前轴的PPU，{轴0，轴1，轴2}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_bRun(false)
    , m_hCam(NULL)
    ,m_hPropDlg(NULL)
    , m_hImg(NULL)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    initialCamera();
    QScreen *screen=QGuiApplication::primaryScreen ();
    QRect mm= screen->availableGeometry() ;
    int screen_width = mm.width();
    int screen_height = mm.height();
    ui->label_cam->setMaximumSize(screen_width,screen_height);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (m_hCam != NULL)
    {
        //1 MVGigE.h
        MVCloseCam(m_hCam);
        m_hCam = NULL;
    }

    if (m_hPropDlg != NULL)
    {
       // 销毁属性页对话框
       // 2 MVCamProptySheet.h
        MVCamProptySheetDestroy(m_hPropDlg);
        m_hPropDlg = NULL;
    }
   // 1 MVGigE.h
    MVTerminateLib();
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
    u32Return = Acm_DevOpen(0x66000000, &pDevHandle);//打开板卡，获取设备Handle
    u32Return = Acm_GetU32Property(pDevHandle, FT_DevAxesCount, &u32AxisCount);//获取轴数量

    //根据轴数，将所有轴打开
    for (uint u32AxisNum=0; u32AxisNum<u32AxisCount; u32AxisNum++)
    {
        u32Return = Acm_AxOpen(pDevHandle, (USHORT)u32AxisNum, &pAxisHandle[u32AxisNum]);//打开轴，获取每个轴的Handle
        Acm_AxSetCmdPosition(pAxisHandle[u32AxisNum], 0);//设置轴的命令位置为0
        Acm_AxSetActualPosition(pAxisHandle[u32AxisNum], 0);//设置轴的实际位置为0
    }
    u32Return = Acm_AxSetSvOn(pAxisHandle[0], 1);//打开0轴伺服
    u32Return = Acm_AxSetSvOn(pAxisHandle[1], 1);
    u32Return = Acm_AxSetSvOn(pAxisHandle[1], 1);
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

//    //将轴的状态和位置显示到软件
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


int __stdcall StreamCB(MV_IMAGE_INFO* pInfo, ULONG_PTR nUserVal)
{
    MainWindow* pWd = (MainWindow*)nUserVal;
    return (pWd->showStreamOnLabel(pInfo));
}

int MainWindow::showStreamOnLabel(MV_IMAGE_INFO* pInfo)
{
    MVInfo2Image(m_hCam,pInfo,(MVImage*)m_hImg);
    drawImage();
    return 0;
}

void MainWindow::initialCamera()
{
    // 设置鼠标等待效果
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    // 初始化相机函数库
    MVInitLib();
    // 打开相机
    int nCams = 0;
    //MVGigE.h
    MVGetNumOfCameras(&nCams);
#ifdef __SINGLEGRAB__
    qDebug("found %d cameras\n",nCams);
#endif
    //无相机
    if (nCams == 0)
    {
        //恢复鼠标效果
        QApplication::restoreOverrideCursor();
        QMessageBox::StandardButton t_Re = QMessageBox::warning(this,"Warning","Can't find camera",QMessageBox::Yes);
        if(t_Re == QMessageBox::Yes)
        {
            return ;
        }
    }
    //打开连接到电脑上的第一个相机
    MVSTATUS_CODES r = MVOpenCamByIndex(0, &m_hCam);
    if (m_hCam == NULL)
    {
        if (r == MVST_ACCESS_DENIED)
        {
            QMessageBox::StandardButton t_Re = QMessageBox::warning(this,"Warning","Access camera failed",QMessageBox::Yes);
            {
                return ;
            }
        }
        else
        {
            QMessageBox::StandardButton t_Re = QMessageBox::warning(this,"Warning","Open camera failed",QMessageBox::Yes);
            if(t_Re == QMessageBox::Yes)
            {
                return ;
            }
        }
        return;
    }
    TriggerModeEnums enumMode;
    MVGetTriggerMode(m_hCam, &enumMode);
    if (enumMode != TriggerMode_Off)
    {
         //设置为连续非触发模式
         MVSetTriggerMode(m_hCam, TriggerMode_Off);
    }
    int w, h;
    //3 GigECamera_Types.h
    MV_PixelFormatEnums PixelFormat;
    MVGetWidth(m_hCam, &w);
    MVGetHeight(m_hCam, &h);
    MVGetPixelFormat(m_hCam, &PixelFormat);
    //根据相机的宽、高、像素格式创建图像
    if (PixelFormat == PixelFormat_Mono8)
    {
        m_hImg = MVImageCreate(w, h, 8);
        #ifdef __SINGLEGRAB__
                qDebug() << "图像创建：" << 8;
        #endif
    }
    else
    {
        m_hImg = MVImageCreate(w, h, 24);
        #ifdef __SINGLEGRAB__
                qDebug() << "图像创建：" << 24;
        #endif
    }
    //设置相机属性页
    if (m_hPropDlg == NULL)
    {
        //创建及初始化属性页对话框
        const char t_Title[] = "Camera Properties";
        LPCTSTR strCaption = (LPCTSTR)t_Title;
        //2 MVCamProptySheet.h
        MVCamProptySheetCreateEx(&m_hPropDlg, m_hCam,0,strCaption,0xffff);
        if (m_hPropDlg == NULL)
        {
            QMessageBox::StandardButton t_Re = QMessageBox::warning(this,"Waring","Create property dialog faileds",QMessageBox::Yes);
            if(t_Re == QMessageBox::Yes)
           {
                return ;
            }
        }
    }
    ui->StartGrab->setEnabled(true);
    ui->SingleGrab->setEnabled(true);
    ui->Attribute->setEnabled(true);
    //恢复鼠标效果
    QApplication::restoreOverrideCursor();
}

QImage img2QImage(HANDLE hImg)
{
    int w = MVImageGetWidth(hImg);
    int h = MVImageGetHeight(hImg);
    int bpp = MVImageGetBPP(hImg);
    int pitch = MVImageGetPitch(hImg);
    unsigned char *pImgData = (unsigned char *)MVImageGetBits(hImg);

    if (bpp == 8)
    {
        uchar *pSrc = pImgData;
        QImage image(pSrc, w,h, pitch, QImage::Format_Indexed8);
        image.setColorCount(256);
        for (int i = 0; i < 256; i++)
        {
            image.setColor(i, qRgb(i, i, i));
        }
        return image;
    }
    else if (bpp == 24)
    {
        const uchar *pSrc = (const uchar*)pImgData;
        QImage image(pSrc, w,h, pitch, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    else
    {
        return QImage();
    }
}


void MainWindow::drawImage()
{
    QImage t_Image = img2QImage(m_hImg);

    ui->label_cam->setPixmap(QPixmap::fromImage(t_Image));
    //m_ShowImage->setScaledContents(true);
#ifdef __SINGLEGRAB__
    qDebug() << "width " << w << " height " << h << " bpp " << b;
#endif
}

void MainWindow::on_StartGrab_clicked()
{
    MVStartGrab(m_hCam, StreamCB, (ULONG_PTR)this);
    m_bRun = TRUE;
    if (m_hPropDlg != NULL)
    {
        //2 MVCamProptySheet.h
        MVCamProptySheetCameraRun(m_hPropDlg, MVCameraRun_ON);
    }
    ui->StartGrab->setEnabled(false);
    ui->SingleGrab->setEnabled(false);
    ui->StopGrab->setEnabled(true);
    ui->SaveImage->setEnabled(true);
}

void MainWindow::on_StopGrab_clicked()
{
    MVStopGrab(m_hCam);
    m_bRun = FALSE;
    if (m_hPropDlg != NULL)
    {
        //2 MVCamProptySheet.h
        MVCamProptySheetCameraRun(m_hPropDlg, MVCameraRun_OFF);
    }
    ui->StartGrab->setEnabled(true);
    ui->SingleGrab->setEnabled(true);
    ui->StopGrab->setEnabled(false);
    ui->SaveImage->setEnabled(false);
}

void MainWindow::on_SingleGrab_clicked()
{
    MVSTATUS_CODES r = MVSingleGrab(m_hCam, m_hImg, 500);
    if (r == MVST_SUCCESS)
    {
        drawImage();
    }
    else
    {
        QMessageBox::StandardButton t_Re = QMessageBox::warning(this,"警告","图像采集失败",QMessageBox::Yes);
        if(t_Re == QMessageBox::Yes)
        {
            return ;
        }
    }
    ui->StartGrab->setEnabled(true);
    ui->SingleGrab->setEnabled(true);
    ui->StopGrab->setEnabled(false);
    ui->SaveImage->setEnabled(true);
}

void MainWindow::on_Attribute_clicked()
{
    if (m_hPropDlg != NULL)
    {
        //2 MVCamProptySheet.h
        MVCamProptySheetShow(m_hPropDlg, SW_SHOW);
    }
}

void MainWindow::on_SaveImage_clicked()
{
    bool t_Run = false;
    if (m_bRun)
    {
        t_Run = true;
        on_StopGrab_clicked();
    }
    HANDLE t_Img = MVImageCreate(MVImageGetWidth(m_hImg), MVImageGetHeight(m_hImg), MVImageGetBPP(m_hImg));
    memcpy(MVImageGetBits(t_Img), MVImageGetBits(m_hImg), MVImageGetPitch(t_Img) * MVImageGetHeight(t_Img));
    QString t_FileName = QFileDialog::getSaveFileName(this, tr("保存图像"),
                               "untitled.bmp",
                               tr("Images (*.png *.xpm *.jpg *.bmp *.tif)"));
    char t_File[100];
    sprintf(t_File,"%s",t_FileName.toStdString().c_str());
    if (!t_FileName.isEmpty())
    {
        MVImageSave(t_Img,t_File);
    }
    MVImageDestroy(t_Img);
    if (t_Run)
    {
        on_StartGrab_clicked();
    }
}

void MainWindow::on_holelocation_clicked()
{
    cv::Mat srcimg = cv::imread("C:\\Users\\spinneret\\Desktop\\camera\\whole_test4.BMP",0);
    cv::Mat dstimg = cv::Mat::zeros(srcimg.size(),CV_8UC1);
    Acm_AxGetActualPosition(pAxisHandle[1], &PPU_now[1]);
    Acm_AxGetActualPosition(pAxisHandle[2], &PPU_now[2]);
    //阈值分割（二值化）
    threshold(srcimg, dstimg, 170 , 255, 0);
    //掩膜
    cv::Point2f center[1];
    center[0].x = 1488;
    center[0].y = 1019;
    cv::Mat mask = cv::Mat::zeros(dstimg.size(),CV_8UC1);
    cv::circle(mask,center[0],520,cv::Scalar(255),-1);
    cv::Mat maskimg = cv::Mat::zeros(dstimg.size(),CV_8UC1);
    dstimg.copyTo(maskimg,mask);
    //找出内部孔坐标
    int num=0;
    int pix_x[144]={0};
    int pix_y[144]={0};
    for(int j=0; j<maskimg.rows; j++)
    {
        uchar* data = maskimg.ptr<uchar>(j);
        for(int i=0; i<maskimg.cols; i++)
        {
            if(data[i]==0)
                continue;
            else
            {
                num++;
                int count = 0;
                int tmp_x=0,tmp_y=0;
                for(int row=j; row<j+15; row++)
                {
                    uchar* tmp = maskimg.ptr<uchar>(row);
                    for(int col=i-10; col<i+11; col++)
                    {
                        if(tmp[col]==255)
                        {
                            tmp[col]=0;
                            count++;
                            tmp_x+=col;
                            tmp_y+=row;
                        }
                    }
                }
                pix_x[num-1]=tmp_x/count;
                pix_y[num-1]=tmp_y/count;
                hole[num-1][0] = PPU_now[1] + (pix_x[num-1]-1226.6)*49.087 - 127570;
                hole[num-1][1] = PPU_now[2] + (pix_y[num-1]-1030)*49.121 + 530;
            }
        }
    }
    cv::Mat holes = cv::Mat(maskimg.size(),CV_8UC3,cv::Scalar(255,255,255));
    QString str = "have ";
    str.append(QString::number(num)+" holes:\n");
    ui->label_result->setText(str);
    for(int i=0; i<num; i++)
    {
        cv::Point center;
        center.x = pix_x[i];
        center.y = pix_y[i];
        cv::circle(holes,center,10,cv::Scalar(255,0,0),-1);
        str.append("["+QString::number(hole[i][0])+","+QString::number(hole[i][1])+"]  ");
    }
    cv::cvtColor(holes,holes,cv::COLOR_BGR2RGB);
    QImage img = QImage((const unsigned char*)(holes.data),holes.cols,holes.rows,holes.cols*holes.channels(),QImage::Format_RGB888);
    ui->label_cam->clear();
    ui->label_cam->setPixmap(QPixmap::fromImage(img));
    ui->label_result->setText(str);
}

void MainWindow::on_microhole_clicked()
{
    cv::Mat srcimg = cv::imread("C:\\Users\\spinneret\\Desktop\\camera\\microhole_test.BMP",0);
    //感兴趣区域提取
    cv::Mat imgroi = cv::Mat::zeros(srcimg.size(),CV_8UC1);
    srcimg(cv::Rect(450, 300, 720, 600)).copyTo(imgroi);
    //阈值分割（二值化）
    cv::Mat dstimg = cv::Mat::zeros(imgroi.size(),CV_8UC1);
    threshold(imgroi, dstimg, 100 , 255, 0);
    //缺陷检测
    int pix_num = 0;
    //【1】统计白色像素个数
    cv::Mat_<uchar>::iterator it = dstimg.begin<uchar>();
    cv::Mat_<uchar>::iterator itend = dstimg.end<uchar>();
    for (; it != itend; ++it)
    {
        if ((*it) > 0) pix_num += 1;
    }
    QString str = "white pix num:";
    str.append(QString::number(pix_num)+"\n");
    double s1 = pix_num;
    //【2】轮廓检测
    vector<vector<cv::Point>> contours;
    vector<cv::Vec4i> hierarchy;
    findContours(dstimg, contours, hierarchy, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
    vector<cv::Point2f>center(contours.size());
    vector<float>radius(contours.size());
    int cx[1000] = { 0 }, cy[1000] = { 0 };//储存所有轮廓点像素
    int ca = 0;
    for(int i=0;i<contours.size();i++)
    {
        for (int j = 0; j < contours[i].size(); j++)
        {
            cx[ca] = contours[i][j].x;
            cy[ca] = contours[i][j].y;
            ca++;
        }
    }
    //【3】求圆度、堵塞率
    double ex = 0, ey = 0, ex2 = 0, ey2 = 0, exy = 0, ex3 = 0, exy2 = 0, ex2y2 = 0, ey3 = 0, ex2y = 0;//x、y、x^2、y^2、xy、x^3、xy^2、x^2+y^2、y^3、x^2y求和
    double M11 = 0, M12 = 0, M22 = 0, H1 = 0, H2 = 0;
    double x0, y0;//最小二乘圆心坐标和半径
    for (int i = 0; i < ca; i++)
    {
        ex = cx[i] + ex;
        ey = cy[i] + ey;
        ex2 = pow(cx[i], 2) + ex2;
        ey2 = pow(cy[i], 2) + ey2;
        exy = cx[i] * cy[i] + exy;
        ex3 = pow(cx[i], 3) + ex3;
        exy2 = cx[i] * pow(cy[i], 2) + exy2;
        ex2y2 = pow(cx[i], 2) + pow(cy[i], 2) + ex2y2;
        ey3 = pow(cy[i], 3) + ey3;
        ex2y = pow(cx[i], 2) * cy[i] + ex2y;
    }
    M11 = ca* ex2 - ex * ex;
    M12 =ca * exy - ex * ey;
    M22 =ca * ey2 - ey * ey;
    H1 = ca * ex3 + ca * exy2 - ex2y2 * ex;
    H2 = ca* ey3 + ca * ex2y - ex2y2 * ey;
    x0 = -(H2 * M12 - H1 * M22) / (M11 * M22 - M12 * M12) / 2;
    y0 = -(H2 * M11 - H1 * M12) / (M12 * M12 - M11 * M22) / 2;
    str.append("center location:["+QString::number(x0)+","+QString::number(y0)+"]\n");
    //【4】求圆度误差
    double rq = 500, rw = 0;//最大内接圆与最小外接圆半径
    for (int i = 0; i < ca; i++)
    {
        double rs = sqrt(pow((cx[i] - x0), 2) + pow((cy[i] - y0), 2));
        if (rq > rs)
        { rq = rs; }
        if (rw < rs)
        { rw = rs; }
    }
    double yd = rw - rq;
    double s2 = CV_PI * rw * rw ;
    double dsl = 1 - s1 / s2;
    str.append("max inner circle: R = "+QString::number(rq)+"\n");
    str.append("min outter circle: R = "+QString::number(rw)+"\n");
    str.append("block ratio: "+QString::number(dsl*100)+"%\n");
    str.append("circle error: "+QString::number(yd)+"\n");
    // 绘制多边形轮廓 + 圆形框
    cv::Mat drawing = cv::Mat::zeros(dstimg.size(), CV_8UC3);
    for (int i = 0; i < contours.size(); i++)
    {
        drawContours(drawing, contours, i, cv::Scalar(255, 255, 255), 1, 8, vector<cv::Vec4i>(), 0, cv::Point());//绘制轮廓
    }
    circle(drawing, cv::Point(x0, y0), rq, cv::Scalar(0, 0, 255), 1, 8, 0);//绘制最大内接圆
    circle(drawing, cv::Point(x0, y0), rw, cv::Scalar(0, 255, 0), 1, 8, 0);//绘制最小外接圆
    cv::cvtColor(drawing,drawing,cv::COLOR_BGR2RGB);
    QImage img = QImage((const unsigned char*)(drawing.data),drawing.cols,drawing.rows,drawing.cols*drawing.channels(),QImage::Format_RGB888);
    ui->label_cam->clear();
    ui->label_cam->setPixmap(QPixmap::fromImage(img));
    ui->label_result->setText(str);
}

void MainWindow::on_forward_pressed()
{

}

void MainWindow::on_back_pressed()
{

}

void MainWindow::on_left_pressed()
{

}

void MainWindow::on_right_pressed()
{

}
