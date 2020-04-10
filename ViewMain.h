//
// Created by Andrea on 4/9/2020.
//

#ifndef POWERANALYSER_VIEWMAIN_H
#define POWERANALYSER_VIEWMAIN_H

#include <iostream>
#include <QMAinWindow>
#include "Ui_MainWindow.h"
#include "Device.h"
#include <vector>

class ViewMain : public QMainWindow {
Q_OBJECT
public:
    ViewMain(QWidget* parent = 0);
    ~ViewMain();

    void clearInput();
    void goWattMode();
    void goVAmode();
    void displayDeviceCosts(Device &a) const;
private slots:
    void button_clicked();
    void switchMode();
private:
    bool mode; // true=watt mode, false= VA mode
    Ui_MainWindow* ui;
    std::vector<Device*> devicesList;
};


#endif //POWERANALYSER_VIEWMAIN_H
