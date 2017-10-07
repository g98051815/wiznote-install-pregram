/********************************************************************************
** Form generated from reading UI file 'WizInitBizCertDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZINITBIZCERTDIALOG_H
#define UI_WIZINITBIZCERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizInitBizCertDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *editAdminPassword;
    QLabel *label_2;
    QLineEdit *editUserPassword;
    QLabel *label_3;
    QLineEdit *editUserPassword2;
    QLabel *label_4;
    QLineEdit *editPasswordHint;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WizInitBizCertDialog)
    {
        if (WizInitBizCertDialog->objectName().isEmpty())
            WizInitBizCertDialog->setObjectName(QStringLiteral("WizInitBizCertDialog"));
        WizInitBizCertDialog->resize(400, 249);
        verticalLayout_2 = new QVBoxLayout(WizInitBizCertDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(WizInitBizCertDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_3->addWidget(label_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(WizInitBizCertDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        editAdminPassword = new QLineEdit(WizInitBizCertDialog);
        editAdminPassword->setObjectName(QStringLiteral("editAdminPassword"));
        editAdminPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, editAdminPassword);

        label_2 = new QLabel(WizInitBizCertDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        editUserPassword = new QLineEdit(WizInitBizCertDialog);
        editUserPassword->setObjectName(QStringLiteral("editUserPassword"));
        editUserPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, editUserPassword);

        label_3 = new QLabel(WizInitBizCertDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        editUserPassword2 = new QLineEdit(WizInitBizCertDialog);
        editUserPassword2->setObjectName(QStringLiteral("editUserPassword2"));
        editUserPassword2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, editUserPassword2);

        label_4 = new QLabel(WizInitBizCertDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        editPasswordHint = new QLineEdit(WizInitBizCertDialog);
        editPasswordHint->setObjectName(QStringLiteral("editPasswordHint"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editPasswordHint);


        verticalLayout_3->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout_3);

        buttonBox = new QDialogButtonBox(WizInitBizCertDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(WizInitBizCertDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WizInitBizCertDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WizInitBizCertDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WizInitBizCertDialog);
    } // setupUi

    void retranslateUi(QDialog *WizInitBizCertDialog)
    {
        WizInitBizCertDialog->setWindowTitle(QApplication::translate("WizInitBizCertDialog", "Init Cert", 0));
        label_5->setText(QApplication::translate("WizInitBizCertDialog", "This is a encrypted group, notes have been auto-encrypted. To read or create notes, please ask for the initial key to team administrator and set personal password.", 0));
        label->setText(QApplication::translate("WizInitBizCertDialog", "Encrypted group initial key:", 0));
        editAdminPassword->setInputMask(QString());
        label_2->setText(QApplication::translate("WizInitBizCertDialog", "Your own encrypted group password:", 0));
        editUserPassword->setInputMask(QString());
        label_3->setText(QApplication::translate("WizInitBizCertDialog", "Confirm your password:", 0));
        editUserPassword2->setInputMask(QString());
        label_4->setText(QApplication::translate("WizInitBizCertDialog", "Password hint:", 0));
        editPasswordHint->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class WizInitBizCertDialog: public Ui_WizInitBizCertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZINITBIZCERTDIALOG_H
