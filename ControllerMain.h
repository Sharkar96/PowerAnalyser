//
// Created by Andrea on 4/12/2020.
//

#ifndef POWERANALYSER_CONTROLLERMAIN_H
#define POWERANALYSER_CONTROLLERMAIN_H

#include "ModelMain.h"

class ControllerMain {
public:
    explicit ControllerMain(ModelMain* m) : model{m} {};

    void switchMode();
    void addDevice(int v, int a, std::string n, int h);
    void setCurrentPrice(float currentPrice);
    const std::unique_ptr<Device>& displayCosts(const std::string& name);
    void saveSession();
    void loadSession();

    void removeDevice(const std::string& name);

private:
    ModelMain* model;
};


#endif //POWERANALYSER_CONTROLLERMAIN_H
