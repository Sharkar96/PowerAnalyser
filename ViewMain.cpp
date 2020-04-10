//
// Created by Andrea on 4/9/2020.
//

#include "ViewMain.h"

ViewMain::ViewMain(QWidget* parent) : QMainWindow(parent), ui(new Ui_MainWindow()) {

    ui->setupUi(this);
    connect(ui->InsertPushButton, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(switchMode()));
    connect(ui->SetCurrentPriceButton, SIGNAL(clicked()), this, SLOT(setCurrentPrice()));
    ui->CurrentPriceText->setVisible(false);

}

ViewMain::~ViewMain() {
    delete ui;
}

void ViewMain::button_clicked() {
    if(!mode)
        devicesList.emplace_back(new Device(ui->VoltsWattLineEdit->text().toInt(), ui->AmpsLineEdit->text().toInt(),
                                            ui->NameLineEdit->text().toStdString(), ui->HoursText->text().toInt()));
    else if(mode)
        devicesList.emplace_back(
                new Device(ui->VoltsWattLineEdit->text().toInt(), ui->NameLineEdit->text().toStdString(),
                           ui->HoursText->text().toInt()));
    clearInput();
    devicesList.back()->printCosts();
    displayDeviceCosts(*devicesList.back());

}

void ViewMain::clearInput() {
    ui->VoltsWattLineEdit->clear();
    ui->AmpsLineEdit->clear();
    ui->NameLineEdit->clear();
    ui->HoursText->clear();
}

void ViewMain::goVAmode() {
    ui->pushButton->setText("Volts");
    ui->VoltsWattsLabel->setText("Volts");
    ui->AmpsLineEdit->setVisible(true);
    ui->AmpsLabel->setVisible(true);

}

void ViewMain::goWattMode() {
    ui->pushButton->setText("Watts");
    ui->VoltsWattsLabel->setText("Watts");
    ui->AmpsLineEdit->setVisible(false);
    ui->AmpsLabel->setVisible(false);
}

void ViewMain::switchMode() {
    if(mode) {
        mode = false;
        goVAmode();
    } else {
        mode = true;
        goWattMode();
    }

}

void ViewMain::displayDeviceCosts(Device &a) const {
    ui->DailyText->setText(QString::number(a.getDailyCost()));
    ui->MonthlyText->setText(QString::number(a.getMonthlyCost()));
    ui->YearlyText->setText(QString::number(a.getYearlyCost()));
}

void ViewMain::setCurrentPrice() {
    if(ui->CurrentPriceText->isVisible()) {
        if(ui->CurrentPriceText->text() != "")
            CURRENT_PRICE = ui->CurrentPriceText->text().toFloat();
        ui->CurrentPriceText->setVisible(false);
    } else
        ui->CurrentPriceText->setVisible(true);
}


