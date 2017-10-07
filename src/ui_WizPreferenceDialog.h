/********************************************************************************
** Form generated from reading UI file 'WizPreferenceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZPREFERENCEDIALOG_H
#define UI_WIZPREFERENCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WizPreferenceWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxLang;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboLang;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *checkBox;
    QCheckBox *checkBoxTrayIcon;
    QCheckBox *checkBoxSystemStyle;
    QCheckBox *checkBoxManuallySort;
    QSpacerItem *verticalSpacer;
    QWidget *tabSyncing;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxSync;
    QGridLayout *gridLayout_2;
    QLabel *labelSyncMethod;
    QComboBox *comboSyncMethod;
    QComboBox *comboDownloadAttachments;
    QComboBox *comboSyncGroupMethod;
    QComboBox *comboSyncInterval;
    QLabel *label_7;
    QLabel *labelSyncInterval;
    QLabel *labelSyncGroupMethod;
    QCheckBox *useNewSync;
    QLabel *label_6;
    QLabel *labelProxySettings;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabReading;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxNoteView;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_13;
    QRadioButton *radioAuto;
    QRadioButton *radioAlwaysEditing;
    QRadioButton *radioAlwaysReading;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QWidget *tabFormat;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *editFont;
    QPushButton *buttonFontSelect;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonBackgroundColor;
    QPushButton *pushButtonClearBackground;
    QSpacerItem *verticalSpacer_7;
    QWidget *tabPrint;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *comboBox_unit;
    QLabel *label;
    QDoubleSpinBox *spinBox_top;
    QLabel *label_2;
    QDoubleSpinBox *spinBox_bottom;
    QLabel *label_3;
    QDoubleSpinBox *spinBox_left;
    QLabel *label_4;
    QDoubleSpinBox *spinBox_right;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *WizPreferenceWindow)
    {
        if (WizPreferenceWindow->objectName().isEmpty())
            WizPreferenceWindow->setObjectName(QStringLiteral("WizPreferenceWindow"));
        WizPreferenceWindow->resize(583, 385);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WizPreferenceWindow->sizePolicy().hasHeightForWidth());
        WizPreferenceWindow->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(WizPreferenceWindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 12, -1, 5);
        tabWidget = new QTabWidget(WizPreferenceWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QStringLiteral("tabGeneral"));
        verticalLayout = new QVBoxLayout(tabGeneral);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxLang = new QGroupBox(tabGeneral);
        groupBoxLang->setObjectName(QStringLiteral("groupBoxLang"));
        verticalLayout_3 = new QVBoxLayout(groupBoxLang);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        comboLang = new QComboBox(groupBoxLang);
        comboLang->setObjectName(QStringLiteral("comboLang"));

        verticalLayout_3->addWidget(comboLang);


        verticalLayout->addWidget(groupBoxLang);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        checkBox = new QCheckBox(tabGeneral);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setChecked(true);

        verticalLayout->addWidget(checkBox);

        checkBoxTrayIcon = new QCheckBox(tabGeneral);
        checkBoxTrayIcon->setObjectName(QStringLiteral("checkBoxTrayIcon"));

        verticalLayout->addWidget(checkBoxTrayIcon);

        checkBoxSystemStyle = new QCheckBox(tabGeneral);
        checkBoxSystemStyle->setObjectName(QStringLiteral("checkBoxSystemStyle"));

        verticalLayout->addWidget(checkBoxSystemStyle);

        checkBoxManuallySort = new QCheckBox(tabGeneral);
        checkBoxManuallySort->setObjectName(QStringLiteral("checkBoxManuallySort"));

        verticalLayout->addWidget(checkBoxManuallySort);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tabGeneral, QString());
        tabSyncing = new QWidget();
        tabSyncing->setObjectName(QStringLiteral("tabSyncing"));
        verticalLayout_4 = new QVBoxLayout(tabSyncing);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBoxSync = new QGroupBox(tabSyncing);
        groupBoxSync->setObjectName(QStringLiteral("groupBoxSync"));
        gridLayout_2 = new QGridLayout(groupBoxSync);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelSyncMethod = new QLabel(groupBoxSync);
        labelSyncMethod->setObjectName(QStringLiteral("labelSyncMethod"));
        sizePolicy.setHeightForWidth(labelSyncMethod->sizePolicy().hasHeightForWidth());
        labelSyncMethod->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(labelSyncMethod, 1, 0, 1, 1);

        comboSyncMethod = new QComboBox(groupBoxSync);
        comboSyncMethod->setObjectName(QStringLiteral("comboSyncMethod"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboSyncMethod->sizePolicy().hasHeightForWidth());
        comboSyncMethod->setSizePolicy(sizePolicy1);
        comboSyncMethod->setMaximumSize(QSize(170, 16777215));

        gridLayout_2->addWidget(comboSyncMethod, 1, 1, 1, 1);

        comboDownloadAttachments = new QComboBox(groupBoxSync);
        comboDownloadAttachments->setObjectName(QStringLiteral("comboDownloadAttachments"));
        comboDownloadAttachments->setMaximumSize(QSize(170, 16777215));

        gridLayout_2->addWidget(comboDownloadAttachments, 3, 1, 1, 1);

        comboSyncGroupMethod = new QComboBox(groupBoxSync);
        comboSyncGroupMethod->setObjectName(QStringLiteral("comboSyncGroupMethod"));
        sizePolicy1.setHeightForWidth(comboSyncGroupMethod->sizePolicy().hasHeightForWidth());
        comboSyncGroupMethod->setSizePolicy(sizePolicy1);
        comboSyncGroupMethod->setMaximumSize(QSize(170, 16777215));

        gridLayout_2->addWidget(comboSyncGroupMethod, 2, 1, 1, 1);

        comboSyncInterval = new QComboBox(groupBoxSync);
        comboSyncInterval->setObjectName(QStringLiteral("comboSyncInterval"));
        comboSyncInterval->setMinimumSize(QSize(170, 0));
        comboSyncInterval->setMaximumSize(QSize(170, 16777215));
        comboSyncInterval->setModelColumn(0);

        gridLayout_2->addWidget(comboSyncInterval, 0, 1, 1, 1);

        label_7 = new QLabel(groupBoxSync);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        labelSyncInterval = new QLabel(groupBoxSync);
        labelSyncInterval->setObjectName(QStringLiteral("labelSyncInterval"));
        sizePolicy.setHeightForWidth(labelSyncInterval->sizePolicy().hasHeightForWidth());
        labelSyncInterval->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(labelSyncInterval, 0, 0, 1, 1);

        labelSyncGroupMethod = new QLabel(groupBoxSync);
        labelSyncGroupMethod->setObjectName(QStringLiteral("labelSyncGroupMethod"));
        sizePolicy.setHeightForWidth(labelSyncGroupMethod->sizePolicy().hasHeightForWidth());
        labelSyncGroupMethod->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(labelSyncGroupMethod, 2, 0, 1, 1);

        useNewSync = new QCheckBox(groupBoxSync);
        useNewSync->setObjectName(QStringLiteral("useNewSync"));

        gridLayout_2->addWidget(useNewSync, 4, 0, 1, 1);

        label_6 = new QLabel(groupBoxSync);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setWordWrap(true);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 2);


        verticalLayout_4->addWidget(groupBoxSync);

        labelProxySettings = new QLabel(tabSyncing);
        labelProxySettings->setObjectName(QStringLiteral("labelProxySettings"));
        labelProxySettings->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(labelProxySettings);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(tabSyncing, QString());
        tabReading = new QWidget();
        tabReading->setObjectName(QStringLiteral("tabReading"));
        verticalLayout_5 = new QVBoxLayout(tabReading);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBoxNoteView = new QGroupBox(tabReading);
        groupBoxNoteView->setObjectName(QStringLiteral("groupBoxNoteView"));
        verticalLayout_8 = new QVBoxLayout(groupBoxNoteView);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        radioAuto = new QRadioButton(groupBoxNoteView);
        radioAuto->setObjectName(QStringLiteral("radioAuto"));

        verticalLayout_13->addWidget(radioAuto);

        radioAlwaysEditing = new QRadioButton(groupBoxNoteView);
        radioAlwaysEditing->setObjectName(QStringLiteral("radioAlwaysEditing"));

        verticalLayout_13->addWidget(radioAlwaysEditing);

        radioAlwaysReading = new QRadioButton(groupBoxNoteView);
        radioAlwaysReading->setObjectName(QStringLiteral("radioAlwaysReading"));

        verticalLayout_13->addWidget(radioAlwaysReading);


        verticalLayout_8->addLayout(verticalLayout_13);


        verticalLayout_5->addWidget(groupBoxNoteView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        tabWidget->addTab(tabReading, QString());
        tabFormat = new QWidget();
        tabFormat->setObjectName(QStringLiteral("tabFormat"));
        verticalLayout_7 = new QVBoxLayout(tabFormat);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox = new QGroupBox(tabFormat);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        editFont = new QLineEdit(groupBox);
        editFont->setObjectName(QStringLiteral("editFont"));
        editFont->setInputMask(QStringLiteral(""));
        editFont->setAlignment(Qt::AlignCenter);
        editFont->setReadOnly(true);

        horizontalLayout_2->addWidget(editFont);

        buttonFontSelect = new QPushButton(groupBox);
        buttonFontSelect->setObjectName(QStringLiteral("buttonFontSelect"));
        buttonFontSelect->setMinimumSize(QSize(120, 0));
        buttonFontSelect->setAutoDefault(false);

        horizontalLayout_2->addWidget(buttonFontSelect);


        verticalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout_7->addWidget(groupBox);

        groupBox_4 = new QGroupBox(tabFormat);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonBackgroundColor = new QPushButton(groupBox_4);
        pushButtonBackgroundColor->setObjectName(QStringLiteral("pushButtonBackgroundColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonBackgroundColor->sizePolicy().hasHeightForWidth());
        pushButtonBackgroundColor->setSizePolicy(sizePolicy2);
        pushButtonBackgroundColor->setAutoDefault(true);

        horizontalLayout_4->addWidget(pushButtonBackgroundColor);

        pushButtonClearBackground = new QPushButton(groupBox_4);
        pushButtonClearBackground->setObjectName(QStringLiteral("pushButtonClearBackground"));
        pushButtonClearBackground->setMinimumSize(QSize(120, 0));

        horizontalLayout_4->addWidget(pushButtonClearBackground);


        verticalLayout_7->addWidget(groupBox_4);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);

        tabWidget->addTab(tabFormat, QString());
        tabPrint = new QWidget();
        tabPrint->setObjectName(QStringLiteral("tabPrint"));
        verticalLayout_9 = new QVBoxLayout(tabPrint);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        groupBox_2 = new QGroupBox(tabPrint);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        comboBox_unit = new QComboBox(groupBox_2);
        comboBox_unit->setObjectName(QStringLiteral("comboBox_unit"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox_unit->sizePolicy().hasHeightForWidth());
        comboBox_unit->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(comboBox_unit, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBox_top = new QDoubleSpinBox(groupBox_2);
        spinBox_top->setObjectName(QStringLiteral("spinBox_top"));
        sizePolicy2.setHeightForWidth(spinBox_top->sizePolicy().hasHeightForWidth());
        spinBox_top->setSizePolicy(sizePolicy2);
        spinBox_top->setMinimum(-999);
        spinBox_top->setMaximum(999.99);

        gridLayout->addWidget(spinBox_top, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        spinBox_bottom = new QDoubleSpinBox(groupBox_2);
        spinBox_bottom->setObjectName(QStringLiteral("spinBox_bottom"));
        sizePolicy2.setHeightForWidth(spinBox_bottom->sizePolicy().hasHeightForWidth());
        spinBox_bottom->setSizePolicy(sizePolicy2);
        spinBox_bottom->setMinimum(-999);
        spinBox_bottom->setMaximum(999.99);

        gridLayout->addWidget(spinBox_bottom, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBox_left = new QDoubleSpinBox(groupBox_2);
        spinBox_left->setObjectName(QStringLiteral("spinBox_left"));
        spinBox_left->setMinimum(-999);
        spinBox_left->setMaximum(999.99);

        gridLayout->addWidget(spinBox_left, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        spinBox_right = new QDoubleSpinBox(groupBox_2);
        spinBox_right->setObjectName(QStringLiteral("spinBox_right"));
        spinBox_right->setMinimum(-999);
        spinBox_right->setMaximum(999.99);

        gridLayout->addWidget(spinBox_right, 2, 3, 1, 1);


        verticalLayout_9->addWidget(groupBox_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_5);

        tabWidget->addTab(tabPrint, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(403, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(WizPreferenceWindow);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(btnClose);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(WizPreferenceWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WizPreferenceWindow);
    } // setupUi

    void retranslateUi(QDialog *WizPreferenceWindow)
    {
        WizPreferenceWindow->setWindowTitle(QApplication::translate("WizPreferenceWindow", "WizPreferenceDialog", 0));
        groupBoxLang->setTitle(QApplication::translate("WizPreferenceWindow", "Language", 0));
        checkBox->setText(QApplication::translate("WizPreferenceWindow", "Notify preview version when avaliable", 0));
        checkBoxTrayIcon->setText(QApplication::translate("WizPreferenceWindow", "Show system tray icon", 0));
        checkBoxSystemStyle->setText(QApplication::translate("WizPreferenceWindow", "Use system based style", 0));
        checkBoxManuallySort->setText(QApplication::translate("WizPreferenceWindow", "Manually sorting folders", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("WizPreferenceWindow", "General", 0));
        groupBoxSync->setTitle(QApplication::translate("WizPreferenceWindow", "Sync Method", 0));
        labelSyncMethod->setText(QApplication::translate("WizPreferenceWindow", "Personal sync method:", 0));
        comboSyncMethod->clear();
        comboSyncMethod->insertItems(0, QStringList()
         << QApplication::translate("WizPreferenceWindow", "Only download note title", 0)
         << QApplication::translate("WizPreferenceWindow", "Download recent 1 day's data", 0)
         << QApplication::translate("WizPreferenceWindow", "Download recent 1 week's data", 0)
         << QApplication::translate("WizPreferenceWindow", "Download recent 1 month's data", 0)
         << QApplication::translate("WizPreferenceWindow", "Download all data when syncing", 0)
        );
        comboDownloadAttachments->clear();
        comboDownloadAttachments->insertItems(0, QStringList()
         << QApplication::translate("WizPreferenceWindow", "Only download attachments title", 0)
         << QApplication::translate("WizPreferenceWindow", "Download all attachments", 0)
        );
        comboSyncGroupMethod->clear();
        comboSyncGroupMethod->insertItems(0, QStringList()
         << QApplication::translate("WizPreferenceWindow", "Only download note title", 0)
         << QApplication::translate("WizPreferenceWindow", "Download recent 1 day's data", 0)
         << QApplication::translate("WizPreferenceWindow", "Download recent 1 week's data", 0)
         << QApplication::translate("WizPreferenceWindow", "Download recent 1 month's data", 0)
         << QApplication::translate("WizPreferenceWindow", "Download all data when syncing", 0)
        );
        comboSyncInterval->clear();
        comboSyncInterval->insertItems(0, QStringList()
         << QApplication::translate("WizPreferenceWindow", "5 minutes", 0)
         << QApplication::translate("WizPreferenceWindow", "15 minutes", 0)
         << QApplication::translate("WizPreferenceWindow", "30 minutes", 0)
         << QApplication::translate("WizPreferenceWindow", "1 hour", 0)
         << QApplication::translate("WizPreferenceWindow", "Manual", 0)
        );
        label_7->setText(QApplication::translate("WizPreferenceWindow", "Download attachment:", 0));
        labelSyncInterval->setText(QApplication::translate("WizPreferenceWindow", "Sync time interval:", 0));
        labelSyncGroupMethod->setText(QApplication::translate("WizPreferenceWindow", "Group sync method:", 0));
        useNewSync->setText(QApplication::translate("WizPreferenceWindow", "Use the new sync.", 0));
        label_6->setText(QApplication::translate("WizPreferenceWindow", "The new sync uses incremental sync, upload and download notes speed is improved significantly", 0));
        labelProxySettings->setText(QApplication::translate("WizPreferenceWindow", "Proxy Settings", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSyncing), QApplication::translate("WizPreferenceWindow", "Sync", 0));
        groupBoxNoteView->setTitle(QApplication::translate("WizPreferenceWindow", "Default note view(Only works for psersonal note)", 0));
        radioAuto->setText(QApplication::translate("WizPreferenceWindow", "Auto (Keep view state)", 0));
        radioAlwaysEditing->setText(QApplication::translate("WizPreferenceWindow", "Always open in Editing-View", 0));
        radioAlwaysReading->setText(QApplication::translate("WizPreferenceWindow", "Always open in Reading-View", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabReading), QApplication::translate("WizPreferenceWindow", "Read", 0));
        groupBox->setTitle(QApplication::translate("WizPreferenceWindow", "Default font", 0));
        editFont->setText(QString());
        buttonFontSelect->setText(QApplication::translate("WizPreferenceWindow", "Select", 0));
        groupBox_4->setTitle(QApplication::translate("WizPreferenceWindow", "Background color", 0));
        pushButtonBackgroundColor->setText(QString());
        pushButtonClearBackground->setText(QApplication::translate("WizPreferenceWindow", "Clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabFormat), QApplication::translate("WizPreferenceWindow", "Format", 0));
        groupBox_2->setTitle(QApplication::translate("WizPreferenceWindow", "Page margins", 0));
        label_5->setText(QApplication::translate("WizPreferenceWindow", "Unit:", 0));
        comboBox_unit->clear();
        comboBox_unit->insertItems(0, QStringList()
         << QApplication::translate("WizPreferenceWindow", "Millimeter", 0)
         << QApplication::translate("WizPreferenceWindow", "Point", 0)
         << QApplication::translate("WizPreferenceWindow", "Inch", 0)
         << QApplication::translate("WizPreferenceWindow", "Pica", 0)
         << QApplication::translate("WizPreferenceWindow", "Didot", 0)
         << QApplication::translate("WizPreferenceWindow", "Cicero", 0)
        );
        label->setText(QApplication::translate("WizPreferenceWindow", "Top:", 0));
        label_2->setText(QApplication::translate("WizPreferenceWindow", "Bottom:", 0));
        label_3->setText(QApplication::translate("WizPreferenceWindow", "Left:", 0));
        label_4->setText(QApplication::translate("WizPreferenceWindow", "Right:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPrint), QApplication::translate("WizPreferenceWindow", "Print", 0));
        btnClose->setText(QApplication::translate("WizPreferenceWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class WizPreferenceWindow: public Ui_WizPreferenceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZPREFERENCEDIALOG_H
