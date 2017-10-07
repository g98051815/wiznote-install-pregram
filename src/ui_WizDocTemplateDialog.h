/********************************************************************************
** Form generated from reading UI file 'WizDocTemplateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZDOCTEMPLATEDIALOG_H
#define UI_WIZDOCTEMPLATEDIALOG_H

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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "QWebEngineView"

QT_BEGIN_NAMESPACE

class Ui_WizDocTemplateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidget;
    QWebEngineView *webView_preview;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cancel;
    QPushButton *btn_ok;

    void setupUi(QDialog *WizDocTemplateDialog)
    {
        if (WizDocTemplateDialog->objectName().isEmpty())
            WizDocTemplateDialog->setObjectName(QStringLiteral("WizDocTemplateDialog"));
        WizDocTemplateDialog->resize(860, 607);
        verticalLayout = new QVBoxLayout(WizDocTemplateDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(8, -1, 8, -1);
        treeWidget = new QTreeWidget(WizDocTemplateDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(300, 0));
        treeWidget->header()->setVisible(false);

        horizontalLayout_2->addWidget(treeWidget);

        webView_preview = new QWebEngineView(WizDocTemplateDialog);
        webView_preview->setObjectName(QStringLiteral("webView_preview"));
        webView_preview->setProperty("url", QVariant(QUrl(QStringLiteral("about:blank"))));

        horizontalLayout_2->addWidget(webView_preview);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(8, -1, 8, -1);
        label = new QLabel(WizDocTemplateDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_cancel = new QPushButton(WizDocTemplateDialog);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);

        btn_ok = new QPushButton(WizDocTemplateDialog);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(btn_ok, btn_cancel);
        QWidget::setTabOrder(btn_cancel, treeWidget);
        QWidget::setTabOrder(treeWidget, webView_preview);

        retranslateUi(WizDocTemplateDialog);

        QMetaObject::connectSlotsByName(WizDocTemplateDialog);
    } // setupUi

    void retranslateUi(QDialog *WizDocTemplateDialog)
    {
        WizDocTemplateDialog->setWindowTitle(QApplication::translate("WizDocTemplateDialog", "Document Template", 0));
        label->setText(QApplication::translate("WizDocTemplateDialog", "* Recommended templates updating... Upgrade to VIP, all templates can be used.", 0));
        btn_cancel->setText(QApplication::translate("WizDocTemplateDialog", "Cancel", 0));
        btn_ok->setText(QApplication::translate("WizDocTemplateDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class WizDocTemplateDialog: public Ui_WizDocTemplateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZDOCTEMPLATEDIALOG_H
