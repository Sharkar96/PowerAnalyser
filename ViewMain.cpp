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
    connect(ui->listWidgetDevices, SIGNAL(itemClicked(QListWidgetItem * )), this, SLOT(onItemClicked()));
    ui->widget->setVisible(false);

    ui->CurrentPriceText->setVisible(false);

}


void ViewMain::button_clicked() {
    controller->addDevice(ui->VoltsWattLineEdit->text().toInt(), ui->AmpsLineEdit->text().toInt(),
                          ui->NameLineEdit_2->text().toStdString(), ui->HoursText->text().toInt());
}


void ViewMain::clearInput() {
    ui->VoltsWattLineEdit->clear();
    ui->AmpsLineEdit->clear();
    ui->NameLineEdit_2->clear();
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

void ViewMain::onItemClicked() {
    displayDevice(controller->displayCosts(ui->listWidgetDevices->currentItem()->text().toStdString()));
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
    displayDevice(model->lastDevice());
    ui->listWidgetDevices->addItem(QString::fromStdString(model->lastDevice().getName()));

}

void ViewMain::displayDevice(const Device &d) {

    ui->DailyText->setText(QString::number(d.getDailyCost()));
    ui->MonthlyText->setText(QString::number(d.getMonthlyCost()));
    ui->YearlyText->setText(QString::number(d.getYearlyCost()));

}

