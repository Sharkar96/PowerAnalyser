#include <iostream>
#include "Device.h"
int main() {
    CURRENT_PRICE = 0.15;
    Device appliance1(500, "phone");
    Device device1(10, 4, "raspberry");

    device1.printCosts();

    appliance1.printCosts();
    return 0;
}
