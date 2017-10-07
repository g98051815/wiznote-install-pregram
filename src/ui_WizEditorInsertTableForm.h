/********************************************************************************
** Form generated from reading UI file 'WizEditorInsertTableForm.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZEDITORINSERTTABLEFORM_H
#define UI_WIZEDITORINSERTTABLEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizEditorInsertTableForm
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelRows;
    QLineEdit *editRows;
    QLabel *labelCols;
    QLineEdit *editCols;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *WizEditorInsertTableForm)
    {
        if (WizEditorInsertTableForm->objectName().isEmpty())
            WizEditorInsertTableForm->setObjectName(QStringLiteral("WizEditorInsertTableForm"));
        WizEditorInsertTableForm->resize(318, 122);
        verticalLayout = new QVBoxLayout(WizEditorInsertTableForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelRows = new QLabel(WizEditorInsertTableForm);
        labelRows->setObjectName(QStringLiteral("labelRows"));
        labelRows->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelRows, 0, 0, 1, 1);

        editRows = new QLineEdit(WizEditorInsertTableForm);
        editRows->setObjectName(QStringLiteral("editRows"));
        editRows->setMinimumSize(QSize(0, 22));

        gridLayout->addWidget(editRows, 0, 1, 1, 1);

        labelCols = new QLabel(WizEditorInsertTableForm);
        labelCols->setObjectName(QStringLiteral("labelCols"));
        labelCols->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCols, 1, 0, 1, 1);

        editCols = new QLineEdit(WizEditorInsertTableForm);
        editCols->setObjectName(QStringLiteral("editCols"));
        editCols->setMinimumSize(QSize(0, 22));

        gridLayout->addWidget(editCols, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(WizEditorInsertTableForm);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);

        pushButton_ok = new QPushButton(WizEditorInsertTableForm);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        horizontalLayout->addWidget(pushButton_ok);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(editRows, editCols);
        QWidget::setTabOrder(editCols, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_cancel);

        retranslateUi(WizEditorInsertTableForm);

        QMetaObject::connectSlotsByName(WizEditorInsertTableForm);
    } // setupUi

    void retranslateUi(QDialog *WizEditorInsertTableForm)
    {
        WizEditorInsertTableForm->setWindowTitle(QApplication::translate("WizEditorInsertTableForm", "Insert Table", 0));
        labelRows->setText(QApplication::translate("WizEditorInsertTableForm", "Rows:", 0));
        editRows->setText(QString());
        editRows->setPlaceholderText(QApplication::translate("WizEditorInsertTableForm", "Accept rows between 1 to 30", 0));
        labelCols->setText(QApplication::translate("WizEditorInsertTableForm", "Colums:", 0));
        editCols->setText(QString());
        editCols->setPlaceholderText(QApplication::translate("WizEditorInsertTableForm", "Accept cols between 1 to 30", 0));
        pushButton_cancel->setText(QApplication::translate("WizEditorInsertTableForm", "Cancel", 0));
        pushButton_ok->setText(QApplication::translate("WizEditorInsertTableForm", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class WizEditorInsertTableForm: public Ui_WizEditorInsertTableForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZEDITORINSERTTABLEFORM_H
