/********************************************************************************
** Form generated from reading UI file 'WizEmailShareDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZEMAILSHAREDIALOG_H
#define UI_WIZEMAILSHAREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WizEmailShareDialog
{
public:
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton_send;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_to;
    QToolButton *toolButton_contacts;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_replyTo;
    QCheckBox *checkBox_sendMeCopy;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_subject;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_saveNotes;
    QToolButton *toolButton_settings;
    QTextEdit *textEdit_notes;
    QLabel *labelInfo;

    void setupUi(QDialog *WizEmailShareDialog)
    {
        if (WizEmailShareDialog->objectName().isEmpty())
            WizEmailShareDialog->setObjectName(QStringLiteral("WizEmailShareDialog"));
        WizEmailShareDialog->resize(480, 384);
        horizontalLayout_6 = new QHBoxLayout(WizEmailShareDialog);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 6);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 10, 10, -1);
        toolButton_send = new QToolButton(WizEmailShareDialog);
        toolButton_send->setObjectName(QStringLiteral("toolButton_send"));
        toolButton_send->setMinimumSize(QSize(60, 60));

        horizontalLayout_4->addWidget(toolButton_send);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(WizEmailShareDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_to = new QLineEdit(WizEmailShareDialog);
        lineEdit_to->setObjectName(QStringLiteral("lineEdit_to"));

        horizontalLayout_2->addWidget(lineEdit_to);

        toolButton_contacts = new QToolButton(WizEmailShareDialog);
        toolButton_contacts->setObjectName(QStringLiteral("toolButton_contacts"));
        toolButton_contacts->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(toolButton_contacts);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_2 = new QLabel(WizEmailShareDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBox_replyTo = new QComboBox(WizEmailShareDialog);
        comboBox_replyTo->setObjectName(QStringLiteral("comboBox_replyTo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_replyTo->sizePolicy().hasHeightForWidth());
        comboBox_replyTo->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(comboBox_replyTo);

        checkBox_sendMeCopy = new QCheckBox(WizEmailShareDialog);
        checkBox_sendMeCopy->setObjectName(QStringLiteral("checkBox_sendMeCopy"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox_sendMeCopy->sizePolicy().hasHeightForWidth());
        checkBox_sendMeCopy->setSizePolicy(sizePolicy1);
        checkBox_sendMeCopy->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(checkBox_sendMeCopy);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, -1, 10, -1);
        label_3 = new QLabel(WizEmailShareDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_subject = new QLineEdit(WizEmailShareDialog);
        lineEdit_subject->setObjectName(QStringLiteral("lineEdit_subject"));

        gridLayout_2->addWidget(lineEdit_subject, 0, 1, 1, 1);

        label_4 = new QLabel(WizEmailShareDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBox_saveNotes = new QCheckBox(WizEmailShareDialog);
        checkBox_saveNotes->setObjectName(QStringLiteral("checkBox_saveNotes"));

        horizontalLayout->addWidget(checkBox_saveNotes);

        toolButton_settings = new QToolButton(WizEmailShareDialog);
        toolButton_settings->setObjectName(QStringLiteral("toolButton_settings"));

        horizontalLayout->addWidget(toolButton_settings);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        textEdit_notes = new QTextEdit(WizEmailShareDialog);
        textEdit_notes->setObjectName(QStringLiteral("textEdit_notes"));

        verticalLayout->addWidget(textEdit_notes);

        labelInfo = new QLabel(WizEmailShareDialog);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));
        labelInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelInfo->setIndent(12);

        verticalLayout->addWidget(labelInfo);


        horizontalLayout_6->addLayout(verticalLayout);

        QWidget::setTabOrder(textEdit_notes, lineEdit_to);
        QWidget::setTabOrder(lineEdit_to, lineEdit_subject);
        QWidget::setTabOrder(lineEdit_subject, comboBox_replyTo);
        QWidget::setTabOrder(comboBox_replyTo, checkBox_sendMeCopy);
        QWidget::setTabOrder(checkBox_sendMeCopy, toolButton_contacts);
        QWidget::setTabOrder(toolButton_contacts, checkBox_saveNotes);
        QWidget::setTabOrder(checkBox_saveNotes, toolButton_settings);
        QWidget::setTabOrder(toolButton_settings, toolButton_send);

        retranslateUi(WizEmailShareDialog);

        QMetaObject::connectSlotsByName(WizEmailShareDialog);
    } // setupUi

    void retranslateUi(QDialog *WizEmailShareDialog)
    {
        WizEmailShareDialog->setWindowTitle(QApplication::translate("WizEmailShareDialog", "Send your note by email", 0));
        toolButton_send->setText(QApplication::translate("WizEmailShareDialog", "Send", 0));
        label->setText(QApplication::translate("WizEmailShareDialog", "<html><head/><body><p align=\"right\">To:</p></body></html>", 0));
        toolButton_contacts->setText(QApplication::translate("WizEmailShareDialog", "...", 0));
        label_2->setText(QApplication::translate("WizEmailShareDialog", "<html><head/><body><p align=\"right\">Reply to:</p></body></html>", 0));
        checkBox_sendMeCopy->setText(QApplication::translate("WizEmailShareDialog", "Send me a copy", 0));
        label_3->setText(QApplication::translate("WizEmailShareDialog", "Subject:", 0));
        label_4->setText(QApplication::translate("WizEmailShareDialog", "Comment:", 0));
        checkBox_saveNotes->setText(QApplication::translate("WizEmailShareDialog", "Save notes to current note", 0));
        toolButton_settings->setText(QApplication::translate("WizEmailShareDialog", "...", 0));
        labelInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WizEmailShareDialog: public Ui_WizEmailShareDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZEMAILSHAREDIALOG_H
