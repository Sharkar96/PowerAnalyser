#include <iostream>
#include "Device.h"
#include "ViewMain.h"
#include <QApplication>

int main(int argc, char* argv[]) {
    CURRENT_PRICE = 0.18;

    QApplication app(argc, argv);
    ViewMain viewMain;
    viewMain.show();

    return app.exec();

    return 0;
}
