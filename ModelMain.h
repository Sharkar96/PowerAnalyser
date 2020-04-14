//
// Created by Andrea on 4/12/2020.
//

#ifndef POWERANALYSER_MODELMAIN_H
#define POWERANALYSER_MODELMAIN_H

#include "Subject.h"
#include <list>
#include "Device.h"
#include <vector>

class ModelMain : public Subject {
public:

    virtual ~ModelMain() {};

    void notifyModeChange() override;
    void notifyDeviceAdd() override;
    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;


    void addDevice(int v, int a, std::string n, int h);
    void removeDevice();
    bool isMode() const;
    void setMode(bool mode);
    const Device &lastDevice();
private:
    bool mode;// true=watt mode, false= VA mode
    std::list<Observer*> observers;
    std::vector<Device*> devicesList;

};


#endif //POWERANALYSER_MODELMAIN_H
