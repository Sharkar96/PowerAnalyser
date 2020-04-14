#include <iostream>
#include "Device.h"
#include "ViewMain.h"
#include <QApplication>
#include "ControllerMain.h"

int main(int argc, char* argv[]) {
    CURRENT_PRICE = 0.18;

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    ModelMain* model = new ModelMain;
    ControllerMain* controller = new ControllerMain(model);
    ViewMain viewMain(model, controller);
    viewMain.show();

    return app.exec();

    return 0;
}
