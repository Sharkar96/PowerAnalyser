//
// Created by Andrea on 4/8/2020.
//

#include "Device.h"


unsigned int Device::getWatts() const {
    return watts;
}

void Device::setWatts(unsigned int watts) {
    Device::watts = watts;
}


float Device::getYearlyCost() const {
    return yearlyCost;
}

void Device::setYearlyCost(float yearlyCost) {
    Device::yearlyCost = yearlyCost;
}

float Device::getMontlyCost() const {
    return monthlyCost;
}

void Device::setMontlyCost(float montlyCost) {
    Device::monthlyCost = montlyCost;
}

float Device::getDailyCost() const {
    return dailyCost;
}

void Device::setDailyCost(float dailyCost) {
    Device::dailyCost = dailyCost;
}

void Device::calculateCosts() {
    dailyCost = (watts / CONVERSION_RATE) * hourUsage * currentPrice;
    monthlyCost = dailyCost * DAYS_IN_A_MONTH;
    yearlyCost = dailyCost * DAYS_IN_A_YEAR;

}

void Device::printCosts() {
    std::cout << name << ":" << std::endl;
    std::cout << "Daily cost is: " << dailyCost << std::endl;
    std::cout << "Monthly cost is: " << monthlyCost << std::endl;
    std::cout << "Yearly cost is: " << yearlyCost << std::endl;

}
