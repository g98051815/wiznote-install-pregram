/********************************************************************************
** Form generated from reading UI file 'WizUserCipherForm.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZUSERCIPHERFORM_H
#define UI_WIZUSERCIPHERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/WizImageButton.h"

QT_BEGIN_NAMESPACE

class Ui_WizUserCipherForm
{
public:
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPassword;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QLabel *labelHint;
    QLineEdit *editUserCipher;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    WizImageButton *buttonOk;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkSave;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *WizUserCipherForm)
    {
        if (WizUserCipherForm->objectName().isEmpty())
            WizUserCipherForm->setObjectName(QStringLiteral("WizUserCipherForm"));
        WizUserCipherForm->resize(370, 169);
        horizontalLayout_4 = new QHBoxLayout(WizUserCipherForm);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(23, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(14, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelPassword = new QLabel(WizUserCipherForm);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelPassword);

        horizontalSpacer_4 = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_2 = new QLabel(WizUserCipherForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral("color: #666666;"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        labelHint = new QLabel(WizUserCipherForm);
        labelHint->setObjectName(QStringLiteral("labelHint"));
        labelHint->setStyleSheet(QStringLiteral("color: #666666;"));
        labelHint->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelHint);


        verticalLayout->addLayout(horizontalLayout);

        editUserCipher = new QLineEdit(WizUserCipherForm);
        editUserCipher->setObjectName(QStringLiteral("editUserCipher"));

        verticalLayout->addWidget(editUserCipher);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, -1, -1, -1);
        verticalSpacer_3 = new QSpacerItem(10, 23, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_3);

        buttonOk = new WizImageButton(WizUserCipherForm);
        buttonOk->setObjectName(QStringLiteral("buttonOk"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonOk->sizePolicy().hasHeightForWidth());
        buttonOk->setSizePolicy(sizePolicy1);
        buttonOk->setMaximumSize(QSize(26, 26));

        verticalLayout_2->addWidget(buttonOk);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 4, -1, -1);
        checkSave = new QCheckBox(WizUserCipherForm);
        checkSave->setObjectName(QStringLiteral("checkSave"));

        horizontalLayout_3->addWidget(checkSave);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_3 = new QLabel(WizUserCipherForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        verticalSpacer_2 = new QSpacerItem(278, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(22, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        retranslateUi(WizUserCipherForm);

        QMetaObject::connectSlotsByName(WizUserCipherForm);
    } // setupUi

    void retranslateUi(QWidget *WizUserCipherForm)
    {
        WizUserCipherForm->setWindowTitle(QApplication::translate("WizUserCipherForm", "Password", 0));
        labelPassword->setText(QApplication::translate("WizUserCipherForm", "Password:", 0));
        label_2->setText(QApplication::translate("WizUserCipherForm", "Hint:", 0));
        labelHint->setText(QApplication::translate("WizUserCipherForm", "N/A", 0));
        buttonOk->setText(QString());
        checkSave->setText(QApplication::translate("WizUserCipherForm", "Remember for this session", 0));
        label_3->setText(QApplication::translate("WizUserCipherForm", "When the window is minimized or hidden, you need to re-enter the password.", 0));
    } // retranslateUi

};

namespace Ui {
    class WizUserCipherForm: public Ui_WizUserCipherForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZUSERCIPHERFORM_H
