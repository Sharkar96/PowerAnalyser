//
// Created by Andrea on 4/9/2020.
//

#ifndef POWERANALYSER_VIEWMAIN_H
#define POWERANALYSER_VIEWMAIN_H

#include <iostream>
#include <QMAinWindow>
#include "Ui_MainWindow.h"
#include "Observer.h"
#include "ModelMain.h"
#include "ControllerMain.h"

class ViewMain : public QMainWindow, public Observer {
Q_OBJECT
public:
    ViewMain(ModelMain* m, ControllerMain* c, QWidget* parent = 0);

    ~ViewMain() {
        delete ui;
        model->removeObserver(this);
    };

    void goWattMode();
    void goVAmode();
    void clearInput();

    void updateDevice() override;
    void updateMode() override;

private slots:
    void setCurrentPrice();
    void button_clicked();
    void switchMode();
    void onItemClicked();

private:
    ControllerMain* controller;
    ModelMain* model;
    Ui_MainWindow* ui;

};


#endif //POWERANALYSER_VIEWMAIN_H
