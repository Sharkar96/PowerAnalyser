//
// Created by Andrea on 4/9/2020.
//

#include "ViewMain.h"

ViewMain::ViewMain(QWidget* parent) : QMainWindow(parent), ui(new Ui_MainWindow()) {
    ui->setupUi(this);

}

ViewMain::~ViewMain() {
    delete ui;
}