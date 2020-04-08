//
// Created by Andrea on 4/8/2020.
//

#include "PowerAnalyser.h"


unsigned int PowerAnalyser::getWatts() const {
    return watts;
}

void PowerAnalyser::setWatts(unsigned int watts) {
    PowerAnalyser::watts = watts;
}


float PowerAnalyser::getYearlyCost() const {
    return yearlyCost;
}

void PowerAnalyser::setYearlyCost(float yearlyCost) {
    PowerAnalyser::yearlyCost = yearlyCost;
}

float PowerAnalyser::getMontlyCost() const {
    return monthlyCost;
}

void PowerAnalyser::setMontlyCost(float montlyCost) {
    PowerAnalyser::monthlyCost = montlyCost;
}

float PowerAnalyser::getDailyCost() const {
    return dailyCost;
}

void PowerAnalyser::setDailyCost(float dailyCost) {
    PowerAnalyser::dailyCost = dailyCost;
}

void PowerAnalyser::calculateCosts() {
    dailyCost = (watts / CONVERSION_RATE) * HOURS_IN_A_DAY * currentPrice;
    monthlyCost = dailyCost * DAYS_IN_A_MONTH;
    yearlyCost = dailyCost * DAYS_IN_A_YEAR;

}

void PowerAnalyser::printCosts() {
    std::cout << name << ":" << std::endl;
    std::cout << "Daily cost is: " << dailyCost << std::endl;
    std::cout << "Monthly cost is: " << monthlyCost << std::endl;
    std::cout << "Yearly cost is: " << yearlyCost << std::endl;

}
