#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void receivelogin();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

    void on_radioButton_AbsoluteDistance_clicked(bool checked);

    void on_radioButton_RelativeDistance_clicked(bool checked);

    void on_pushButton_AxMov_clicked();

    void on_pushButton_AxInit_clicked();

    void on_pushButton_AxStop_clicked();

    void on_pushButton_AxPosReset_clicked();

    //void on_label_11_linkActivated(const QString &link);

    //void on_pushButton_8_clicked();

    //void on_pushButton_AxInit_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
