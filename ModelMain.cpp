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

void ModelMain::addDevice(int v, int a, const std::string& n, int h) {
    Device* device;
    if(!mode)
        device = new Device(v, a, n, h);
    else
        device = new Device(v, n, h);

    devicesList.emplace_back(device);
    addTotalYearlyCost(device->getYearlyCost());
    notifyDeviceAdd();
}

std::unique_ptr<Device>& ModelMain::lastDevice() {
    return devicesList.back();
}

const std::unique_ptr<Device>& ModelMain::findDevice(const std::string& name) {
    for(const auto& i : devicesList)
        if(name == i->getName())
            return i;
    // FIXME for some reasons, without this code it doesn't work.
    std::unique_ptr<Device> a;
    if(a)
        std::cout << "culo";
    return nullptr;
}

bool ModelMain::isEmpty() {
    return devicesList.empty();
}

void ModelMain::removeDevice(const std::string& name) {
    for(auto i = devicesList.begin(); i != devicesList.end();)
        if((*i)->getName() == name) {
            subtractTotalYearlyCost((*i)->getYearlyCost());
            devicesList.erase(i);
        } else
            i++;
}

void ModelMain::notifyTotalYearlyCostChanged() {
    for(Observer* i: observers)
        i->updateStatusBar();
}

void ModelMain::addTotalYearlyCost(float cost) {
    Device::TotalYearlyPrice += cost;
    notifyTotalYearlyCostChanged();
}

void ModelMain::subtractTotalYearlyCost(float cost) {
    Device::TotalYearlyPrice -= cost;
    notifyTotalYearlyCostChanged();
}

void ModelMain::saveOnFile() {
    std::ofstream file("Devices.txt");

    if(file.is_open()) {
        if(!isEmpty()) {
            file << Device::TotalYearlyPrice << std::endl;
            for(auto& i :devicesList)
                file << i->savingFormat() << std::endl;
        }
        file << "$";
        file.close();
    } else
        // replace with throw
        std::cout << "can't open file";

}

void ModelMain::loadFromFile() {
    std::ifstream save("Devices.txt");

    if(save.is_open()) {
        std::string line;
        std::getline(save, line);
        if(line != "$") {
            Device::TotalYearlyPrice = std::stof(line);
            do {
                std::getline(save, line);
                if(line != "$") {
                    devicesList.emplace_back(new Device(line));
                    notifyDeviceAdd();
                }

            } while(!save.eof());
        }
        save.close();
    } else
        // replace with throw
        std::cout << "can't open file";
}


