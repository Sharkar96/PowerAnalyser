//
// Created by Andrea on 4/9/2020.
//

#ifndef POWERANALYSER_UI_MAINWINDOW_H
#define POWERANALYSER_UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'untitleddybHRl.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UNTITLEDDYBHRL_H
#define UNTITLEDDYBHRL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QWidget* centralwidget;
    QPushButton* InsertPushButton;
    QWidget* layoutWidget;
    QHBoxLayout* horizontalLayout;
    QVBoxLayout* verticalLayout_3;
    QLabel* VoltsWattsLabel;
    QLabel* AmpsLabel;
    QVBoxLayout* verticalLayout_2;
    QLineEdit* VoltsWattLineEdit;
    QLineEdit* AmpsLineEdit;
    QWidget* layoutWidget1;
    QVBoxLayout* verticalLayout_4;
    QLabel* NameLabel;
    QLineEdit* NameLineEdit;
    QGroupBox* ResultBox;
    QSplitter* splitter;
    QWidget* layoutWidget2;
    QHBoxLayout* horizontalLayout_2;
    QLabel* Daily;
    QFrame* line_3;
    QLabel* DailyText;
    QWidget* layoutWidget3;
    QHBoxLayout* horizontalLayout_3;
    QLabel* Monthly;
    QFrame* line;
    QLabel* MonthlyText;
    QWidget* layoutWidget4;
    QHBoxLayout* horizontalLayout_4;
    QLabel* Yearly;
    QFrame* line_2;
    QLabel* YearlyText;
    QWidget* layoutWidget5;
    QVBoxLayout* verticalLayout;
    QLabel* label;
    QPushButton* pushButton;
    QWidget* layoutWidget6;
    QVBoxLayout* verticalLayout_5;
    QPushButton* SetCurrentPriceButton;
    QLineEdit* CurrentPriceText;
    QWidget* layoutWidget7;
    QHBoxLayout* horizontalLayout_5;
    QLabel* HoursLabel;
    QLineEdit* HoursText;
    QGroupBox* groupBox;
    QListWidget* listWidgetDevices;
    QStatusBar* statusbar;

    void setupUi(QMainWindow* MainWindow) {
        if(MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(494, 448);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        InsertPushButton = new QPushButton(centralwidget);
        InsertPushButton->setObjectName(QString::fromUtf8("InsertPushButton"));
        InsertPushButton->setGeometry(QRect(260, 150, 111, 23));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 60, 161, 48));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        VoltsWattsLabel = new QLabel(layoutWidget);
        VoltsWattsLabel->setObjectName(QString::fromUtf8("VoltsWattsLabel"));

        verticalLayout_3->addWidget(VoltsWattsLabel);

        AmpsLabel = new QLabel(layoutWidget);
        AmpsLabel->setObjectName(QString::fromUtf8("AmpsLabel"));

        verticalLayout_3->addWidget(AmpsLabel);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        VoltsWattLineEdit = new QLineEdit(layoutWidget);
        VoltsWattLineEdit->setObjectName(QString::fromUtf8("VoltsWattLineEdit"));

        verticalLayout_2->addWidget(VoltsWattLineEdit);

        AmpsLineEdit = new QLineEdit(layoutWidget);
        AmpsLineEdit->setObjectName(QString::fromUtf8("AmpsLineEdit"));

        verticalLayout_2->addWidget(AmpsLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 10, 116, 41));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        NameLabel = new QLabel(layoutWidget1);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        verticalLayout_4->addWidget(NameLabel);

        NameLineEdit = new QLineEdit(layoutWidget1);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));

        verticalLayout_4->addWidget(NameLineEdit);

        ResultBox = new QGroupBox(centralwidget);
        ResultBox->setObjectName(QString::fromUtf8("ResultBox"));
        ResultBox->setGeometry(QRect(20, 200, 221, 171));
        QFont font;
        font.setPointSize(10);
        ResultBox->setFont(font);
        splitter = new QSplitter(ResultBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 40, 191, 91));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Daily = new QLabel(layoutWidget2);
        Daily->setObjectName(QString::fromUtf8("Daily"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Daily->sizePolicy().hasHeightForWidth());
        Daily->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        Daily->setFont(font1);
        Daily->setAutoFillBackground(false);
        Daily->setScaledContents(false);

        horizontalLayout_2->addWidget(Daily);

        line_3 = new QFrame(layoutWidget2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        DailyText = new QLabel(layoutWidget2);
        DailyText->setObjectName(QString::fromUtf8("DailyText"));
        sizePolicy.setHeightForWidth(DailyText->sizePolicy().hasHeightForWidth());
        DailyText->setSizePolicy(sizePolicy);
        DailyText->setFont(font1);
        DailyText->setAutoFillBackground(false);
        DailyText->setScaledContents(false);

        horizontalLayout_2->addWidget(DailyText);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Monthly = new QLabel(layoutWidget3);
        Monthly->setObjectName(QString::fromUtf8("Monthly"));
        sizePolicy.setHeightForWidth(Monthly->sizePolicy().hasHeightForWidth());
        Monthly->setSizePolicy(sizePolicy);
        Monthly->setFont(font1);
        Monthly->setAutoFillBackground(false);
        Monthly->setScaledContents(false);

        horizontalLayout_3->addWidget(Monthly);

        line = new QFrame(layoutWidget3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        MonthlyText = new QLabel(layoutWidget3);
        MonthlyText->setObjectName(QString::fromUtf8("MonthlyText"));
        sizePolicy.setHeightForWidth(MonthlyText->sizePolicy().hasHeightForWidth());
        MonthlyText->setSizePolicy(sizePolicy);
        MonthlyText->setFont(font1);
        MonthlyText->setAutoFillBackground(false);
        MonthlyText->setScaledContents(false);

        horizontalLayout_3->addWidget(MonthlyText);

        splitter->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Yearly = new QLabel(layoutWidget4);
        Yearly->setObjectName(QString::fromUtf8("Yearly"));
        sizePolicy.setHeightForWidth(Yearly->sizePolicy().hasHeightForWidth());
        Yearly->setSizePolicy(sizePolicy);
        Yearly->setFont(font1);
        Yearly->setAutoFillBackground(false);
        Yearly->setScaledContents(false);

        horizontalLayout_4->addWidget(Yearly);

        line_2 = new QFrame(layoutWidget4);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        YearlyText = new QLabel(layoutWidget4);
        YearlyText->setObjectName(QString::fromUtf8("YearlyText"));
        sizePolicy.setHeightForWidth(YearlyText->sizePolicy().hasHeightForWidth());
        YearlyText->setSizePolicy(sizePolicy);
        YearlyText->setFont(font1);
        YearlyText->setAutoFillBackground(false);
        YearlyText->setScaledContents(false);

        horizontalLayout_4->addWidget(YearlyText);

        splitter->addWidget(layoutWidget4);
        layoutWidget5 = new QWidget(centralwidget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(40, 30, 121, 45));
        verticalLayout = new QVBoxLayout(layoutWidget5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(layoutWidget5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        layoutWidget6 = new QWidget(centralwidget);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(41, 91, 121, 50));
        verticalLayout_5 = new QVBoxLayout(layoutWidget6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        SetCurrentPriceButton = new QPushButton(layoutWidget6);
        SetCurrentPriceButton->setObjectName(QString::fromUtf8("SetCurrentPriceButton"));

        verticalLayout_5->addWidget(SetCurrentPriceButton);

        CurrentPriceText = new QLineEdit(layoutWidget6);
        CurrentPriceText->setObjectName(QString::fromUtf8("CurrentPriceText"));

        verticalLayout_5->addWidget(CurrentPriceText);

        layoutWidget7 = new QWidget(centralwidget);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(198, 120, 181, 21));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        HoursLabel = new QLabel(layoutWidget7);
        HoursLabel->setObjectName(QString::fromUtf8("HoursLabel"));

        horizontalLayout_5->addWidget(HoursLabel);

        HoursText = new QLineEdit(layoutWidget7);
        HoursText->setObjectName(QString::fromUtf8("HoursText"));

        horizontalLayout_5->addWidget(HoursText);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 200, 141, 221));
        listWidgetDevices = new QListWidget(groupBox);
        listWidgetDevices->setObjectName(QString::fromUtf8("listWidgetDevices"));
        listWidgetDevices->setGeometry(QRect(10, 20, 111, 192));
        MainWindow->setCentralWidget(centralwidget);
        groupBox->raise();
        InsertPushButton->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        ResultBox->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow* MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        InsertPushButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        VoltsWattsLabel->setText(QCoreApplication::translate("MainWindow", "Volts", nullptr));
        AmpsLabel->setText(QCoreApplication::translate("MainWindow", "Amps", nullptr));
        NameLabel->setText(QCoreApplication::translate("MainWindow", "Device name", nullptr));
        ResultBox->setTitle(QCoreApplication::translate("MainWindow", "Results", nullptr));
        Daily->setText(QCoreApplication::translate("MainWindow", "Daily cost", nullptr));
        DailyText->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Monthly->setText(QCoreApplication::translate("MainWindow", "Monthly cost", nullptr));
        MonthlyText->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Yearly->setText(QCoreApplication::translate("MainWindow", "Yearly cost", nullptr));
        YearlyText->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Press to change mode", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Volts", nullptr));
        SetCurrentPriceButton->setText(QCoreApplication::translate("MainWindow", "Set current price", nullptr));
        HoursLabel->setText(QCoreApplication::translate("MainWindow", "Hours/day", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Devices", nullptr));
    } // retranslateUi

};


QT_END_NAMESPACE

#endif // UNTITLEDDYBHRL_H


#endif //POWERANALYSER_UI_MAINWINDOW_H
