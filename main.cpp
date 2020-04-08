#include <iostream>
#include "Device.h"
int main() {
    CURRENT_PRICE = 0.18;

    Device device1(5, "raspberry", 7);
    Device device2(300, "pc", 7);
    device1.printCosts();
    device2.printCosts();


    return 0;
}
