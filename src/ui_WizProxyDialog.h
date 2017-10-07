/********************************************************************************
** Form generated from reading UI file 'WizProxyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZPROXYDIALOG_H
#define UI_WIZPROXYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizProxyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkProxyStatus;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *editAddress;
    QLabel *label_2;
    QLineEdit *editPort;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLineEdit *editPassword;
    QLineEdit *editUserName;
    QLabel *label_4;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WizProxyDialog)
    {
        if (WizProxyDialog->objectName().isEmpty())
            WizProxyDialog->setObjectName(QStringLiteral("WizProxyDialog"));
        WizProxyDialog->resize(350, 299);
        verticalLayout = new QVBoxLayout(WizProxyDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkProxyStatus = new QCheckBox(WizProxyDialog);
        checkProxyStatus->setObjectName(QStringLiteral("checkProxyStatus"));

        verticalLayout->addWidget(checkProxyStatus);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 10);
        label_5 = new QLabel(WizProxyDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        comboBox = new QComboBox(WizProxyDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label = new QLabel(WizProxyDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        editAddress = new QLineEdit(WizProxyDialog);
        editAddress->setObjectName(QStringLiteral("editAddress"));

        gridLayout->addWidget(editAddress, 1, 1, 1, 1);

        label_2 = new QLabel(WizProxyDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        editPort = new QLineEdit(WizProxyDialog);
        editPort->setObjectName(QStringLiteral("editPort"));

        gridLayout->addWidget(editPort, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        groupBox = new QGroupBox(WizProxyDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, -1, 5, -1);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(25);
        gridLayout_2->setContentsMargins(-1, -1, 0, -1);
        editPassword = new QLineEdit(groupBox);
        editPassword->setObjectName(QStringLiteral("editPassword"));

        gridLayout_2->addWidget(editPassword, 1, 1, 1, 1);

        editUserName = new QLineEdit(groupBox);
        editUserName->setObjectName(QStringLiteral("editUserName"));

        gridLayout_2->addWidget(editUserName, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(WizProxyDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(editAddress);
        label_2->setBuddy(editPort);
        label_4->setBuddy(editPassword);
        label_3->setBuddy(editUserName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editAddress, editPort);
        QWidget::setTabOrder(editPort, editUserName);
        QWidget::setTabOrder(editUserName, editPassword);
        QWidget::setTabOrder(editPassword, buttonBox);

        retranslateUi(WizProxyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WizProxyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WizProxyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WizProxyDialog);
    } // setupUi

    void retranslateUi(QDialog *WizProxyDialog)
    {
        WizProxyDialog->setWindowTitle(QApplication::translate("WizProxyDialog", "Proxy settings", 0));
        checkProxyStatus->setText(QApplication::translate("WizProxyDialog", "Enable Proxy", 0));
        label_5->setText(QApplication::translate("WizProxyDialog", "Proxy Type:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("WizProxyDialog", "NoProxy", 0)
         << QApplication::translate("WizProxyDialog", "HttpProxy", 0)
         << QApplication::translate("WizProxyDialog", "Socks5Proxy", 0)
        );
        label->setText(QApplication::translate("WizProxyDialog", "Address:", 0));
        label_2->setText(QApplication::translate("WizProxyDialog", "Port: ", 0));
        groupBox->setTitle(QApplication::translate("WizProxyDialog", "Authentication (If required)", 0));
        label_4->setText(QApplication::translate("WizProxyDialog", "Password:", 0));
        label_3->setText(QApplication::translate("WizProxyDialog", "User Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class WizProxyDialog: public Ui_WizProxyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZPROXYDIALOG_H
