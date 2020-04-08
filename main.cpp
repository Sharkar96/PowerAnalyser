#include <iostream>
#include "PowerAnalyser.h"
int main() {
    CURRENT_PRICE = 0.15;
    PowerAnalyser appliance1(500, "phone");

    appliance1.calculateCosts();
    appliance1.printCosts();
    return 0;
}
