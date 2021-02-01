/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QCommandLinkButton *commandLinkButton_6;
    QFrame *frame;
    QLabel *label_12;
    QLabel *label_8;
    QLabel *label_7;
    QCommandLinkButton *commandLinkButton_3;
    QLabel *label_11;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_5;
    QLabel *label_6;
    QLabel *label_9;
    QProgressBar *progressBar;
    QWidget *tab_5;
    QGroupBox *groupBox_6;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_7;
    QListView *listView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_2;
    QCommandLinkButton *commandLinkButton_7;
    QPushButton *pushButton_13;
    QWidget *page_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QFrame *frame_2;
    QLabel *label_17;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QWidget *tab_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QLabel *label_10;
    QPushButton *pushButton_5;
    QLabel *label;
    QPushButton *pushButton_10;
    QSlider *horizontalSlider;
    QPushButton *pushButton_6;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_2;
    QPushButton *pushButton_11;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_13;
    QLabel *label_3;
    QCommandLinkButton *commandLinkButton;
    QPushButton *pushButton_12;
    QWidget *tab_6;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_AxInit;
    QPushButton *pushButton_AxPosReset;
    QPushButton *pushButton_AxMov;
    QPushButton *pushButton_AxStop;
    QGroupBox *groupBox;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_AxActPos;
    QLabel *label_18;
    QLabel *label_AxState;
    QLabel *label_20;
    QComboBox *comboBox_Curve;
    QLabel *label_23;
    QLineEdit *lineEdit_AxVelLow;
    QLineEdit *lineEdit_AxVelHigh;
    QLineEdit *lineEdit_AxDec;
    QLabel *label_24;
    QLineEdit *lineEdit_AxAcc;
    QLabel *label_25;
    QLabel *label_AxCmdPos;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_AbsoluteDistance;
    QRadioButton *radioButton_RelativeDistance;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *lineEdit_AxCmdPos;
    QLineEdit *lineEdit_AxDistance;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QWidget *page_3;
    QPushButton *m_DeleteBtn;
    QPushButton *m_ShowBtn;
    QLineEdit *m_ChangeNameLineEdit;
    QLineEdit *m_ChangePasswordLineEdit;
    QLabel *m_NewPasswordLabel;
    QLabel *m_DeleteNameLabel;
    QPushButton *m_ChangeBtn;
    QLabel *m_ChangeNameLabel;
    QPushButton *m_DeleteAllBtn;
    QTableView *m_TableView;
    QLineEdit *m_DeleteNameLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1253, 744);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 90, 1221, 601));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 1201, 571));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        commandLinkButton_6 = new QCommandLinkButton(tab_2);
        commandLinkButton_6->setObjectName(QString::fromUtf8("commandLinkButton_6"));
        commandLinkButton_6->setGeometry(QRect(646, 59, 80, 40));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(commandLinkButton_6->sizePolicy().hasHeightForWidth());
        commandLinkButton_6->setSizePolicy(sizePolicy);
        commandLinkButton_6->setMinimumSize(QSize(80, 40));
        commandLinkButton_6->setMaximumSize(QSize(80, 40));
        commandLinkButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        frame = new QFrame(tab_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(526, 99, 200, 330));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(200, 330));
        frame->setMaximumSize(QSize(200, 330));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 10, 180, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMaximumSize(QSize(280, 310));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(96, 374, 55, 25));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(55, 25));
        label_8->setMaximumSize(QSize(55, 25));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(526, 69, 55, 25));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(55, 25));
        label_7->setMaximumSize(QSize(55, 25));
        commandLinkButton_3 = new QCommandLinkButton(tab_2);
        commandLinkButton_3->setObjectName(QString::fromUtf8("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(196, 399, 80, 40));
        sizePolicy.setHeightForWidth(commandLinkButton_3->sizePolicy().hasHeightForWidth());
        commandLinkButton_3->setSizePolicy(sizePolicy);
        commandLinkButton_3->setMinimumSize(QSize(80, 40));
        commandLinkButton_3->setMaximumSize(QSize(80, 40));
        commandLinkButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(57, 30, 388, 268));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMaximumSize(QSize(388, 268));
        label_11->setAlignment(Qt::AlignCenter);
        commandLinkButton_4 = new QCommandLinkButton(tab_2);
        commandLinkButton_4->setObjectName(QString::fromUtf8("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(296, 399, 80, 40));
        sizePolicy.setHeightForWidth(commandLinkButton_4->sizePolicy().hasHeightForWidth());
        commandLinkButton_4->setSizePolicy(sizePolicy);
        commandLinkButton_4->setMinimumSize(QSize(80, 40));
        commandLinkButton_4->setMaximumSize(QSize(80, 40));
        commandLinkButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        commandLinkButton_2 = new QCommandLinkButton(tab_2);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(96, 399, 80, 40));
        sizePolicy.setHeightForWidth(commandLinkButton_2->sizePolicy().hasHeightForWidth());
        commandLinkButton_2->setSizePolicy(sizePolicy);
        commandLinkButton_2->setMinimumSize(QSize(80, 40));
        commandLinkButton_2->setMaximumSize(QSize(80, 40));
        commandLinkButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        commandLinkButton_5 = new QCommandLinkButton(tab_2);
        commandLinkButton_5->setObjectName(QString::fromUtf8("commandLinkButton_5"));
        commandLinkButton_5->setGeometry(QRect(396, 399, 80, 40));
        sizePolicy.setHeightForWidth(commandLinkButton_5->sizePolicy().hasHeightForWidth());
        commandLinkButton_5->setSizePolicy(sizePolicy);
        commandLinkButton_5->setMinimumSize(QSize(80, 40));
        commandLinkButton_5->setMaximumSize(QSize(80, 40));
        commandLinkButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(96, 59, 55, 25));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(55, 25));
        label_6->setMaximumSize(QSize(55, 25));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(366, 374, 80, 25));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(80, 25));
        label_9->setMaximumSize(QSize(80, 25));
        progressBar = new QProgressBar(tab_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(150, 380, 210, 12));
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setMinimumSize(QSize(210, 12));
        progressBar->setMaximumSize(QSize(210, 12));
        progressBar->setValue(24);
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        groupBox_6 = new QGroupBox(tab_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(580, 10, 581, 501));
        tableWidget = new QTableWidget(groupBox_6);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 20, 551, 471));
        groupBox_7 = new QGroupBox(tab_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(30, 10, 541, 501));
        listView = new QListView(groupBox_7);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 90, 511, 391));
        layoutWidget = new QWidget(groupBox_7);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 30, 341, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        commandLinkButton_7 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_7->setObjectName(QString::fromUtf8("commandLinkButton_7"));
        commandLinkButton_7->setMaximumSize(QSize(80, 40));

        horizontalLayout->addWidget(commandLinkButton_7);

        pushButton_13 = new QPushButton(layoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setMaximumSize(QSize(60, 40));

        horizontalLayout->addWidget(pushButton_13);

        tabWidget->addTab(tab_5, QString());
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 10, 1221, 591));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        frame_2 = new QFrame(tab_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(19, 9, 801, 531));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 0, 81, 21));
        groupBox_3 = new QGroupBox(frame_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 30, 761, 251));
        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 290, 761, 241));
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(830, 10, 321, 531));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setEnabled(true);
        pushButton_7->setGeometry(QRect(590, 270, 37, 25));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(37, 25));
        pushButton_7->setMaximumSize(QSize(37, 21));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(265, 58, 85, 25));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(85, 25));
        pushButton_4->setMaximumSize(QSize(85, 25));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setFocusPolicy(Qt::StrongFocus);
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(46, 29, 398, 298));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMaximumSize(QSize(398, 298));
        label_10->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(590, 198, 37, 25));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(37, 25));
        pushButton_5->setMaximumSize(QSize(37, 25));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(tab_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(85, 58, 70, 25));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(70, 25));
        label->setMaximumSize(QSize(70, 25));
        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(590, 308, 37, 25));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(37, 25));
        pushButton_10->setMaximumSize(QSize(37, 25));
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider = new QSlider(tab_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(590, 128, 140, 25));
        sizePolicy.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy);
        horizontalSlider->setMinimumSize(QSize(140, 25));
        horizontalSlider->setMaximumSize(QSize(140, 25));
        horizontalSlider->setCursor(QCursor(Qt::OpenHandCursor));
        horizontalSlider->setMouseTracking(false);
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(630, 226, 37, 25));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(37, 25));
        pushButton_6->setMaximumSize(QSize(37, 25));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(525, 198, 55, 25));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(55, 25));
        label_4->setMaximumSize(QSize(55, 25));
        doubleSpinBox = new QDoubleSpinBox(tab_4);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(585, 358, 50, 25));
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(165, 58, 85, 25));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(85, 25));
        pushButton_8->setMaximumSize(QSize(85, 25));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setLayoutDirection(Qt::LeftToRight);
        pushButton_8->setAutoRepeatDelay(300);
        pushButton_8->setAutoRepeatInterval(100);
        pushButton_9 = new QPushButton(tab_4);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(670, 198, 37, 25));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(37, 25));
        pushButton_9->setMaximumSize(QSize(37, 25));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(85, 98, 70, 25));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        pushButton_11 = new QPushButton(tab_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(735, 358, 41, 23));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(525, 288, 55, 25));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(55, 25));
        label_5->setMaximumSize(QSize(55, 25));
        doubleSpinBox_2 = new QDoubleSpinBox(tab_4);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(635, 358, 51, 25));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(525, 358, 55, 25));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMinimumSize(QSize(55, 25));
        label_13->setMaximumSize(QSize(55, 25));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(525, 128, 55, 25));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(55, 25));
        label_3->setMaximumSize(QSize(55, 25));
        commandLinkButton = new QCommandLinkButton(tab_4);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(655, 398, 70, 35));
        sizePolicy.setHeightForWidth(commandLinkButton->sizePolicy().hasHeightForWidth());
        commandLinkButton->setSizePolicy(sizePolicy);
        commandLinkButton->setMinimumSize(QSize(70, 35));
        commandLinkButton->setMaximumSize(QSize(70, 35));
        commandLinkButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_12 = new QPushButton(tab_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setEnabled(true);
        pushButton_12->setGeometry(QRect(630, 170, 37, 25));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setMinimumSize(QSize(37, 25));
        pushButton_12->setMaximumSize(QSize(37, 25));
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayoutWidget = new QWidget(tab_6);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 90, 131, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_AxInit = new QPushButton(verticalLayoutWidget);
        pushButton_AxInit->setObjectName(QString::fromUtf8("pushButton_AxInit"));

        verticalLayout->addWidget(pushButton_AxInit);

        pushButton_AxPosReset = new QPushButton(verticalLayoutWidget);
        pushButton_AxPosReset->setObjectName(QString::fromUtf8("pushButton_AxPosReset"));

        verticalLayout->addWidget(pushButton_AxPosReset);

        pushButton_AxMov = new QPushButton(verticalLayoutWidget);
        pushButton_AxMov->setObjectName(QString::fromUtf8("pushButton_AxMov"));

        verticalLayout->addWidget(pushButton_AxMov);

        pushButton_AxStop = new QPushButton(verticalLayoutWidget);
        pushButton_AxStop->setObjectName(QString::fromUtf8("pushButton_AxStop"));

        verticalLayout->addWidget(pushButton_AxStop);

        groupBox = new QGroupBox(tab_6);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 40, 201, 401));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 20, 101, 16));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 170, 72, 15));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 340, 72, 15));
        label_AxActPos = new QLabel(groupBox);
        label_AxActPos->setObjectName(QString::fromUtf8("label_AxActPos"));
        label_AxActPos->setGeometry(QRect(100, 340, 72, 15));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 270, 72, 15));
        label_AxState = new QLabel(groupBox);
        label_AxState->setObjectName(QString::fromUtf8("label_AxState"));
        label_AxState->setGeometry(QRect(100, 270, 72, 15));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 300, 72, 15));
        comboBox_Curve = new QComboBox(groupBox);
        comboBox_Curve->addItem(QString());
        comboBox_Curve->addItem(QString());
        comboBox_Curve->setObjectName(QString::fromUtf8("comboBox_Curve"));
        comboBox_Curve->setGeometry(QRect(100, 300, 87, 22));
        comboBox_Curve->setEditable(false);
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 70, 91, 16));
        lineEdit_AxVelLow = new QLineEdit(groupBox);
        lineEdit_AxVelLow->setObjectName(QString::fromUtf8("lineEdit_AxVelLow"));
        lineEdit_AxVelLow->setGeometry(QRect(10, 90, 113, 21));
        lineEdit_AxVelHigh = new QLineEdit(groupBox);
        lineEdit_AxVelHigh->setObjectName(QString::fromUtf8("lineEdit_AxVelHigh"));
        lineEdit_AxVelHigh->setGeometry(QRect(10, 40, 113, 21));
        lineEdit_AxDec = new QLineEdit(groupBox);
        lineEdit_AxDec->setObjectName(QString::fromUtf8("lineEdit_AxDec"));
        lineEdit_AxDec->setGeometry(QRect(10, 190, 113, 21));
        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 120, 72, 15));
        lineEdit_AxAcc = new QLineEdit(groupBox);
        lineEdit_AxAcc->setObjectName(QString::fromUtf8("lineEdit_AxAcc"));
        lineEdit_AxAcc->setGeometry(QRect(10, 140, 113, 21));
        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 370, 72, 15));
        label_AxCmdPos = new QLabel(groupBox);
        label_AxCmdPos->setObjectName(QString::fromUtf8("label_AxCmdPos"));
        label_AxCmdPos->setGeometry(QRect(100, 370, 72, 15));
        groupBox_2 = new QGroupBox(tab_6);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(440, 90, 261, 181));
        radioButton_AbsoluteDistance = new QRadioButton(groupBox_2);
        radioButton_AbsoluteDistance->setObjectName(QString::fromUtf8("radioButton_AbsoluteDistance"));
        radioButton_AbsoluteDistance->setGeometry(QRect(0, 30, 91, 19));
        radioButton_RelativeDistance = new QRadioButton(groupBox_2);
        radioButton_RelativeDistance->setObjectName(QString::fromUtf8("radioButton_RelativeDistance"));
        radioButton_RelativeDistance->setGeometry(QRect(130, 30, 91, 19));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(0, 80, 72, 15));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(130, 80, 72, 15));
        lineEdit_AxCmdPos = new QLineEdit(groupBox_2);
        lineEdit_AxCmdPos->setObjectName(QString::fromUtf8("lineEdit_AxCmdPos"));
        lineEdit_AxCmdPos->setGeometry(QRect(0, 100, 91, 21));
        lineEdit_AxDistance = new QLineEdit(groupBox_2);
        lineEdit_AxDistance->setObjectName(QString::fromUtf8("lineEdit_AxDistance"));
        lineEdit_AxDistance->setGeometry(QRect(130, 100, 91, 21));
        comboBox_2 = new QComboBox(tab_6);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 10, 87, 22));
        lineEdit = new QLineEdit(tab_6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 290, 113, 21));
        tabWidget_2->addTab(tab_6, QString());
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        m_DeleteBtn = new QPushButton(page_3);
        m_DeleteBtn->setObjectName(QString::fromUtf8("m_DeleteBtn"));
        m_DeleteBtn->setGeometry(QRect(70, 200, 171, 41));
        m_ShowBtn = new QPushButton(page_3);
        m_ShowBtn->setObjectName(QString::fromUtf8("m_ShowBtn"));
        m_ShowBtn->setGeometry(QRect(80, 30, 161, 111));
        m_ChangeNameLineEdit = new QLineEdit(page_3);
        m_ChangeNameLineEdit->setObjectName(QString::fromUtf8("m_ChangeNameLineEdit"));
        m_ChangeNameLineEdit->setGeometry(QRect(130, 280, 121, 31));
        m_ChangePasswordLineEdit = new QLineEdit(page_3);
        m_ChangePasswordLineEdit->setObjectName(QString::fromUtf8("m_ChangePasswordLineEdit"));
        m_ChangePasswordLineEdit->setGeometry(QRect(130, 320, 121, 31));
        m_NewPasswordLabel = new QLabel(page_3);
        m_NewPasswordLabel->setObjectName(QString::fromUtf8("m_NewPasswordLabel"));
        m_NewPasswordLabel->setGeometry(QRect(58, 321, 61, 31));
        m_DeleteNameLabel = new QLabel(page_3);
        m_DeleteNameLabel->setObjectName(QString::fromUtf8("m_DeleteNameLabel"));
        m_DeleteNameLabel->setGeometry(QRect(60, 160, 61, 31));
        m_ChangeBtn = new QPushButton(page_3);
        m_ChangeBtn->setObjectName(QString::fromUtf8("m_ChangeBtn"));
        m_ChangeBtn->setGeometry(QRect(70, 360, 171, 41));
        m_ChangeNameLabel = new QLabel(page_3);
        m_ChangeNameLabel->setObjectName(QString::fromUtf8("m_ChangeNameLabel"));
        m_ChangeNameLabel->setGeometry(QRect(58, 281, 61, 31));
        m_DeleteAllBtn = new QPushButton(page_3);
        m_DeleteAllBtn->setObjectName(QString::fromUtf8("m_DeleteAllBtn"));
        m_DeleteAllBtn->setGeometry(QRect(70, 430, 171, 31));
        m_TableView = new QTableView(page_3);
        m_TableView->setObjectName(QString::fromUtf8("m_TableView"));
        m_TableView->setGeometry(QRect(260, 30, 461, 451));
        m_DeleteNameLineEdit = new QLineEdit(page_3);
        m_DeleteNameLineEdit->setObjectName(QString::fromUtf8("m_DeleteNameLineEdit"));
        m_DeleteNameLineEdit->setGeometry(QRect(130, 160, 121, 31));
        stackedWidget->addWidget(page_3);
        pushButton = new QPushButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(pushButton);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 50, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover{border-style: outset}\n"
"QPushButton:pressed{border-style: inset}"));
        pushButton->setCheckable(true);
        pushButton_3 = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 50, 93, 28));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:pressed{border-style: inset}"));
        pushButton_3->setCheckable(true);
        pushButton_2 = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 50, 101, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("/*\346\214\211\351\222\256\346\231\256\351\200\232\346\200\201*/\n"
"QPushButton\n"
"{\n"
"    /*\345\255\227\344\275\223\344\270\272\345\276\256\350\275\257\351\233\205\351\273\221*/\n"
"    font-family:Microsoft Yahei;\n"
"\n"
"    /*\345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262*/    \n"
"    color:white;\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:rgb(14 , 150 , 254);\n"
"    /*\350\276\271\346\241\206\345\234\206\350\247\222\345\215\212\345\276\204\344\270\2728\345\203\217\347\264\240*/ \n"
"    border-radius:8px;\n"
"}\n"
"\n"
"/*\346\214\211\351\222\256\345\201\234\347\225\231\346\200\201*/\n"
"QPushButton:hover\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"/*\346\214\211\351\222\256\346\214\211\344\270\213\346\200\201*/\n"
"QPushButton:pressed\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:rgb"
                        "(14 , 135 , 228);\n"
"    /*\345\267\246\345\206\205\350\276\271\350\267\235\344\270\2723\345\203\217\347\264\240\357\274\214\350\256\251\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\345\217\263\347\247\273\345\212\2503\345\203\217\347\264\240*/  \n"
"    padding-left:3px;\n"
"    /*\344\270\212\345\206\205\350\276\271\350\267\235\344\270\2723\345\203\217\347\264\240\357\274\214\350\256\251\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\344\270\213\347\247\273\345\212\2503\345\203\217\347\264\240*/  \n"
"    padding-top:3px;\n"
"}"));
        pushButton_2->setCheckable(true);
        pushButton_2->setChecked(false);
        pushButton_2->setAutoExclusive(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1253, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\347\233\221\346\216\247", nullptr));
        commandLinkButton_6->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\346\234\252\345\240\265\345\241\236\351\235\242\347\247\257\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\350\277\233\345\272\246", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\347\273\223\346\236\234", nullptr));
        commandLinkButton_3->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\347\255\211\345\276\205\346\243\200\346\265\213\345\274\200\345\247\213", nullptr));
        commandLinkButton_4->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        commandLinkButton_5->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\243\200", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\351\242\204\350\247\210", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\351\242\204\350\256\241\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", " \345\233\276\345\203\217\346\243\200\346\265\213", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\346\243\200\346\265\213\346\225\260\346\215\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\346\211\200\345\261\236\345\255\224\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "X\345\235\220\346\240\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Y\345\235\220\346\240\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\346\230\257\345\220\246\351\200\232\350\277\207\346\243\200\346\265\213", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256\346\237\245\350\257\242", nullptr));
        commandLinkButton_7->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", " \345\210\206\346\236\220\347\273\237\350\256\241", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\345\226\267\344\270\235\346\235\277\346\225\260\346\215\256", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\347\211\210\345\236\213\346\225\260\346\215\256", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", " \345\255\224\345\236\213\346\225\260\346\215\256", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", " \345\226\267\344\270\235\346\235\277\346\214\207\346\240\207\351\200\211\346\213\251", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", " \346\243\200\346\265\213\350\256\276\347\275\256", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\345\276\256\345\255\224\347\233\270\346\234\272", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\347\255\211\345\276\205\347\233\270\346\234\272\350\277\236\346\216\245", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\233\270\346\234\272\357\274\232", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\351\225\234\345\244\264\344\275\215\347\275\256", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\200\347\233\270\346\234\272", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\233\270\346\234\272\351\242\204\350\247\210", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\350\277\220\345\212\250", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\351\225\234\345\244\264\351\253\230\345\272\246", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\351\225\234\345\244\264\345\235\220\346\240\207", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\205\211\346\272\220\344\272\256\345\272\246", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", " \350\247\206\350\247\211\350\260\203\350\257\225", nullptr));
        pushButton_AxInit->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226", nullptr));
        pushButton_AxPosReset->setText(QCoreApplication::translate("MainWindow", "\345\244\215\344\275\215", nullptr));
        pushButton_AxMov->setText(QCoreApplication::translate("MainWindow", "\347\247\273\345\212\250", nullptr));
        pushButton_AxStop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\237\272\347\241\200\345\217\202\346\225\260\350\256\276\345\256\232", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\234\200\345\244\247\347\247\273\345\212\250\351\200\237\345\272\246</p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\207\217\351\200\237\345\272\246</p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\256\236\351\231\205\344\275\215\347\275\256</p></body></html>", nullptr));
        label_AxActPos->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\350\275\264\347\212\266\346\200\201</p></body></html>", nullptr));
        label_AxState->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Ready</p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\350\277\220\345\212\250\346\233\262\347\272\277\347\261\273\345\236\213</p></body></html>", nullptr));
        comboBox_Curve->setItemText(0, QCoreApplication::translate("MainWindow", "T\345\236\213\346\233\262\347\272\277", nullptr));
        comboBox_Curve->setItemText(1, QCoreApplication::translate("MainWindow", "S\345\236\213\346\233\262\347\272\277", nullptr));

        comboBox_Curve->setCurrentText(QCoreApplication::translate("MainWindow", "T\345\236\213\346\233\262\347\272\277", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\234\200\345\260\217\347\247\273\345\212\250\351\200\237\345\272\246</p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\212\240\351\200\237\345\272\246</p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\347\220\206\350\256\272\344\275\215\347\275\256</p></body></html>", nullptr));
        label_AxCmdPos->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\350\267\235\347\246\273\350\256\276\345\256\232", nullptr));
        radioButton_AbsoluteDistance->setText(QCoreApplication::translate("MainWindow", "\347\273\235\345\257\271\344\275\215\347\247\273", nullptr));
        radioButton_RelativeDistance->setText(QCoreApplication::translate("MainWindow", "\347\233\270\345\257\271\344\275\215\347\247\273", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\347\233\256\346\240\207\344\275\215\347\275\256</p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\347\247\273\345\212\250\350\267\235\347\246\273</p></body></html>", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "X\350\275\264", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Y\350\275\264", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Z\350\275\264", nullptr));

        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", " \346\216\247\345\210\266\350\260\203\350\257\225", nullptr));
        m_DeleteBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\344\270\212\346\226\271\347\224\250\346\210\267\345\220\215\344\277\241\346\201\257", nullptr));
        m_ShowBtn->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\346\211\200\346\234\211\344\277\241\346\201\257", nullptr));
        m_NewPasswordLabel->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\257\206\347\240\201", nullptr));
        m_DeleteNameLabel->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        m_ChangeBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        m_ChangeNameLabel->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        m_DeleteAllBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\211\200\346\234\211\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", " \344\270\273\347\225\214\351\235\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", " \347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
