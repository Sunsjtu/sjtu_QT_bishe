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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *m_UsnLineEdit;
    QLabel *m_UsnLabel;
    QLabel *m_PwdLabel;
    QLineEdit *m_PwdLineEdit;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        buttonBox = new QDialogButtonBox(login);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        m_UsnLineEdit = new QLineEdit(login);
        m_UsnLineEdit->setObjectName(QString::fromUtf8("m_UsnLineEdit"));
        m_UsnLineEdit->setGeometry(QRect(130, 60, 231, 41));
        m_UsnLabel = new QLabel(login);
        m_UsnLabel->setObjectName(QString::fromUtf8("m_UsnLabel"));
        m_UsnLabel->setGeometry(QRect(60, 50, 61, 61));
        m_UsnLabel->setFrameShape(QFrame::NoFrame);
        m_PwdLabel = new QLabel(login);
        m_PwdLabel->setObjectName(QString::fromUtf8("m_PwdLabel"));
        m_PwdLabel->setGeometry(QRect(60, 120, 61, 61));
        m_PwdLineEdit = new QLineEdit(login);
        m_PwdLineEdit->setObjectName(QString::fromUtf8("m_PwdLineEdit"));
        m_PwdLineEdit->setGeometry(QRect(130, 130, 231, 41));
        m_PwdLineEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(login);
        QObject::connect(buttonBox, SIGNAL(accepted()), login, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), login, SLOT(reject()));

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        m_UsnLineEdit->setText(QString());
        m_UsnLabel->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        m_PwdLabel->setText(QCoreApplication::translate("login", " \345\257\206\347\240\201\357\274\232", nullptr));
        m_PwdLineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
