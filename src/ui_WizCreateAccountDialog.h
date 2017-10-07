/********************************************************************************
** Form generated from reading UI file 'WizCreateAccountDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZCREATEACCOUNTDIALOG_H
#define UI_WIZCREATEACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_WizCreateAccountDialog
{
public:
    QLabel *label;
    QLineEdit *editUserId;
    QLabel *label_2;
    QLineEdit *editPassword;
    QLineEdit *editPassword2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WizCreateAccountDialog)
    {
        if (WizCreateAccountDialog->objectName().isEmpty())
            WizCreateAccountDialog->setObjectName(QStringLiteral("WizCreateAccountDialog"));
        WizCreateAccountDialog->resize(400, 185);
        label = new QLabel(WizCreateAccountDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 22, 131, 20));
        editUserId = new QLineEdit(WizCreateAccountDialog);
        editUserId->setObjectName(QStringLiteral("editUserId"));
        editUserId->setGeometry(QRect(170, 20, 211, 20));
        label_2 = new QLabel(WizCreateAccountDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 131, 21));
        editPassword = new QLineEdit(WizCreateAccountDialog);
        editPassword->setObjectName(QStringLiteral("editPassword"));
        editPassword->setGeometry(QRect(170, 60, 211, 20));
        editPassword->setEchoMode(QLineEdit::Password);
        editPassword2 = new QLineEdit(WizCreateAccountDialog);
        editPassword2->setObjectName(QStringLiteral("editPassword2"));
        editPassword2->setGeometry(QRect(170, 100, 211, 20));
        editPassword2->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(WizCreateAccountDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 131, 21));
        buttonBox = new QDialogButtonBox(WizCreateAccountDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(45, 140, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(editUserId);
        label_2->setBuddy(editPassword);
        label_3->setBuddy(editPassword2);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editUserId, editPassword);
        QWidget::setTabOrder(editPassword, editPassword2);
        QWidget::setTabOrder(editPassword2, buttonBox);

        retranslateUi(WizCreateAccountDialog);

        QMetaObject::connectSlotsByName(WizCreateAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *WizCreateAccountDialog)
    {
        WizCreateAccountDialog->setWindowTitle(QApplication::translate("WizCreateAccountDialog", "Create Account", 0));
        label->setText(QApplication::translate("WizCreateAccountDialog", "User ID (Email):", 0));
        label_2->setText(QApplication::translate("WizCreateAccountDialog", "Password:", 0));
        label_3->setText(QApplication::translate("WizCreateAccountDialog", "Confirm Password:", 0));
    } // retranslateUi

};

namespace Ui {
    class WizCreateAccountDialog: public Ui_WizCreateAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZCREATEACCOUNTDIALOG_H
