#include <iostream>
#include "Device.h"
#include "ViewMain.h"
#include <QApplication>

int main(int argc, char* argv[]) {
    CURRENT_PRICE = 0.18;

    Device device1(5, "raspberry", 7);
    Device device2(300, "pc", 7);
    Device device3(5.7, "surface", 7);

    device1.printCosts();
    device2.printCosts();
    device3.printCosts();

    QApplication app(argc, argv);
    ViewMain viewMain;
    viewMain.show();

    return app.exec();

    return 0;
}
