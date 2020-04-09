//
// Created by Andrea on 4/9/2020.
//

#include "ViewMain.h"

ViewMain::ViewMain(QWidget* parent) : QMainWindow(parent), ui(new Ui_MainWindow()) {
    ui->setupUi(this);
    connect(ui->InsertPushButton, SIGNAL(clicked()), this, SLOT(button_clicked()));
}

ViewMain::~ViewMain() {
    delete ui;
}

void ViewMain::button_clicked() {
    if(ui->VAbutton->isChecked())
        devicesList.emplace_back(new Device(ui->VoltsWattLineEdit->text().toInt(), ui->AmpsLineEdit->text().toInt(),
                                            ui->NameLineEdit->text().toStdString(), 7)); // TODO add hours text edit
    else if(ui->wattsButton->isChecked())
        devicesList.emplace_back(
                new Device(ui->VoltsWattLineEdit->text().toInt(), ui->NameLineEdit->text().toStdString(), 7));
    clearInput();
    std::cout << "clicked" << std::endl;

}

void ViewMain::clearInput() {
    ui->VoltsWattLineEdit->clear();
    ui->AmpsLineEdit->clear();
    ui->NameLineEdit->clear();
}
