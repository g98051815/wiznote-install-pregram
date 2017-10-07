/********************************************************************************
** Form generated from reading UI file 'WizUserServiceExprDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZUSERSERVICEEXPRDIALOG_H
#define UI_WIZUSERSERVICEEXPRDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_WizUserServiceExprDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelMessage;

    void setupUi(QDialog *WizUserServiceExprDialog)
    {
        if (WizUserServiceExprDialog->objectName().isEmpty())
            WizUserServiceExprDialog->setObjectName(QStringLiteral("WizUserServiceExprDialog"));
        WizUserServiceExprDialog->resize(400, 185);
        buttonBox = new QDialogButtonBox(WizUserServiceExprDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(15, 140, 371, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        labelMessage = new QLabel(WizUserServiceExprDialog);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setGeometry(QRect(20, 20, 361, 101));
        labelMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessage->setWordWrap(true);

        retranslateUi(WizUserServiceExprDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), WizUserServiceExprDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WizUserServiceExprDialog);
    } // setupUi

    void retranslateUi(QDialog *WizUserServiceExprDialog)
    {
        WizUserServiceExprDialog->setWindowTitle(QApplication::translate("WizUserServiceExprDialog", "Service expired", 0));
        labelMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WizUserServiceExprDialog: public Ui_WizUserServiceExprDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZUSERSERVICEEXPRDIALOG_H
