/********************************************************************************
** Form generated from reading UI file 'WizVerificationCodeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZVERIFICATIONCODEDIALOG_H
#define UI_WIZVERIFICATIONCODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/WizImageButton.h"

QT_BEGIN_NAMESPACE

class Ui_WizVerificationCodeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    WizImageButton *btn_image;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *btn_OK;

    void setupUi(QDialog *WizVerificationCodeDialog)
    {
        if (WizVerificationCodeDialog->objectName().isEmpty())
            WizVerificationCodeDialog->setObjectName(QStringLiteral("WizVerificationCodeDialog"));
        WizVerificationCodeDialog->resize(264, 119);
        verticalLayout = new QVBoxLayout(WizVerificationCodeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_image = new WizImageButton(WizVerificationCodeDialog);
        btn_image->setObjectName(QStringLiteral("btn_image"));
        btn_image->setMinimumSize(QSize(100, 40));
        btn_image->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(btn_image);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        lineEdit = new QLineEdit(WizVerificationCodeDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        btn_OK = new QPushButton(WizVerificationCodeDialog);
        btn_OK->setObjectName(QStringLiteral("btn_OK"));

        horizontalLayout->addWidget(btn_OK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(WizVerificationCodeDialog);

        QMetaObject::connectSlotsByName(WizVerificationCodeDialog);
    } // setupUi

    void retranslateUi(QDialog *WizVerificationCodeDialog)
    {
        WizVerificationCodeDialog->setWindowTitle(QApplication::translate("WizVerificationCodeDialog", "Input Verification Code", 0));
        btn_image->setText(QApplication::translate("WizVerificationCodeDialog", "PushButton", 0));
        btn_OK->setText(QApplication::translate("WizVerificationCodeDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class WizVerificationCodeDialog: public Ui_WizVerificationCodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZVERIFICATIONCODEDIALOG_H
