/********************************************************************************
** Form generated from reading UI file 'WizAdvancedSearchDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZADVANCEDSEARCHDIALOG_H
#define UI_WIZADVANCEDSEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizAdvancedSearchDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_allNotes;
    QRadioButton *radioButton_personalNotes;
    QRadioButton *radioButton_groupNotes;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_name;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEdit_keyword;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_first;
    QComboBox *comboBox_second;
    QComboBox *comboBox_third;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *toolButton_add;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *WizAdvancedSearchDialog)
    {
        if (WizAdvancedSearchDialog->objectName().isEmpty())
            WizAdvancedSearchDialog->setObjectName(QStringLiteral("WizAdvancedSearchDialog"));
        WizAdvancedSearchDialog->resize(650, 440);
        verticalLayout_4 = new QVBoxLayout(WizAdvancedSearchDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(WizAdvancedSearchDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
#ifndef Q_OS_MAC
        horizontalLayout_3->setSpacing(-1);
#endif
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_allNotes = new QRadioButton(groupBox);
        radioButton_allNotes->setObjectName(QStringLiteral("radioButton_allNotes"));

        horizontalLayout_3->addWidget(radioButton_allNotes);

        radioButton_personalNotes = new QRadioButton(groupBox);
        radioButton_personalNotes->setObjectName(QStringLiteral("radioButton_personalNotes"));

        horizontalLayout_3->addWidget(radioButton_personalNotes);

        radioButton_groupNotes = new QRadioButton(groupBox);
        radioButton_groupNotes->setObjectName(QStringLiteral("radioButton_groupNotes"));

        horizontalLayout_3->addWidget(radioButton_groupNotes);

        horizontalSpacer_2 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addWidget(groupBox, 2, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lineEdit_name = new QLineEdit(WizAdvancedSearchDialog);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_6->addWidget(lineEdit_name);


        gridLayout->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        label = new QLabel(WizAdvancedSearchDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(WizAdvancedSearchDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_3 = new QLabel(WizAdvancedSearchDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_keyword = new QLineEdit(WizAdvancedSearchDialog);
        lineEdit_keyword->setObjectName(QStringLiteral("lineEdit_keyword"));

        gridLayout->addWidget(lineEdit_keyword, 1, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(WizAdvancedSearchDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_3, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(WizAdvancedSearchDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox_first = new QComboBox(groupBox_2);
        comboBox_first->setObjectName(QStringLiteral("comboBox_first"));

        horizontalLayout->addWidget(comboBox_first);

        comboBox_second = new QComboBox(groupBox_2);
        comboBox_second->setObjectName(QStringLiteral("comboBox_second"));

        horizontalLayout->addWidget(comboBox_second);

        comboBox_third = new QComboBox(groupBox_2);
        comboBox_third->setObjectName(QStringLiteral("comboBox_third"));

        horizontalLayout->addWidget(comboBox_third);

        horizontalSpacer_3 = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        toolButton_add = new QPushButton(groupBox_2);
        toolButton_add->setObjectName(QStringLiteral("toolButton_add"));

        horizontalLayout->addWidget(toolButton_add);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_4->addWidget(listWidget);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addWidget(groupBox_2, 3, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(WizAdvancedSearchDialog);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout_2->addWidget(pushButton_cancel);

        pushButton_ok = new QPushButton(WizAdvancedSearchDialog);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        horizontalLayout_2->addWidget(pushButton_ok);


        verticalLayout_4->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(lineEdit_name, lineEdit_keyword);
        QWidget::setTabOrder(lineEdit_keyword, comboBox_first);
        QWidget::setTabOrder(comboBox_first, comboBox_second);
        QWidget::setTabOrder(comboBox_second, comboBox_third);
        QWidget::setTabOrder(comboBox_third, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_cancel);
        QWidget::setTabOrder(pushButton_cancel, listWidget);

        retranslateUi(WizAdvancedSearchDialog);

        QMetaObject::connectSlotsByName(WizAdvancedSearchDialog);
    } // setupUi

    void retranslateUi(QDialog *WizAdvancedSearchDialog)
    {
        WizAdvancedSearchDialog->setWindowTitle(QApplication::translate("WizAdvancedSearchDialog", "Advanced Search", 0));
        groupBox->setTitle(QString());
        radioButton_allNotes->setText(QApplication::translate("WizAdvancedSearchDialog", "All notes", 0));
        radioButton_personalNotes->setText(QApplication::translate("WizAdvancedSearchDialog", "Personal notes", 0));
        radioButton_groupNotes->setText(QApplication::translate("WizAdvancedSearchDialog", "Group notes", 0));
        label->setText(QApplication::translate("WizAdvancedSearchDialog", "Name:", 0));
        label_5->setText(QApplication::translate("WizAdvancedSearchDialog", "Scope:", 0));
        label_3->setText(QApplication::translate("WizAdvancedSearchDialog", "Keyword:", 0));
        label_4->setText(QApplication::translate("WizAdvancedSearchDialog", "Param:", 0));
        groupBox_2->setTitle(QString());
        toolButton_add->setText(QApplication::translate("WizAdvancedSearchDialog", "Add", 0));
        pushButton_cancel->setText(QApplication::translate("WizAdvancedSearchDialog", "Cancel", 0));
        pushButton_ok->setText(QApplication::translate("WizAdvancedSearchDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class WizAdvancedSearchDialog: public Ui_WizAdvancedSearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZADVANCEDSEARCHDIALOG_H
