/********************************************************************************
** Form generated from reading UI file 'WizProgressDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZPROGRESSDIALOG_H
#define UI_WIZPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizProgressDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAction;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_stop;
    QPushButton *btn_hide;

    void setupUi(QDialog *WizProgressDialog)
    {
        if (WizProgressDialog->objectName().isEmpty())
            WizProgressDialog->setObjectName(QStringLiteral("WizProgressDialog"));
        WizProgressDialog->resize(507, 110);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WizProgressDialog->sizePolicy().hasHeightForWidth());
        WizProgressDialog->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(WizProgressDialog);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        progressBar = new QProgressBar(WizProgressDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelAction = new QLabel(WizProgressDialog);
        labelAction->setObjectName(QStringLiteral("labelAction"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelAction->sizePolicy().hasHeightForWidth());
        labelAction->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(labelAction);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        btn_stop = new QPushButton(WizProgressDialog);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));

        verticalLayout_2->addWidget(btn_stop);

        btn_hide = new QPushButton(WizProgressDialog);
        btn_hide->setObjectName(QStringLiteral("btn_hide"));

        verticalLayout_2->addWidget(btn_hide);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_2);


        retranslateUi(WizProgressDialog);

        QMetaObject::connectSlotsByName(WizProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *WizProgressDialog)
    {
        WizProgressDialog->setWindowTitle(QApplication::translate("WizProgressDialog", "Processing progress", 0));
        labelAction->setText(QString());
        btn_stop->setText(QApplication::translate("WizProgressDialog", "Stop", 0));
        btn_hide->setText(QApplication::translate("WizProgressDialog", "Hide", 0));
    } // retranslateUi

};

namespace Ui {
    class WizProgressDialog: public Ui_WizProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZPROGRESSDIALOG_H
