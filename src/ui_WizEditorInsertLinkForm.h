/********************************************************************************
** Form generated from reading UI file 'WizEditorInsertLinkForm.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZEDITORINSERTLINKFORM_H
#define UI_WIZEDITORINSERTLINKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizEditorInsertLinkForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelUrl;
    QLineEdit *editUrl;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *WizEditorInsertLinkForm)
    {
        if (WizEditorInsertLinkForm->objectName().isEmpty())
            WizEditorInsertLinkForm->setObjectName(QStringLiteral("WizEditorInsertLinkForm"));
        WizEditorInsertLinkForm->resize(338, 90);
        verticalLayout = new QVBoxLayout(WizEditorInsertLinkForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelUrl = new QLabel(WizEditorInsertLinkForm);
        labelUrl->setObjectName(QStringLiteral("labelUrl"));
        labelUrl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelUrl);

        editUrl = new QLineEdit(WizEditorInsertLinkForm);
        editUrl->setObjectName(QStringLiteral("editUrl"));
        editUrl->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(editUrl);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(WizEditorInsertLinkForm);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(0, 32));

        horizontalLayout_2->addWidget(pushButton_cancel);

        pushButton_ok = new QPushButton(WizEditorInsertLinkForm);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setMinimumSize(QSize(0, 32));

        horizontalLayout_2->addWidget(pushButton_ok);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(editUrl, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_cancel);

        retranslateUi(WizEditorInsertLinkForm);

        QMetaObject::connectSlotsByName(WizEditorInsertLinkForm);
    } // setupUi

    void retranslateUi(QDialog *WizEditorInsertLinkForm)
    {
        WizEditorInsertLinkForm->setWindowTitle(QApplication::translate("WizEditorInsertLinkForm", "Insert Link", 0));
        labelUrl->setText(QApplication::translate("WizEditorInsertLinkForm", "URL:", 0));
        pushButton_cancel->setText(QApplication::translate("WizEditorInsertLinkForm", "Cancel", 0));
        pushButton_ok->setText(QApplication::translate("WizEditorInsertLinkForm", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class WizEditorInsertLinkForm: public Ui_WizEditorInsertLinkForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZEDITORINSERTLINKFORM_H
