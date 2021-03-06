﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MVGigE.h"
#include "MVImageC.h"
#include "MVCamProptySheet.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int showStreamOnLabel(MV_IMAGE_INFO* pInfo);
private slots:
    void receivelogin();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_AxSelect_currentIndexChanged(int index);

    void on_radioButton_RelativeDistance_clicked(bool checked);

    void on_radioButton_AbsoluteDistance_clicked(bool checked);

    void on_pushButton_AxMov_clicked();

    void on_pushButton_AxInit_clicked();

    void on_pushButton_AxStop_clicked();

    void on_pushButton_AxPosReset_clicked();

    //void on_label_11_linkActivated(const QString &link);

    void on_StartGrab_clicked();

    void on_StopGrab_clicked();

    void on_SingleGrab_clicked();

    void on_Attribute_clicked();

    void on_SaveImage_clicked();

    void on_holelocation_clicked();

    void on_microhole_clicked();

    void on_forward_pressed();

    void on_back_pressed();

    void on_left_pressed();

    void on_right_pressed();

    void on_pushButton_6_clicked();
    void MainWindow::Delay_MSec(unsigned int msec);
private:
    Ui::MainWindow *ui;
    void initialCamera();
    void drawImage();
    bool m_bRun;
    HANDLE m_hCam;
    HANDLE m_hPropDlg;
    HANDLE m_hImg;
};
#endif // MAINWINDOW_H
