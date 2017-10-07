/********************************************************************************
** Form generated from reading UI file 'WizConsoleDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZCONSOLEDIALOG_H
#define UI_WIZCONSOLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizConsoleDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *editConsole;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonClear;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSaveAs;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnCopyToClipboard;

    void setupUi(QDialog *WizConsoleDialog)
    {
        if (WizConsoleDialog->objectName().isEmpty())
            WizConsoleDialog->setObjectName(QStringLiteral("WizConsoleDialog"));
        WizConsoleDialog->resize(657, 389);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WizConsoleDialog->sizePolicy().hasHeightForWidth());
        WizConsoleDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(WizConsoleDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(12, -1, -1, 0);
        editConsole = new QTextEdit(WizConsoleDialog);
        editConsole->setObjectName(QStringLiteral("editConsole"));
        editConsole->setStyleSheet(QStringLiteral(""));
        editConsole->setReadOnly(true);

        verticalLayout->addWidget(editConsole);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, 12);
        buttonClear = new QPushButton(WizConsoleDialog);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));
        buttonClear->setAutoDefault(false);
        buttonClear->setFlat(false);

        horizontalLayout_2->addWidget(buttonClear);

        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnSaveAs = new QPushButton(WizConsoleDialog);
        btnSaveAs->setObjectName(QStringLiteral("btnSaveAs"));
        btnSaveAs->setAutoDefault(false);

        horizontalLayout->addWidget(btnSaveAs);

        horizontalSpacer_2 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnCopyToClipboard = new QPushButton(WizConsoleDialog);
        btnCopyToClipboard->setObjectName(QStringLiteral("btnCopyToClipboard"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCopyToClipboard->sizePolicy().hasHeightForWidth());
        btnCopyToClipboard->setSizePolicy(sizePolicy1);
        btnCopyToClipboard->setAutoDefault(false);

        horizontalLayout->addWidget(btnCopyToClipboard);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(WizConsoleDialog);

        btnCopyToClipboard->setDefault(false);


        QMetaObject::connectSlotsByName(WizConsoleDialog);
    } // setupUi

    void retranslateUi(QDialog *WizConsoleDialog)
    {
        WizConsoleDialog->setWindowTitle(QApplication::translate("WizConsoleDialog", "Console", 0));
        buttonClear->setText(QApplication::translate("WizConsoleDialog", "Clear Log", 0));
        btnSaveAs->setText(QApplication::translate("WizConsoleDialog", "Save as..", 0));
        btnCopyToClipboard->setText(QApplication::translate("WizConsoleDialog", "Copy to clipboard", 0));
    } // retranslateUi

};

namespace Ui {
    class WizConsoleDialog: public Ui_WizConsoleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZCONSOLEDIALOG_H
