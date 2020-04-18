//
// Created by Andrea on 4/12/2020.
//

#include "ModelMain.h"


void ModelMain::notifyModeChange() {
    for(Observer* i: observers)
        i->updateMode();
}

void ModelMain::notifyDeviceAdd() {
    for(Observer* i: observers)
        i->updateDevice();
}

void ModelMain::addObserver(Observer* ob) {
    observers.emplace_back(ob);
}

void ModelMain::removeObserver(Observer* ob) {
    observers.remove(ob);
}

bool ModelMain::isMode() const {
    return mode;
}

void ModelMain::setMode(bool mode) {
    ModelMain::mode = mode;
    notifyModeChange();
}

void ModelMain::addDevice(int v, int a, std::string n, int h) {
    if(!mode)
        devicesList.emplace_back(new Device(v, a, n, h));
    else if(mode)
        devicesList.emplace_back(new Device(v, n, h));
    notifyDeviceAdd();
}

const Device& ModelMain::lastDevice() {
    return (*devicesList.back());
}

const Device* ModelMain::findDevice(std::string name) {
    Device* a = nullptr;
    for(auto i : devicesList)
        if(name == i->getName())
            a = i;
    return a;
}

bool ModelMain::isEmpty() {
    return devicesList.empty();
}

void ModelMain::removeDevice(std::string name) {
    auto i = devicesList.begin();

    while(i != devicesList.end())
        if((*i)->getName() == name) {
            delete *i; //the object is a pointer, so it has to be deleted before being
            // removed from the vector
            devicesList.erase(i);
        } else
            i++;
}


