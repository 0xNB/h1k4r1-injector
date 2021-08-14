/********************************************************************************
** Form generated from reading UI file 'injector-uiSrXEFs.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef INJECTOR_2D_UISRXEFS_H
#define INJECTOR_2D_UISRXEFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class InjectorForm
{
public:
    QLCDNumber* timeWastedLCD;
    QLabel* timeWastedLabel;
    QFrame* verticalDividorInjectionMethods;
    QLabel* label;
    QLabel* versionLabel;
    QSplitter* splitter;
    QLabel* injectionMethodHeader;
    QRadioButton* stealthInjectionToggle;
    QLabel* stealthInjectionLabel;
    QComboBox* injectionMethodComboBox;
    QLabel* codeExecutionMethodLabel;
    QWidget* widget;
    QVBoxLayout* verticalLayout;
    QLabel* programNameHeader;
    QTextEdit* programNameTextbox;
    QLabel* programNameLabel;
    QTextEdit* processIdTextEdit;
    QLabel* processIdLabel;
    QSpacerItem* verticalSpacer;
    QLabel* foundProcessLabel;
    QWidget* widget1;
    QHBoxLayout* horizontalLayout;
    QPushButton* injectButton;
    QPushButton* generatePreviewButton;

    void setupUi(QWidget* Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(670, 387);
        timeWastedLCD = new QLCDNumber(Form);
        timeWastedLCD->setObjectName(QString::fromUtf8("timeWastedLCD"));
        timeWastedLCD->setGeometry(QRect(580, 350, 91, 31));
        timeWastedLabel = new QLabel(Form);
        timeWastedLabel->setObjectName(QString::fromUtf8("timeWastedLabel"));
        timeWastedLabel->setGeometry(QRect(590, 330, 81, 21));
        verticalDividorInjectionMethods = new QFrame(Form);
        verticalDividorInjectionMethods->setObjectName(QString::fromUtf8("verticalDividorInjectionMethods"));
        verticalDividorInjectionMethods->setGeometry(QRect(0, 60, 681, 16));
        verticalDividorInjectionMethods->setFrameShape(QFrame::HLine);
        verticalDividorInjectionMethods->setFrameShadow(QFrame::Sunken);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 191, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        versionLabel = new QLabel(Form);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setGeometry(QRect(600, 10, 71, 20));
        splitter = new QSplitter(Form);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(350, 80, 271, 211));
        splitter->setOrientation(Qt::Vertical);
        injectionMethodHeader = new QLabel(splitter);
        injectionMethodHeader->setObjectName(QString::fromUtf8("injectionMethodHeader"));
        injectionMethodHeader->setFont(font);
        splitter->addWidget(injectionMethodHeader);
        stealthInjectionToggle = new QRadioButton(splitter);
        stealthInjectionToggle->setObjectName(QString::fromUtf8("stealthInjectionToggle"));
        splitter->addWidget(stealthInjectionToggle);
        stealthInjectionLabel = new QLabel(splitter);
        stealthInjectionLabel->setObjectName(QString::fromUtf8("stealthInjectionLabel"));
        splitter->addWidget(stealthInjectionLabel);
        injectionMethodComboBox = new QComboBox(splitter);
        injectionMethodComboBox->addItem(QString());
        injectionMethodComboBox->addItem(QString());
        injectionMethodComboBox->addItem(QString());
        injectionMethodComboBox->addItem(QString());
        injectionMethodComboBox->addItem(QString());
        injectionMethodComboBox->addItem(QString());
        injectionMethodComboBox->setObjectName(QString::fromUtf8("injectionMethodComboBox"));
        splitter->addWidget(injectionMethodComboBox);
        codeExecutionMethodLabel = new QLabel(splitter);
        codeExecutionMethodLabel->setObjectName(QString::fromUtf8("codeExecutionMethodLabel"));
        splitter->addWidget(codeExecutionMethodLabel);
        widget = new QWidget(Form);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 90, 281, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        programNameHeader = new QLabel(widget);
        programNameHeader->setObjectName(QString::fromUtf8("programNameHeader"));
        programNameHeader->setFont(font);

        verticalLayout->addWidget(programNameHeader);

        programNameTextbox = new QTextEdit(widget);
        programNameTextbox->setObjectName(QString::fromUtf8("programNameTextbox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(12);
        sizePolicy.setHeightForWidth(programNameTextbox->sizePolicy().hasHeightForWidth());
        programNameTextbox->setSizePolicy(sizePolicy);
        programNameTextbox->setMinimumSize(QSize(0, 16));

        verticalLayout->addWidget(programNameTextbox);

        programNameLabel = new QLabel(widget);
        programNameLabel->setObjectName(QString::fromUtf8("programNameLabel"));

        verticalLayout->addWidget(programNameLabel);

        processIdTextEdit = new QTextEdit(widget);
        processIdTextEdit->setObjectName(QString::fromUtf8("processIdTextEdit"));
        sizePolicy.setHeightForWidth(processIdTextEdit->sizePolicy().hasHeightForWidth());
        processIdTextEdit->setSizePolicy(sizePolicy);
        processIdTextEdit->setMinimumSize(QSize(0, 15));
        processIdTextEdit->setSizeIncrement(QSize(0, 5));
        processIdTextEdit->setBaseSize(QSize(0, 15));

        verticalLayout->addWidget(processIdTextEdit);

        processIdLabel = new QLabel(widget);
        processIdLabel->setObjectName(QString::fromUtf8("processIdLabel"));

        verticalLayout->addWidget(processIdLabel);

        verticalSpacer = new QSpacerItem(50, 70, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        foundProcessLabel = new QLabel(widget);
        foundProcessLabel->setObjectName(QString::fromUtf8("foundProcessLabel"));
        foundProcessLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(foundProcessLabel);

        widget1 = new QWidget(Form);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(240, 350, 184, 26));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        injectButton = new QPushButton(widget1);
        injectButton->setObjectName(QString::fromUtf8("injectButton"));

        horizontalLayout->addWidget(injectButton);

        generatePreviewButton = new QPushButton(widget1);
        generatePreviewButton->setObjectName(QString::fromUtf8("generatePreviewButton"));

        horizontalLayout->addWidget(generatePreviewButton);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget* Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        timeWastedLabel->setText(QCoreApplication::translate("Form", "Time wasted", nullptr));
        label->setText(QCoreApplication::translate("Form", "h1k4r1 Injector ", nullptr));
        versionLabel->setText(QCoreApplication::translate("Form", "v0.0.1-rc0", nullptr));
        injectionMethodHeader->setText(QCoreApplication::translate("Form", "Injection Method", nullptr));
        stealthInjectionToggle->setText(QCoreApplication::translate("Form", "Stealth Injection by Manual Mapping", nullptr));
        stealthInjectionLabel->setText(QCoreApplication::translate("Form", "Toggle Stealth Injection", nullptr));
        injectionMethodComboBox->setItemText(0, QCoreApplication::translate("Form", "CreateRemoteThread [Unsafe]", nullptr));
        injectionMethodComboBox->setItemText(1, QCoreApplication::translate("Form", "RtlCreateUserThread", nullptr));
        injectionMethodComboBox->setItemText(2, QCoreApplication::translate("Form", "NtCreateThreadEx", nullptr));
        injectionMethodComboBox->setItemText(3, QCoreApplication::translate("Form", "ThreadHijacking", nullptr));
        injectionMethodComboBox->setItemText(4, QCoreApplication::translate("Form", "SetWindowsHookEx", nullptr));
        injectionMethodComboBox->setItemText(5, QCoreApplication::translate("Form", "QueueUserAPC", nullptr));

        codeExecutionMethodLabel->setText(QCoreApplication::translate("Form", "Code Execution Method", nullptr));
        programNameHeader->setText(QCoreApplication::translate("Form", "Process Selection", nullptr));
        programNameLabel->setText(QCoreApplication::translate("Form", "Program Name", nullptr));
        processIdLabel->setText(QCoreApplication::translate("Form", "Process PID", nullptr));
        foundProcessLabel->setText(QCoreApplication::translate("Form", "No Process Selected", nullptr));
        injectButton->setText(QCoreApplication::translate("Form", "Inject Code", nullptr));
        generatePreviewButton->setText(QCoreApplication::translate("Form", "Generate Preview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InjectorMain : public InjectorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INJECTOR_2D_UISRXEFS_H
