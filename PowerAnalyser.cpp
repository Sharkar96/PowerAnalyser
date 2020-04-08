//
// Created by Andrea on 4/8/2020.
//

#include "PowerAnalyser.h"

float PowerAnalyser::getCurrentPrice() {
    return CURRENT_PRICE;
}

void PowerAnalyser::setCurrentPrice(float currentPrice) {
    CURRENT_PRICE = currentPrice;
}

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
    dailyCost = (watts / w_TO_Kw_CONVERSION_RATE) * HOURS_IN_A_DAY * CURRENT_PRICE;
    monthlyCost = dailyCost * DAYS_IN_A_MONTH;
    yearlyCost = dailyCost * DAYS_IN_A_YEAR;

}

void PowerAnalyser::printCosts() {
    Currency currency = euros;
    std::cout << "Daily cost is: " << dailyCost << currency << std::endl;
    std::cout << "Monthly cost is: " << monthlyCost << currency << std::endl;
    std::cout << "Yearly cost is: " << yearlyCost << currency << std::endl;

}
