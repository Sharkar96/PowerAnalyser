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
#include <memory>

class ModelMain : public Subject {
public:

    virtual ~ModelMain() {};
    void notifyModeChange() override;
    void notifyDeviceAdd() override;
    void notifyTotalYearlyCostChanged() override;
    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;

    bool isEmpty(); //checks if devices list is empty

    const std::unique_ptr<Device>& findDevice(const std::string& name);
    std::unique_ptr<Device>& lastDevice();
    void addDevice(int v, int a, const std::string& n, int h);
    void removeDevice(const std::string& name);
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
    std::vector<std::unique_ptr<Device>> devicesList;

};


#endif //POWERANALYSER_MODELMAIN_H
