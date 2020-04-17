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
    Device::setCurrentP(currentPrice);
}

const Device &ControllerMain::displayCosts(std::string name) {
    return model->findDevice(name);
}

void ControllerMain::removeDevice(std::string name) {
    model->removeDevice(name);
}
