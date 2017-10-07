/********************************************************************************
** Form generated from reading UI file 'WizSearchReplaceWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZSEARCHREPLACEWIDGET_H
#define UI_WIZSEARCHREPLACEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizSearchReplaceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_repalce;
    QLabel *label_2;
    QLineEdit *lineEdit_source;
    QLabel *label;
    QCheckBox *checkBox_casesenitive;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_pre;
    QPushButton *btn_next;
    QPushButton *btn_replace;
    QPushButton *btn_replaceAll;

    void setupUi(QDialog *WizSearchReplaceWidget)
    {
        if (WizSearchReplaceWidget->objectName().isEmpty())
            WizSearchReplaceWidget->setObjectName(QStringLiteral("WizSearchReplaceWidget"));
        WizSearchReplaceWidget->resize(415, 143);
        verticalLayout = new QVBoxLayout(WizSearchReplaceWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit_repalce = new QLineEdit(WizSearchReplaceWidget);
        lineEdit_repalce->setObjectName(QStringLiteral("lineEdit_repalce"));

        gridLayout->addWidget(lineEdit_repalce, 1, 1, 1, 1);

        label_2 = new QLabel(WizSearchReplaceWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_source = new QLineEdit(WizSearchReplaceWidget);
        lineEdit_source->setObjectName(QStringLiteral("lineEdit_source"));

        gridLayout->addWidget(lineEdit_source, 0, 1, 1, 1);

        label = new QLabel(WizSearchReplaceWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        checkBox_casesenitive = new QCheckBox(WizSearchReplaceWidget);
        checkBox_casesenitive->setObjectName(QStringLiteral("checkBox_casesenitive"));

        verticalLayout->addWidget(checkBox_casesenitive);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_pre = new QPushButton(WizSearchReplaceWidget);
        btn_pre->setObjectName(QStringLiteral("btn_pre"));

        horizontalLayout_3->addWidget(btn_pre);

        btn_next = new QPushButton(WizSearchReplaceWidget);
        btn_next->setObjectName(QStringLiteral("btn_next"));

        horizontalLayout_3->addWidget(btn_next);

        btn_replace = new QPushButton(WizSearchReplaceWidget);
        btn_replace->setObjectName(QStringLiteral("btn_replace"));

        horizontalLayout_3->addWidget(btn_replace);

        btn_replaceAll = new QPushButton(WizSearchReplaceWidget);
        btn_replaceAll->setObjectName(QStringLiteral("btn_replaceAll"));

        horizontalLayout_3->addWidget(btn_replaceAll);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(lineEdit_source, lineEdit_repalce);
        QWidget::setTabOrder(lineEdit_repalce, checkBox_casesenitive);
        QWidget::setTabOrder(checkBox_casesenitive, btn_pre);
        QWidget::setTabOrder(btn_pre, btn_next);
        QWidget::setTabOrder(btn_next, btn_replace);
        QWidget::setTabOrder(btn_replace, btn_replaceAll);

        retranslateUi(WizSearchReplaceWidget);

        QMetaObject::connectSlotsByName(WizSearchReplaceWidget);
    } // setupUi

    void retranslateUi(QDialog *WizSearchReplaceWidget)
    {
        WizSearchReplaceWidget->setWindowTitle(QApplication::translate("WizSearchReplaceWidget", "Find & Replace", 0));
        label_2->setText(QApplication::translate("WizSearchReplaceWidget", "Replace:", 0));
        label->setText(QApplication::translate("WizSearchReplaceWidget", "Find:", 0));
        checkBox_casesenitive->setText(QApplication::translate("WizSearchReplaceWidget", "Case sensitive", 0));
        btn_pre->setText(QApplication::translate("WizSearchReplaceWidget", "Previous", 0));
        btn_next->setText(QApplication::translate("WizSearchReplaceWidget", "Next", 0));
        btn_replace->setText(QApplication::translate("WizSearchReplaceWidget", "Replace", 0));
        btn_replaceAll->setText(QApplication::translate("WizSearchReplaceWidget", "Replace All", 0));
    } // retranslateUi

};

namespace Ui {
    class WizSearchReplaceWidget: public Ui_WizSearchReplaceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZSEARCHREPLACEWIDGET_H
