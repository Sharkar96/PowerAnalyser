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
    std::cout << "clicked" << std::endl;
}