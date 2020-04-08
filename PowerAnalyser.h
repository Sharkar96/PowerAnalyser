//
// Created by Andrea on 4/8/2020.
//

#ifndef POWERANALYSER_POWERANALYSER_H
#define POWERANALYSER_POWERANALYSER_H

#include<iostream>


static float w_TO_Kw_CONVERSION_RATE = 1000.;
static float mA_TO_A_CONVERSION_RATE = 1000.;
static unsigned short int HOURS_IN_A_DAY = 24;
static unsigned short int DAYS_IN_A_MONTH = 30;
static unsigned short int DAYS_IN_A_YEAR = 365;

enum Currency {
    euros, dollars
};

class PowerAnalyser {
public:
    PowerAnalyser(unsigned int w) : watts{w} {};

    PowerAnalyser(unsigned int v, unsigned int a) {
        if(v > 0 && a > 0) {
            if(a > 10)//amps are in mA
                PowerAnalyser((v * a) / mA_TO_A_CONVERSION_RATE);
            else
                PowerAnalyser(v * a);
        }
    };
    void calculateCosts();
    void printCosts();

    float getCurrentPrice();
    void setCurrentPrice(float currentPrice);
    unsigned int getWatts() const;
    void setWatts(unsigned int watts);
    float getYearlyCost() const;
    void setYearlyCost(float yearlyCost);
    float getMontlyCost() const;
    void setMontlyCost(float montlyCost);
    float getDailyCost() const;
    void setDailyCost(float dailyCost);
private:
    float CURRENT_PRICE;

    unsigned int watts;

    float yearlyCost{0.};
    float monthlyCost{0.};
    float dailyCost{0.};
};


#endif //POWERANALYSER_POWERANALYSER_H
