//
// Created by Andrea on 4/12/2020.
//

#ifndef POWERANALYSER_MODELMAIN_H
#define POWERANALYSER_MODELMAIN_H

#include "Subject.h"
#include "Device.h"
#include <string>
#include <list>
#include <vector>
#include <fstream>


class ModelMain : public Subject {
public:

    virtual ~ModelMain() {};
    void notifyModeChange() override;
    void notifyDeviceAdd() override;
    void notifyTotalYearlyCostChanged() override;
    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;

    bool isEmpty(); //checks if devices list is empty

    const Device* findDevice(std::string name);
    const Device& lastDevice();
    void addDevice(int v, int a, std::string n, int h);
    void removeDevice(std::string name);
    void addTotalYearlyCost(float cost);
    void subtractTotalYearlyCost(float cost);
    void saveOnFile();
    void loadFromFile();

    //GETTER AND SETTER
    bool isMode() const;
    void setMode(bool mode);

private:
    bool mode;// true=watt mode, false= VA mode
    std::list<Observer*> observers;
    std::vector<Device*> devicesList;

};


#endif //POWERANALYSER_MODELMAIN_H
