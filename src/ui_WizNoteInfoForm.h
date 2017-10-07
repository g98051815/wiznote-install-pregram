/********************************************************************************
** Form generated from reading UI file 'WizNoteInfoForm.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZNOTEINFOFORM_H
#define UI_WIZNOTEINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WizNoteInfoForm
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelSize;
    QCheckBox *checkEncrypted;
    QLabel *labelOwner;
    QLabel *labelOpenDocument;
    QLabel *labelTagsLabel;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *editCreateTime;
    QLabel *labelTags;
    QLabel *label_9;
    QLineEdit *editAuthor;
    QLabel *label_4;
    QLabel *labelNotebook;
    QLabel *label_5;
    QLabel *labelOwnerLabel;
    QLabel *labelHistoryLabel;
    QLabel *label_8;
    QLineEdit *editUpdateTime;
    QLabel *labelHistory;
    QLineEdit *editURL;
    QLabel *labelEncrypted;
    QLabel *label_6;
    QLineEdit *editAccessTime;
    QLabel *labelOpenURL;

    void setupUi(QWidget *WizNoteInfoForm)
    {
        if (WizNoteInfoForm->objectName().isEmpty())
            WizNoteInfoForm->setObjectName(QStringLiteral("WizNoteInfoForm"));
        WizNoteInfoForm->resize(444, 381);
        WizNoteInfoForm->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255); border-radius:4px;"));
        verticalLayout = new QVBoxLayout(WizNoteInfoForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelSize = new QLabel(WizNoteInfoForm);
        labelSize->setObjectName(QStringLiteral("labelSize"));
        labelSize->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelSize->setWordWrap(true);

        gridLayout->addWidget(labelSize, 8, 1, 1, 1);

        checkEncrypted = new QCheckBox(WizNoteInfoForm);
        checkEncrypted->setObjectName(QStringLiteral("checkEncrypted"));

        gridLayout->addWidget(checkEncrypted, 9, 1, 1, 1);

        labelOwner = new QLabel(WizNoteInfoForm);
        labelOwner->setObjectName(QStringLiteral("labelOwner"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelOwner->sizePolicy().hasHeightForWidth());
        labelOwner->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelOwner, 1, 1, 1, 1);

        labelOpenDocument = new QLabel(WizNoteInfoForm);
        labelOpenDocument->setObjectName(QStringLiteral("labelOpenDocument"));
        labelOpenDocument->setCursor(QCursor(Qt::PointingHandCursor));
        labelOpenDocument->setFrameShadow(QFrame::Plain);
        labelOpenDocument->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelOpenDocument->setOpenExternalLinks(false);
        labelOpenDocument->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelOpenDocument, 0, 2, 1, 1);

        labelTagsLabel = new QLabel(WizNoteInfoForm);
        labelTagsLabel->setObjectName(QStringLiteral("labelTagsLabel"));
        labelTagsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTagsLabel, 2, 0, 1, 1);

        label_2 = new QLabel(WizNoteInfoForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(WizNoteInfoForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        editCreateTime = new QLineEdit(WizNoteInfoForm);
        editCreateTime->setObjectName(QStringLiteral("editCreateTime"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editCreateTime->sizePolicy().hasHeightForWidth());
        editCreateTime->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(editCreateTime, 4, 1, 1, 1);

        labelTags = new QLabel(WizNoteInfoForm);
        labelTags->setObjectName(QStringLiteral("labelTags"));
        sizePolicy.setHeightForWidth(labelTags->sizePolicy().hasHeightForWidth());
        labelTags->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelTags, 2, 1, 1, 1);

        label_9 = new QLabel(WizNoteInfoForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        editAuthor = new QLineEdit(WizNoteInfoForm);
        editAuthor->setObjectName(QStringLiteral("editAuthor"));

        gridLayout->addWidget(editAuthor, 7, 1, 1, 1);

        label_4 = new QLabel(WizNoteInfoForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        labelNotebook = new QLabel(WizNoteInfoForm);
        labelNotebook->setObjectName(QStringLiteral("labelNotebook"));
        sizePolicy.setHeightForWidth(labelNotebook->sizePolicy().hasHeightForWidth());
        labelNotebook->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelNotebook, 0, 1, 1, 1);

        label_5 = new QLabel(WizNoteInfoForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        labelOwnerLabel = new QLabel(WizNoteInfoForm);
        labelOwnerLabel->setObjectName(QStringLiteral("labelOwnerLabel"));
        labelOwnerLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelOwnerLabel, 1, 0, 1, 1);

        labelHistoryLabel = new QLabel(WizNoteInfoForm);
        labelHistoryLabel->setObjectName(QStringLiteral("labelHistoryLabel"));
        labelHistoryLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelHistoryLabel, 10, 0, 1, 1);

        label_8 = new QLabel(WizNoteInfoForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        editUpdateTime = new QLineEdit(WizNoteInfoForm);
        editUpdateTime->setObjectName(QStringLiteral("editUpdateTime"));

        gridLayout->addWidget(editUpdateTime, 5, 1, 1, 1);

        labelHistory = new QLabel(WizNoteInfoForm);
        labelHistory->setObjectName(QStringLiteral("labelHistory"));
        sizePolicy.setHeightForWidth(labelHistory->sizePolicy().hasHeightForWidth());
        labelHistory->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelHistory, 10, 1, 1, 1);

        editURL = new QLineEdit(WizNoteInfoForm);
        editURL->setObjectName(QStringLiteral("editURL"));

        gridLayout->addWidget(editURL, 3, 1, 1, 1);

        labelEncrypted = new QLabel(WizNoteInfoForm);
        labelEncrypted->setObjectName(QStringLiteral("labelEncrypted"));
        labelEncrypted->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelEncrypted, 9, 0, 1, 1);

        label_6 = new QLabel(WizNoteInfoForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        editAccessTime = new QLineEdit(WizNoteInfoForm);
        editAccessTime->setObjectName(QStringLiteral("editAccessTime"));

        gridLayout->addWidget(editAccessTime, 6, 1, 1, 1);

        labelOpenURL = new QLabel(WizNoteInfoForm);
        labelOpenURL->setObjectName(QStringLiteral("labelOpenURL"));

        gridLayout->addWidget(labelOpenURL, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(WizNoteInfoForm);

        QMetaObject::connectSlotsByName(WizNoteInfoForm);
    } // setupUi

    void retranslateUi(QWidget *WizNoteInfoForm)
    {
        WizNoteInfoForm->setWindowTitle(QApplication::translate("WizNoteInfoForm", "Note Info", 0));
        labelSize->setText(QApplication::translate("WizNoteInfoForm", "KB/MB, Words", 0));
        checkEncrypted->setText(QApplication::translate("WizNoteInfoForm", "Encrypted", 0));
        labelOwner->setText(QApplication::translate("WizNoteInfoForm", "TextLabel", 0));
        labelOpenDocument->setText(QApplication::translate("WizNoteInfoForm", "<html><head/><body><p><a href=\"wfwefwef\"><span style=\" text-decoration: underline; color:#0000ff;\">Open</span></a></p></body></html>", 0));
        labelTagsLabel->setText(QApplication::translate("WizNoteInfoForm", "Tags:", 0));
        label_2->setText(QApplication::translate("WizNoteInfoForm", "Location:", 0));
        label_3->setText(QApplication::translate("WizNoteInfoForm", "Access Time:", 0));
        labelTags->setText(QApplication::translate("WizNoteInfoForm", "Tags", 0));
        label_9->setText(QApplication::translate("WizNoteInfoForm", "Author:", 0));
        label_4->setText(QApplication::translate("WizNoteInfoForm", "Create Time:", 0));
        labelNotebook->setText(QApplication::translate("WizNoteInfoForm", "notebook", 0));
        label_5->setText(QApplication::translate("WizNoteInfoForm", "Update Time:", 0));
        labelOwnerLabel->setText(QApplication::translate("WizNoteInfoForm", "Owner:", 0));
        labelHistoryLabel->setText(QApplication::translate("WizNoteInfoForm", "History:", 0));
        label_8->setText(QApplication::translate("WizNoteInfoForm", "Size:", 0));
        labelHistory->setText(QApplication::translate("WizNoteInfoForm", "<html><head/><body><p><a href=\"wfwefwef\"><span style=\" text-decoration: underline; color:#0000ff;\">Click to view version history</span></a></p></body></html>", 0));
        labelEncrypted->setText(QApplication::translate("WizNoteInfoForm", "Encrypt:", 0));
        label_6->setText(QApplication::translate("WizNoteInfoForm", "URL:", 0));
        labelOpenURL->setText(QApplication::translate("WizNoteInfoForm", "open", 0));
    } // retranslateUi

};

namespace Ui {
    class WizNoteInfoForm: public Ui_WizNoteInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZNOTEINFOFORM_H
