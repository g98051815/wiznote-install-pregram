/********************************************************************************
** Form generated from reading UI file 'WizLoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZLOGINDIALOG_H
#define UI_WIZLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "share/WizUI.h"

QT_BEGIN_NAMESPACE

class Ui_wizLoginWidget
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *layout_titleBar;
    QWidget *widget_titleBar;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_close;
    QToolButton *btn_max;
    QToolButton *btn_min;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_selectServer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_logo;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_placehold;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    WizIconLineEditContainer *wgt_usercontainer;
    WizIconLineEditContainer *wgt_passwordcontainer;
    WizIconLineEditContainer *wgt_serveroptioncontainer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbx_remberPassword;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *cbx_autologin;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    WizStyleButton *btn_login;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    WizIconLineEditContainer *wgt_newUser;
    WizIconLineEditContainer *wgt_newPassword;
    WizIconLineEditContainer *wgt_passwordRepeat;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    WizStyleButton *btn_singUp;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_passwordError;
    QLabel *label_separator2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_noaccount;
    QPushButton *btn_changeToSignin;
    QPushButton *btn_changeToLogin;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btn_snsLogin;
    QLabel *label_separator3;
    QPushButton *btn_fogetpass;
    QLabel *label_separator4;
    QPushButton *btn_proxysetting;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *wizLoginWidget)
    {
        if (wizLoginWidget->objectName().isEmpty())
            wizLoginWidget->setObjectName(QStringLiteral("wizLoginWidget"));
        verticalLayout_7 = new QVBoxLayout(wizLoginWidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        layout_titleBar = new QHBoxLayout();
        layout_titleBar->setObjectName(QStringLiteral("layout_titleBar"));
        widget_titleBar = new QWidget(wizLoginWidget);
        widget_titleBar->setObjectName(QStringLiteral("widget_titleBar"));
        widget_titleBar->setMinimumSize(QSize(0, 0));
        widget_titleBar->setAutoFillBackground(false);
        widget_titleBar->setStyleSheet(QStringLiteral("background-color:#448aff"));
        horizontalLayout_7 = new QHBoxLayout(widget_titleBar);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, -1, -1);
        btn_close = new QToolButton(widget_titleBar);
        btn_close->setObjectName(QStringLiteral("btn_close"));

        horizontalLayout->addWidget(btn_close);

        btn_max = new QToolButton(widget_titleBar);
        btn_max->setObjectName(QStringLiteral("btn_max"));

        horizontalLayout->addWidget(btn_max);

        btn_min = new QToolButton(widget_titleBar);
        btn_min->setObjectName(QStringLiteral("btn_min"));

        horizontalLayout->addWidget(btn_min);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_selectServer = new QPushButton(widget_titleBar);
        btn_selectServer->setObjectName(QStringLiteral("btn_selectServer"));

        horizontalLayout->addWidget(btn_selectServer);


        horizontalLayout_7->addLayout(horizontalLayout);


        layout_titleBar->addWidget(widget_titleBar);


        verticalLayout_7->addLayout(layout_titleBar);

        widget = new QWidget(wizLoginWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: #448aff;"));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_7 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        label_logo = new QLabel(widget);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setMinimumSize(QSize(0, 90));
        label_logo->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(label_logo);

        horizontalSpacer_12 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);


        horizontalLayout_8->addLayout(horizontalLayout_10);


        verticalLayout_7->addWidget(widget);

        label_placehold = new QLabel(wizLoginWidget);
        label_placehold->setObjectName(QStringLiteral("label_placehold"));
        label_placehold->setMinimumSize(QSize(0, 20));

        verticalLayout_7->addWidget(label_placehold);

        stackedWidget = new QStackedWidget(wizLoginWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 25, 0, 10);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        wgt_usercontainer = new WizIconLineEditContainer(page);
        wgt_usercontainer->setObjectName(QStringLiteral("wgt_usercontainer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wgt_usercontainer->sizePolicy().hasHeightForWidth());
        wgt_usercontainer->setSizePolicy(sizePolicy);
        wgt_usercontainer->setMinimumSize(QSize(0, 15));

        verticalLayout->addWidget(wgt_usercontainer);

        wgt_passwordcontainer = new WizIconLineEditContainer(page);
        wgt_passwordcontainer->setObjectName(QStringLiteral("wgt_passwordcontainer"));
        sizePolicy.setHeightForWidth(wgt_passwordcontainer->sizePolicy().hasHeightForWidth());
        wgt_passwordcontainer->setSizePolicy(sizePolicy);
        wgt_passwordcontainer->setMinimumSize(QSize(0, 15));

        verticalLayout->addWidget(wgt_passwordcontainer);

        wgt_serveroptioncontainer = new WizIconLineEditContainer(page);
        wgt_serveroptioncontainer->setObjectName(QStringLiteral("wgt_serveroptioncontainer"));
        wgt_serveroptioncontainer->setMinimumSize(QSize(0, 15));

        verticalLayout->addWidget(wgt_serveroptioncontainer);

        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cbx_remberPassword = new QCheckBox(page);
        cbx_remberPassword->setObjectName(QStringLiteral("cbx_remberPassword"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbx_remberPassword->sizePolicy().hasHeightForWidth());
        cbx_remberPassword->setSizePolicy(sizePolicy1);
        cbx_remberPassword->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(cbx_remberPassword);

        horizontalSpacer_6 = new QSpacerItem(30, 33, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        cbx_autologin = new QCheckBox(page);
        cbx_autologin->setObjectName(QStringLiteral("cbx_autologin"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbx_autologin->sizePolicy().hasHeightForWidth());
        cbx_autologin->setSizePolicy(sizePolicy2);
        cbx_autologin->setMaximumSize(QSize(16777215, 42));

        horizontalLayout_2->addWidget(cbx_autologin);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_login = new WizStyleButton(page);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy3);
        btn_login->setMinimumSize(QSize(280, 0));
        btn_login->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(btn_login);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_9->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 25, 0, 10);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        wgt_newUser = new WizIconLineEditContainer(page_2);
        wgt_newUser->setObjectName(QStringLiteral("wgt_newUser"));
        wgt_newUser->setMinimumSize(QSize(0, 15));

        verticalLayout_5->addWidget(wgt_newUser);

        wgt_newPassword = new WizIconLineEditContainer(page_2);
        wgt_newPassword->setObjectName(QStringLiteral("wgt_newPassword"));
        wgt_newPassword->setMinimumSize(QSize(0, 15));

        verticalLayout_5->addWidget(wgt_newPassword);

        wgt_passwordRepeat = new WizIconLineEditContainer(page_2);
        wgt_passwordRepeat->setObjectName(QStringLiteral("wgt_passwordRepeat"));
        wgt_passwordRepeat->setMinimumSize(QSize(0, 15));

        verticalLayout_5->addWidget(wgt_passwordRepeat);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        btn_singUp = new WizStyleButton(page_2);
        btn_singUp->setObjectName(QStringLiteral("btn_singUp"));
        sizePolicy3.setHeightForWidth(btn_singUp->sizePolicy().hasHeightForWidth());
        btn_singUp->setSizePolicy(sizePolicy3);
        btn_singUp->setMinimumSize(QSize(280, 0));

        verticalLayout_4->addWidget(btn_singUp);


        verticalLayout_6->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(verticalLayout_6);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_8->addLayout(horizontalLayout_4);

        stackedWidget->addWidget(page_2);

        verticalLayout_7->addWidget(stackedWidget);

        label_passwordError = new QLabel(wizLoginWidget);
        label_passwordError->setObjectName(QStringLiteral("label_passwordError"));
        label_passwordError->setMinimumSize(QSize(0, 20));
        label_passwordError->setWordWrap(true);

        verticalLayout_7->addWidget(label_passwordError);

        label_separator2 = new QLabel(wizLoginWidget);
        label_separator2->setObjectName(QStringLiteral("label_separator2"));
        label_separator2->setMinimumSize(QSize(0, 25));
        label_separator2->setMaximumSize(QSize(16777215, 25));

        verticalLayout_7->addWidget(label_separator2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 10, -1, 15);
        horizontalSpacer_10 = new QSpacerItem(10, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        label_noaccount = new QLabel(wizLoginWidget);
        label_noaccount->setObjectName(QStringLiteral("label_noaccount"));
        sizePolicy1.setHeightForWidth(label_noaccount->sizePolicy().hasHeightForWidth());
        label_noaccount->setSizePolicy(sizePolicy1);
        label_noaccount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_noaccount);

        btn_changeToSignin = new QPushButton(wizLoginWidget);
        btn_changeToSignin->setObjectName(QStringLiteral("btn_changeToSignin"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btn_changeToSignin->sizePolicy().hasHeightForWidth());
        btn_changeToSignin->setSizePolicy(sizePolicy4);
        btn_changeToSignin->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(btn_changeToSignin);

        btn_changeToLogin = new QPushButton(wizLoginWidget);
        btn_changeToLogin->setObjectName(QStringLiteral("btn_changeToLogin"));
        sizePolicy4.setHeightForWidth(btn_changeToLogin->sizePolicy().hasHeightForWidth());
        btn_changeToLogin->setSizePolicy(sizePolicy4);
        btn_changeToLogin->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(btn_changeToLogin);

        horizontalSpacer_11 = new QSpacerItem(10, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 15, -1, 20);
        horizontalSpacer_9 = new QSpacerItem(10, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        btn_snsLogin = new QPushButton(wizLoginWidget);
        btn_snsLogin->setObjectName(QStringLiteral("btn_snsLogin"));
        btn_snsLogin->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(btn_snsLogin);

        label_separator3 = new QLabel(wizLoginWidget);
        label_separator3->setObjectName(QStringLiteral("label_separator3"));

        horizontalLayout_6->addWidget(label_separator3);

        btn_fogetpass = new QPushButton(wizLoginWidget);
        btn_fogetpass->setObjectName(QStringLiteral("btn_fogetpass"));
        sizePolicy4.setHeightForWidth(btn_fogetpass->sizePolicy().hasHeightForWidth());
        btn_fogetpass->setSizePolicy(sizePolicy4);
        btn_fogetpass->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(btn_fogetpass);

        label_separator4 = new QLabel(wizLoginWidget);
        label_separator4->setObjectName(QStringLiteral("label_separator4"));

        horizontalLayout_6->addWidget(label_separator4);

        btn_proxysetting = new QPushButton(wizLoginWidget);
        btn_proxysetting->setObjectName(QStringLiteral("btn_proxysetting"));
        sizePolicy4.setHeightForWidth(btn_proxysetting->sizePolicy().hasHeightForWidth());
        btn_proxysetting->setSizePolicy(sizePolicy4);
        btn_proxysetting->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(btn_proxysetting);

        horizontalSpacer_8 = new QSpacerItem(10, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout_7->addLayout(horizontalLayout_6);

        QWidget::setTabOrder(btn_close, cbx_remberPassword);
        QWidget::setTabOrder(cbx_remberPassword, cbx_autologin);
        QWidget::setTabOrder(cbx_autologin, btn_login);
        QWidget::setTabOrder(btn_login, btn_singUp);
        QWidget::setTabOrder(btn_singUp, btn_changeToSignin);
        QWidget::setTabOrder(btn_changeToSignin, btn_changeToLogin);
        QWidget::setTabOrder(btn_changeToLogin, btn_fogetpass);
        QWidget::setTabOrder(btn_fogetpass, btn_max);
        QWidget::setTabOrder(btn_max, btn_min);

        retranslateUi(wizLoginWidget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(wizLoginWidget);
    } // setupUi

    void retranslateUi(QWidget *wizLoginWidget)
    {
        wizLoginWidget->setWindowTitle(QApplication::translate("wizLoginWidget", "Form", 0));
        btn_close->setText(QString());
        btn_max->setText(QString());
        btn_min->setText(QString());
        btn_selectServer->setText(QApplication::translate("wizLoginWidget", "Switch Server", 0));
        label_logo->setText(QString());
        label_placehold->setText(QString());
        cbx_remberPassword->setText(QApplication::translate("wizLoginWidget", "Remember password", 0));
        cbx_autologin->setText(QApplication::translate("wizLoginWidget", "Auto sign in", 0));
        btn_login->setText(QApplication::translate("wizLoginWidget", "Login", 0));
        btn_singUp->setText(QApplication::translate("wizLoginWidget", "Create Account", 0));
        label_passwordError->setText(QApplication::translate("wizLoginWidget", "!! password error", 0));
        label_separator2->setText(QString());
        label_noaccount->setText(QApplication::translate("wizLoginWidget", "No account yet,", 0));
        btn_changeToSignin->setText(QApplication::translate("wizLoginWidget", "click to sign up", 0));
        btn_changeToLogin->setText(QApplication::translate("wizLoginWidget", "click to login", 0));
        btn_snsLogin->setText(QApplication::translate("wizLoginWidget", "Thirdparty", 0));
        label_separator3->setText(QString());
        btn_fogetpass->setText(QApplication::translate("wizLoginWidget", "Reset password", 0));
        label_separator4->setText(QString());
        btn_proxysetting->setText(QApplication::translate("wizLoginWidget", "Proxy settings", 0));
    } // retranslateUi

};

namespace Ui {
    class wizLoginWidget: public Ui_wizLoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZLOGINDIALOG_H
