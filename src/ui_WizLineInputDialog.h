/********************************************************************************
** Form generated from reading UI file 'WizLineInputDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZLINEINPUTDIALOG_H
#define UI_WIZLINEINPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizLineInputDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelHint;
    QLineEdit *editInput;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WizLineInputDialog)
    {
        if (WizLineInputDialog->objectName().isEmpty())
            WizLineInputDialog->setObjectName(QStringLiteral("WizLineInputDialog"));
        WizLineInputDialog->resize(326, 136);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WizLineInputDialog->sizePolicy().hasHeightForWidth());
        WizLineInputDialog->setSizePolicy(sizePolicy);
        WizLineInputDialog->setWindowTitle(QStringLiteral("Input"));
        verticalLayout = new QVBoxLayout(WizLineInputDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelHint = new QLabel(WizLineInputDialog);
        labelHint->setObjectName(QStringLiteral("labelHint"));
        labelHint->setText(QStringLiteral("Hint:"));
        labelHint->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelHint->setWordWrap(true);

        verticalLayout->addWidget(labelHint);

        editInput = new QLineEdit(WizLineInputDialog);
        editInput->setObjectName(QStringLiteral("editInput"));

        verticalLayout->addWidget(editInput);

        buttonBox = new QDialogButtonBox(WizLineInputDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelHint->setBuddy(editInput);
#endif // QT_NO_SHORTCUT

        retranslateUi(WizLineInputDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WizLineInputDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WizLineInputDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WizLineInputDialog);
    } // setupUi

    void retranslateUi(QDialog *WizLineInputDialog)
    {
        Q_UNUSED(WizLineInputDialog);
    } // retranslateUi

};

namespace Ui {
    class WizLineInputDialog: public Ui_WizLineInputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZLINEINPUTDIALOG_H
