//
// Created by Andrea on 4/9/2020.
//

#ifndef POWERANALYSER_VIEWMAIN_H
#define POWERANALYSER_VIEWMAIN_H

#include <QMAinWindow>
#include "Ui_MainWindow.h"

class ViewMain : public QMainWindow {
Q_OBJECT
public:
    ViewMain(QWidget* parent = 0);
    ~ViewMain();
private:
    Ui_MainWindow* ui;

};


#endif //POWERANALYSER_VIEWMAIN_H
