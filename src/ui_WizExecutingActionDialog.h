/********************************************************************************
** Form generated from reading UI file 'WizExecutingActionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZEXECUTINGACTIONDIALOG_H
#define UI_WIZEXECUTINGACTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizExecutingActionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *movie;
    QLabel *actionDescription;

    void setupUi(QDialog *WizExecutingActionDialog)
    {
        if (WizExecutingActionDialog->objectName().isEmpty())
            WizExecutingActionDialog->setObjectName(QStringLiteral("WizExecutingActionDialog"));
        WizExecutingActionDialog->resize(180, 150);
        WizExecutingActionDialog->setWindowOpacity(0.8);
        WizExecutingActionDialog->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(WizExecutingActionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        movie = new QLabel(WizExecutingActionDialog);
        movie->setObjectName(QStringLiteral("movie"));
        movie->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(movie);

        actionDescription = new QLabel(WizExecutingActionDialog);
        actionDescription->setObjectName(QStringLiteral("actionDescription"));
        actionDescription->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(actionDescription);


        retranslateUi(WizExecutingActionDialog);

        QMetaObject::connectSlotsByName(WizExecutingActionDialog);
    } // setupUi

    void retranslateUi(QDialog *WizExecutingActionDialog)
    {
        WizExecutingActionDialog->setWindowTitle(QString());
        movie->setText(QString());
        actionDescription->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WizExecutingActionDialog: public Ui_WizExecutingActionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZEXECUTINGACTIONDIALOG_H
