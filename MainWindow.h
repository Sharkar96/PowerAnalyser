//
// Created by Andrea on 4/9/2020.
//

#ifndef POWERANALYSER_MAINWINDOW_H
#define POWERANALYSER_MAINWINDOW_H


/********************************************************************************
** Form generated from reading UI file 'designerHPJWwz.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DESIGNERHPJWWZ_H
#define DESIGNERHPJWWZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QWidget* centralwidget;
    QPushButton* InsertPushButton;
    QWidget* widget;
    QVBoxLayout* verticalLayout;
    QRadioButton* VAbutton;
    QRadioButton* wattsButton;
    QWidget* widget1;
    QHBoxLayout* horizontalLayout;
    QVBoxLayout* verticalLayout_3;
    QLabel* VoltsWattsLabel;
    QLabel* AmpsLabel;
    QVBoxLayout* verticalLayout_2;
    QLineEdit* VoltsWattLineEdit;
    QLineEdit* AmpsLineEdit;
    QWidget* widget2;
    QVBoxLayout* verticalLayout_4;
    QLabel* NameLabel;
    QLineEdit* NameLineEdit;
    QStatusBar* statusbar;
    QButtonGroup* buttonGroup;

    void setupUi(QMainWindow* MainWindow) {
        if(MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        InsertPushButton = new QPushButton(centralwidget);
        InsertPushButton->setObjectName(QString::fromUtf8("InsertPushButton"));
        InsertPushButton->setGeometry(QRect(250, 160, 75, 23));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 40, 84, 44));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        VAbutton = new QRadioButton(widget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(VAbutton);
        VAbutton->setObjectName(QString::fromUtf8("VAbutton"));

        verticalLayout->addWidget(VAbutton);

        wattsButton = new QRadioButton(widget);
        buttonGroup->addButton(wattsButton);
        wattsButton->setObjectName(QString::fromUtf8("wattsButton"));

        verticalLayout->addWidget(wattsButton);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(220, 70, 173, 48));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        VoltsWattsLabel = new QLabel(widget1);
        VoltsWattsLabel->setObjectName(QString::fromUtf8("VoltsWattsLabel"));

        verticalLayout_3->addWidget(VoltsWattsLabel);

        AmpsLabel = new QLabel(widget1);
        AmpsLabel->setObjectName(QString::fromUtf8("AmpsLabel"));

        verticalLayout_3->addWidget(AmpsLabel);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        VoltsWattLineEdit = new QLineEdit(widget1);
        VoltsWattLineEdit->setObjectName(QString::fromUtf8("VoltsWattLineEdit"));

        verticalLayout_2->addWidget(VoltsWattLineEdit);

        AmpsLineEdit = new QLineEdit(widget1);
        AmpsLineEdit->setObjectName(QString::fromUtf8("AmpsLineEdit"));

        verticalLayout_2->addWidget(AmpsLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(250, 10, 116, 41));
        verticalLayout_4 = new QVBoxLayout(widget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        NameLabel = new QLabel(widget2);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        verticalLayout_4->addWidget(NameLabel);

        NameLineEdit = new QLineEdit(widget2);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));

        verticalLayout_4->addWidget(NameLineEdit);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow* MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        InsertPushButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        VAbutton->setText(QCoreApplication::translate("MainWindow", "Volts / Amps", nullptr));
        wattsButton->setText(QCoreApplication::translate("MainWindow", "Watts", nullptr));
        VoltsWattsLabel->setText(QCoreApplication::translate("MainWindow", "Volts", nullptr));
        AmpsLabel->setText(QCoreApplication::translate("MainWindow", "Amps", nullptr));
        NameLabel->setText(QCoreApplication::translate("MainWindow", "Device name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow : public Ui_MainWindow {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // DESIGNERHPJWWZ_H


#endif //POWERANALYSER_MAINWINDOW_H
