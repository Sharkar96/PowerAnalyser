//
// Created by Andrea on 4/8/2020.
//

#include "Device.h"
Device::Device(std::string d) {
    char space = ' ';
    int i = 0;
    std::string w, cP, hU, dC, mC, yC;
    while(d[i] != space) {
        name = name + d[i];
        i++;
    }
    i++;
    while(d[i] != space) {
        w = w + d[i];
        i++;
    }
    i++;
    while(d[i] != space) {
        cP = cP + d[i];
        i++;
    }
    i++;
    while(d[i] != space) {
        hU = hU + d[i];
        i++;
    }
    i++;
    while(d[i] != space) {
        dC = dC + d[i];
        i++;
    }
    i++;
    while(d[i] != space) {
        mC = mC + d[i];
        i++;
    }
    i++;
    while(d[i] != space) {
        yC = yC + d[i];
        i++;
    }
    i++;
    watts = std::stof(w);
    currentPrice = std::stof(cP);
    hourUsage = std::stof(hU);
    dailyCost = std::stof(dC);
    monthlyCost = std::stof(mC);
    yearlyCost = std::stof(yC);
}

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

float Device::getMonthlyCost() const {
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


const std::string& Device::getName() const {
    return name;
}

void Device::setName(const std::string& n) {
    Device::name = n;
}

float Device::getCurrentPrice() const {
    return currentPrice;
}

std::string Device::savingFormat() {
    std::string a;
    a = name + " " + std::to_string(watts) + " " + std::to_string(currentPrice) + " " + std::to_string(hourUsage) +
        " " + std::to_string(dailyCost) + " " +
        std::to_string(monthlyCost) + " " + std::to_string(yearlyCost) + " ";
    return a;
}

unsigned int Device::getHourUsage() const {
    return hourUsage;
}

void Device::setHourUsage(unsigned int hourUsage) {
    Device::hourUsage = hourUsage;
}


