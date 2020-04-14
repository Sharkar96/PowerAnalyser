//
// Created by Andrea on 4/9/2020.
//

#include "ViewMain.h"

ViewMain::ViewMain(ModelMain* m, ControllerMain* c, QWidget* parent) : model{m}, controller{c}, QMainWindow(parent),
                                                                       ui(new Ui_MainWindow()) {
    model->addObserver(this);
    ui->setupUi(this);
    connect(ui->InsertPushButton, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(switchMode()));
    connect(ui->SetCurrentPriceButton, SIGNAL(clicked()), this, SLOT(setCurrentPrice()));
    ui->CurrentPriceText->setVisible(false);

}


void ViewMain::button_clicked() {
    controller->addDevice(ui->VoltsWattLineEdit->text().toInt(), ui->AmpsLineEdit->text().toInt(),
                          ui->NameLineEdit->text().toStdString(), ui->HoursText->text().toInt());
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
    controller->switchMode();
}


void ViewMain::setCurrentPrice() {
    if(ui->CurrentPriceText->isVisible()) {
        controller->setCurrentPrice(ui->CurrentPriceText->text().toFloat());
        ui->CurrentPriceText->setVisible(false);
    } else
        ui->CurrentPriceText->setVisible(true);
}

void ViewMain::updateMode() {
    if(model->isMode())
        goWattMode();
    else
        goVAmode();
}

void ViewMain::updateDevice() {
    clearInput();
    ui->DailyText->setText(QString::number(model->lastDevice().getDailyCost()));
    ui->MonthlyText->setText(QString::number(model->lastDevice().getMonthlyCost()));
    ui->YearlyText->setText(QString::number(model->lastDevice().getYearlyCost()));

    ui->listWidgetDevices->addItem(QString::fromStdString(model->lastDevice().getName()));

}


