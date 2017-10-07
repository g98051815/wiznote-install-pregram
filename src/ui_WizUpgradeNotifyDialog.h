/********************************************************************************
** Form generated from reading UI file 'WizUpgradeNotifyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZUPGRADENOTIFYDIALOG_H
#define UI_WIZUPGRADENOTIFYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "QWebEngineView"

QT_BEGIN_NAMESPACE

class Ui_WizUpgradeNotifyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWebEngineView *webView;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonWait;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonNow;

    void setupUi(QDialog *WizUpgradeNotifyDialog)
    {
        if (WizUpgradeNotifyDialog->objectName().isEmpty())
            WizUpgradeNotifyDialog->setObjectName(QStringLiteral("WizUpgradeNotifyDialog"));
        WizUpgradeNotifyDialog->resize(464, 312);
        verticalLayout = new QVBoxLayout(WizUpgradeNotifyDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        webView = new QWebEngineView(WizUpgradeNotifyDialog);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout->addWidget(webView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonWait = new QPushButton(WizUpgradeNotifyDialog);
        buttonWait->setObjectName(QStringLiteral("buttonWait"));

        horizontalLayout->addWidget(buttonWait);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonNow = new QPushButton(WizUpgradeNotifyDialog);
        buttonNow->setObjectName(QStringLiteral("buttonNow"));

        horizontalLayout->addWidget(buttonNow);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(WizUpgradeNotifyDialog);

        QMetaObject::connectSlotsByName(WizUpgradeNotifyDialog);
    } // setupUi

    void retranslateUi(QDialog *WizUpgradeNotifyDialog)
    {
        WizUpgradeNotifyDialog->setWindowTitle(QApplication::translate("WizUpgradeNotifyDialog", "Find new version", 0));
        buttonWait->setText(QApplication::translate("WizUpgradeNotifyDialog", "Next time", 0));
        buttonNow->setText(QApplication::translate("WizUpgradeNotifyDialog", "Upgrade now", 0));
    } // retranslateUi

};

namespace Ui {
    class WizUpgradeNotifyDialog: public Ui_WizUpgradeNotifyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZUPGRADENOTIFYDIALOG_H
