/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *m_UsnLabel;
    QLineEdit *m_UsnLineEdit;
    QLabel *m_PwdLabel;
    QLineEdit *m_PwdLineEdit;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(100, 10, 191, 171));
        label->setMaximumSize(QSize(191, 171));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/logo.png")));
        label->setScaledContents(true);
        label->setWordWrap(false);
        label->setOpenExternalLinks(false);
        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 190, 391, 101));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_UsnLabel = new QLabel(widget);
        m_UsnLabel->setObjectName(QString::fromUtf8("m_UsnLabel"));
        m_UsnLabel->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(m_UsnLabel, 0, 0, 1, 1);

        m_UsnLineEdit = new QLineEdit(widget);
        m_UsnLineEdit->setObjectName(QString::fromUtf8("m_UsnLineEdit"));

        gridLayout->addWidget(m_UsnLineEdit, 0, 1, 1, 3);

        m_PwdLabel = new QLabel(widget);
        m_PwdLabel->setObjectName(QString::fromUtf8("m_PwdLabel"));

        gridLayout->addWidget(m_PwdLabel, 1, 0, 1, 1);

        m_PwdLineEdit = new QLineEdit(widget);
        m_PwdLineEdit->setObjectName(QString::fromUtf8("m_PwdLineEdit"));
        m_PwdLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(m_PwdLineEdit, 1, 1, 1, 3);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 2, 0, 1, 2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 3, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label->setText(QString());
        m_UsnLabel->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        m_UsnLineEdit->setText(QString());
        m_PwdLabel->setText(QCoreApplication::translate("login", " \345\257\206\347\240\201\357\274\232", nullptr));
        m_PwdLineEdit->setText(QString());
        radioButton->setText(QCoreApplication::translate("login", "\347\256\241\347\220\206\345\221\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "\347\231\273\351\231\206", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
