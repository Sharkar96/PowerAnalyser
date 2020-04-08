#include <iostream>
#include "Device.h"
int main() {
    CURRENT_PRICE = 0.15;
    Device appliance1(500, "phone");

    appliance1.calculateCosts();
    appliance1.printCosts();
    return 0;
}
