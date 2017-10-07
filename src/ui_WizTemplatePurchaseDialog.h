/********************************************************************************
** Form generated from reading UI file 'WizTemplatePurchaseDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZTEMPLATEPURCHASEDIALOG_H
#define UI_WIZTEMPLATEPURCHASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WizTemplatePurchaseDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_tmplThumb;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_tmplName;
    QLabel *label_4;
    QLabel *label_tmplPrice;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_cancel;
    QPushButton *btn_purchase;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_status;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_quit;

    void setupUi(QDialog *WizTemplatePurchaseDialog)
    {
        if (WizTemplatePurchaseDialog->objectName().isEmpty())
            WizTemplatePurchaseDialog->setObjectName(QStringLiteral("WizTemplatePurchaseDialog"));
        WizTemplatePurchaseDialog->resize(324, 278);
        verticalLayout_2 = new QVBoxLayout(WizTemplatePurchaseDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(WizTemplatePurchaseDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_tmplThumb = new QLabel(page);
        label_tmplThumb->setObjectName(QStringLiteral("label_tmplThumb"));
        label_tmplThumb->setMinimumSize(QSize(140, 200));
        label_tmplThumb->setMaximumSize(QSize(140, 200));

        horizontalLayout_2->addWidget(label_tmplThumb);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_tmplName = new QLabel(page);
        label_tmplName->setObjectName(QStringLiteral("label_tmplName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_tmplName);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_tmplPrice = new QLabel(page);
        label_tmplPrice->setObjectName(QStringLiteral("label_tmplPrice"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_tmplPrice);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_cancel = new QPushButton(page);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);

        btn_purchase = new QPushButton(page);
        btn_purchase->setObjectName(QStringLiteral("btn_purchase"));

        horizontalLayout->addWidget(btn_purchase);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_status = new QLabel(page_2);
        label_status->setObjectName(QStringLiteral("label_status"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_status->sizePolicy().hasHeightForWidth());
        label_status->setSizePolicy(sizePolicy);
        label_status->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_status);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        btn_quit = new QPushButton(page_2);
        btn_quit->setObjectName(QStringLiteral("btn_quit"));

        horizontalLayout_3->addWidget(btn_quit);


        verticalLayout_4->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);

        QWidget::setTabOrder(btn_purchase, btn_cancel);

        retranslateUi(WizTemplatePurchaseDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WizTemplatePurchaseDialog);
    } // setupUi

    void retranslateUi(QDialog *WizTemplatePurchaseDialog)
    {
        WizTemplatePurchaseDialog->setWindowTitle(QApplication::translate("WizTemplatePurchaseDialog", "Dialog", 0));
        label_tmplThumb->setText(QApplication::translate("WizTemplatePurchaseDialog", "TextLabel", 0));
        label_2->setText(QApplication::translate("WizTemplatePurchaseDialog", "Name:", 0));
        label_tmplName->setText(QApplication::translate("WizTemplatePurchaseDialog", "name", 0));
        label_4->setText(QApplication::translate("WizTemplatePurchaseDialog", "Price:", 0));
        label_tmplPrice->setText(QApplication::translate("WizTemplatePurchaseDialog", "???", 0));
        btn_cancel->setText(QApplication::translate("WizTemplatePurchaseDialog", "Cancel", 0));
        btn_purchase->setText(QApplication::translate("WizTemplatePurchaseDialog", "Purchase", 0));
        label_status->setText(QApplication::translate("WizTemplatePurchaseDialog", "Connecting to AppStore...", 0));
        btn_quit->setText(QApplication::translate("WizTemplatePurchaseDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class WizTemplatePurchaseDialog: public Ui_WizTemplatePurchaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZTEMPLATEPURCHASEDIALOG_H
