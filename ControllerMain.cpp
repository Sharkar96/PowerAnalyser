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

    if(!model->isMode() && (v < 0 || v > 250))
        throw std::out_of_range("volts must be between 0 and 250v");
    else if(model->isMode() && v < 0)
        throw std::out_of_range("watts cannot be under 0");
    else if(a < 0)
        throw std::out_of_range("amps cannot be under 0");
    else if(h > 24 || h < 0)
        throw std::out_of_range("hours can't exceed 24");
    else if(model->findDevice(n) != nullptr)
        throw std::invalid_argument("Device with this name already exists");
    else
        model->addDevice(v, a, n, h);

}

void ControllerMain::setCurrentPrice(float currentPrice) {
    Device::setCurrentP(currentPrice);
}

const Device& ControllerMain::displayCosts(std::string name) {
    return *model->findDevice(name);
}

void ControllerMain::removeDevice(std::string name) {
    model->removeDevice(name);
}

void ControllerMain::saveSession() {
    model->saveOnFile();
}
