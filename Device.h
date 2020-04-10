//
// Created by Andrea on 4/8/2020.
//

#ifndef POWERANALYSER_DEVICE_H
#define POWERANALYSER_DEVICE_H

#include<iostream>


static const float CONVERSION_RATE = 1000.;
static unsigned short int HOURS_IN_A_DAY = 24;
static unsigned short int DAYS_IN_A_MONTH = 30;
static unsigned short int DAYS_IN_A_YEAR = 365;
static float CURRENT_PRICE = 0.18;


class Device {
public:
    Device(float w, std::string n, unsigned int h = HOURS_IN_A_DAY) : watts{w}, name{n}, hourUsage{h} {
        calculateCosts();
    };

    Device(unsigned int v, unsigned int a, std::string n, unsigned int h = HOURS_IN_A_DAY) : name{n}, hourUsage{h} {
        if(v > 0 && a > 0) {
            if(a > 10)//amps are in mA
                watts = (v * a) / CONVERSION_RATE;
            else
                watts = v * a;
        }
        calculateCosts();
    };

    void calculateCosts();
    void printCosts();


    unsigned int getWatts() const;
    void setWatts(unsigned int watts);
    float getYearlyCost() const;
    void setYearlyCost(float yearlyCost);
    float getMonthlyCost() const;
    void setMontlyCost(float montlyCost);
    float getDailyCost() const;
    void setDailyCost(float dailyCost);
private:
    float currentPrice{CURRENT_PRICE};
    float watts;
    std::string name;
    float yearlyCost{0.};
    float monthlyCost{0.};
    float dailyCost{0.};
    unsigned int hourUsage{HOURS_IN_A_DAY};
};


#endif //POWERANALYSER_DEVICE_H
