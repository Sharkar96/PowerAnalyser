//
// Created by Andrea on 4/12/2020.
//

#include "ControllerMain.h"


void ControllerMain::switchMode() {
    if(model->isMode())
        model->setMode(false);
    else
        model->setMode(true);
}

void ControllerMain::addDevice(int v, int a, std::string n, int h) {
    //TODO check if all the parameters requirement are in check
    model->addDevice(v, a, n, h);

}

void ControllerMain::setCurrentPrice(float currentPrice) {
    CURRENT_PRICE = currentPrice;
}
