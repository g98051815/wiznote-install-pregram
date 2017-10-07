/********************************************************************************
** Form generated from reading UI file 'WizCrashReportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZCRASHREPORTDIALOG_H
#define UI_WIZCRASHREPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizCrashReportDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_details;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_no;
    QPushButton *btn_yes;

    void setupUi(QDialog *WizCrashReportDialog)
    {
        if (WizCrashReportDialog->objectName().isEmpty())
            WizCrashReportDialog->setObjectName(QStringLiteral("WizCrashReportDialog"));
        WizCrashReportDialog->resize(500, 100);
        WizCrashReportDialog->setMinimumSize(QSize(500, 0));
        verticalLayout_2 = new QVBoxLayout(WizCrashReportDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(WizCrashReportDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 34));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_details = new QPushButton(WizCrashReportDialog);
        btn_details->setObjectName(QStringLiteral("btn_details"));

        horizontalLayout->addWidget(btn_details);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_no = new QPushButton(WizCrashReportDialog);
        btn_no->setObjectName(QStringLiteral("btn_no"));

        horizontalLayout->addWidget(btn_no);

        btn_yes = new QPushButton(WizCrashReportDialog);
        btn_yes->setObjectName(QStringLiteral("btn_yes"));

        horizontalLayout->addWidget(btn_yes);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        QWidget::setTabOrder(btn_yes, btn_details);
        QWidget::setTabOrder(btn_details, btn_no);

        retranslateUi(WizCrashReportDialog);

        QMetaObject::connectSlotsByName(WizCrashReportDialog);
    } // setupUi

    void retranslateUi(QDialog *WizCrashReportDialog)
    {
        WizCrashReportDialog->setWindowTitle(QApplication::translate("WizCrashReportDialog", "Help improve WizNote", 0));
        label->setText(QApplication::translate("WizCrashReportDialog", "We found WizNote has crashed last time. Would you like to send us the crash report to help improve?", 0));
        btn_details->setText(QApplication::translate("WizCrashReportDialog", "Details...", 0));
        btn_no->setText(QApplication::translate("WizCrashReportDialog", "No", 0));
        btn_yes->setText(QApplication::translate("WizCrashReportDialog", "Yes", 0));
    } // retranslateUi

};

namespace Ui {
    class WizCrashReportDialog: public Ui_WizCrashReportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZCRASHREPORTDIALOG_H
