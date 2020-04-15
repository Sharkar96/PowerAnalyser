//
// Created by Andrea on 4/9/2020.
//

#ifndef POWERANALYSER_UI_MAINWINDOW_H
#define POWERANALYSER_UI_MAINWINDOW_H
/********************************************************************************
** Form generated from reading UI file 'untitleddGqTEM.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UNTITLEDDGQTEM_H
#define UNTITLEDDGQTEM_H

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
    QWidget* widget;
    QPushButton* removeButton;
    QWidget* layoutWidget;
    QVBoxLayout* verticalLayout_6;
    QHBoxLayout* horizontalLayout;
    QVBoxLayout* verticalLayout_3;
    QLabel* VoltsWattsLabel;
    QLabel* AmpsLabel;
    QVBoxLayout* verticalLayout_2;
    QLineEdit* VoltsWattLineEdit;
    QLineEdit* AmpsLineEdit;
    QHBoxLayout* horizontalLayout_5;
    QLabel* HoursLabel;
    QLineEdit* HoursText;
    QPushButton* InsertPushButton;
    QWidget* layoutWidget_3;
    QVBoxLayout* verticalLayout;
    QLabel* label;
    QPushButton* pushButton;
    QGroupBox* ResultBox;
    QSplitter* splitter;
    QWidget* layoutWidget_4;
    QHBoxLayout* horizontalLayout_2;
    QLabel* Daily;
    QFrame* line_3;
    QLabel* DailyText;
    QWidget* layoutWidget_5;
    QHBoxLayout* horizontalLayout_3;
    QLabel* Monthly;
    QFrame* line;
    QLabel* MonthlyText;
    QWidget* layoutWidget_6;
    QHBoxLayout* horizontalLayout_4;
    QLabel* Yearly;
    QFrame* line_2;
    QLabel* YearlyText;
    QWidget* layoutWidget_7;
    QHBoxLayout* horizontalLayout_6;
    QLabel* currentPriceLabel;
    QLabel* currentPriceLabel2;
    QWidget* layoutWidget_8;
    QVBoxLayout* verticalLayout_5;
    QPushButton* SetCurrentPriceButton;
    QLineEdit* CurrentPriceText;
    QGroupBox* groupBox;
    QListWidget* listWidgetDevices;
    QWidget* layoutWidget_2;
    QVBoxLayout* verticalLayout_7;
    QLabel* NameLabel_2;
    QLineEdit* NameLineEdit_2;
    QStatusBar* statusbar;

    void setupUi(QMainWindow* MainWindow) {
        if(MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(622, 562);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 80, 471, 421));
        widget->setMaximumSize(QSize(471, 421));
        removeButton = new QPushButton(widget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(410, 180, 21, 21));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 40, 174, 77));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
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


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        HoursLabel = new QLabel(layoutWidget);
        HoursLabel->setObjectName(QString::fromUtf8("HoursLabel"));

        horizontalLayout_5->addWidget(HoursLabel);

        HoursText = new QLineEdit(layoutWidget);
        HoursText->setObjectName(QString::fromUtf8("HoursText"));

        horizontalLayout_5->addWidget(HoursText);


        verticalLayout_6->addLayout(horizontalLayout_5);

        InsertPushButton = new QPushButton(widget);
        InsertPushButton->setObjectName(QString::fromUtf8("InsertPushButton"));
        InsertPushButton->setGeometry(QRect(280, 130, 111, 23));
        layoutWidget_3 = new QWidget(widget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 0, 121, 45));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(layoutWidget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        ResultBox = new QGroupBox(widget);
        ResultBox->setObjectName(QString::fromUtf8("ResultBox"));
        ResultBox->setGeometry(QRect(0, 170, 221, 171));
        QFont font;
        font.setPointSize(10);
        ResultBox->setFont(font);
        splitter = new QSplitter(ResultBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 40, 191, 91));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget_4 = new QWidget(splitter);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Daily = new QLabel(layoutWidget_4);
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

        line_3 = new QFrame(layoutWidget_4);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        DailyText = new QLabel(layoutWidget_4);
        DailyText->setObjectName(QString::fromUtf8("DailyText"));
        sizePolicy.setHeightForWidth(DailyText->sizePolicy().hasHeightForWidth());
        DailyText->setSizePolicy(sizePolicy);
        DailyText->setFont(font1);
        DailyText->setAutoFillBackground(false);
        DailyText->setScaledContents(false);

        horizontalLayout_2->addWidget(DailyText);

        splitter->addWidget(layoutWidget_4);
        layoutWidget_5 = new QWidget(splitter);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Monthly = new QLabel(layoutWidget_5);
        Monthly->setObjectName(QString::fromUtf8("Monthly"));
        sizePolicy.setHeightForWidth(Monthly->sizePolicy().hasHeightForWidth());
        Monthly->setSizePolicy(sizePolicy);
        Monthly->setFont(font1);
        Monthly->setAutoFillBackground(false);
        Monthly->setScaledContents(false);

        horizontalLayout_3->addWidget(Monthly);

        line = new QFrame(layoutWidget_5);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        MonthlyText = new QLabel(layoutWidget_5);
        MonthlyText->setObjectName(QString::fromUtf8("MonthlyText"));
        sizePolicy.setHeightForWidth(MonthlyText->sizePolicy().hasHeightForWidth());
        MonthlyText->setSizePolicy(sizePolicy);
        MonthlyText->setFont(font1);
        MonthlyText->setAutoFillBackground(false);
        MonthlyText->setScaledContents(false);

        horizontalLayout_3->addWidget(MonthlyText);

        splitter->addWidget(layoutWidget_5);
        layoutWidget_6 = new QWidget(splitter);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Yearly = new QLabel(layoutWidget_6);
        Yearly->setObjectName(QString::fromUtf8("Yearly"));
        sizePolicy.setHeightForWidth(Yearly->sizePolicy().hasHeightForWidth());
        Yearly->setSizePolicy(sizePolicy);
        Yearly->setFont(font1);
        Yearly->setAutoFillBackground(false);
        Yearly->setScaledContents(false);

        horizontalLayout_4->addWidget(Yearly);

        line_2 = new QFrame(layoutWidget_6);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        YearlyText = new QLabel(layoutWidget_6);
        YearlyText->setObjectName(QString::fromUtf8("YearlyText"));
        sizePolicy.setHeightForWidth(YearlyText->sizePolicy().hasHeightForWidth());
        YearlyText->setSizePolicy(sizePolicy);
        YearlyText->setFont(font1);
        YearlyText->setAutoFillBackground(false);
        YearlyText->setScaledContents(false);

        horizontalLayout_4->addWidget(YearlyText);

        splitter->addWidget(layoutWidget_6);
        layoutWidget_7 = new QWidget(ResultBox);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(110, 10, 101, 20));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        currentPriceLabel = new QLabel(layoutWidget_7);
        currentPriceLabel->setObjectName(QString::fromUtf8("currentPriceLabel"));
        QFont font2;
        font2.setPointSize(8);
        currentPriceLabel->setFont(font2);

        horizontalLayout_6->addWidget(currentPriceLabel);

        currentPriceLabel2 = new QLabel(layoutWidget_7);
        currentPriceLabel2->setObjectName(QString::fromUtf8("currentPriceLabel2"));
        QFont font3;
        font3.setPointSize(9);
        currentPriceLabel2->setFont(font3);

        horizontalLayout_6->addWidget(currentPriceLabel2);

        layoutWidget_8 = new QWidget(widget);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(21, 61, 121, 50));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        SetCurrentPriceButton = new QPushButton(layoutWidget_8);
        SetCurrentPriceButton->setObjectName(QString::fromUtf8("SetCurrentPriceButton"));

        verticalLayout_5->addWidget(SetCurrentPriceButton);

        CurrentPriceText = new QLineEdit(layoutWidget_8);
        CurrentPriceText->setObjectName(QString::fromUtf8("CurrentPriceText"));

        verticalLayout_5->addWidget(CurrentPriceText);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(270, 170, 131, 221));
        listWidgetDevices = new QListWidget(groupBox);
        listWidgetDevices->setObjectName(QString::fromUtf8("listWidgetDevices"));
        listWidgetDevices->setGeometry(QRect(10, 20, 101, 192));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(340, 30, 116, 41));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        NameLabel_2 = new QLabel(layoutWidget_2);
        NameLabel_2->setObjectName(QString::fromUtf8("NameLabel_2"));

        verticalLayout_7->addWidget(NameLabel_2);

        NameLineEdit_2 = new QLineEdit(layoutWidget_2);
        NameLineEdit_2->setObjectName(QString::fromUtf8("NameLineEdit_2"));

        verticalLayout_7->addWidget(NameLineEdit_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow* MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        VoltsWattsLabel->setText(QCoreApplication::translate("MainWindow", "Volts", nullptr));
        AmpsLabel->setText(QCoreApplication::translate("MainWindow", "Amps", nullptr));
        HoursLabel->setText(QCoreApplication::translate("MainWindow", "Hours/day", nullptr));
        InsertPushButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Press to change mode", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Volts", nullptr));
        ResultBox->setTitle(QCoreApplication::translate("MainWindow", "Results", nullptr));
        Daily->setText(QCoreApplication::translate("MainWindow", "Daily cost", nullptr));
        DailyText->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Monthly->setText(QCoreApplication::translate("MainWindow", "Monthly cost", nullptr));
        MonthlyText->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Yearly->setText(QCoreApplication::translate("MainWindow", "Yearly cost", nullptr));
        YearlyText->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        currentPriceLabel->setText(QCoreApplication::translate("MainWindow", "Current Price", nullptr));
        currentPriceLabel2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        SetCurrentPriceButton->setText(QCoreApplication::translate("MainWindow", "Set current price", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Devices", nullptr));
        NameLabel_2->setText(QCoreApplication::translate("MainWindow", "Device name", nullptr));
    } // retranslateUi

};


QT_END_NAMESPACE

#endif // UNTITLEDDGQTEM_H


#endif //POWERANALYSER_UI_MAINWINDOW_H
