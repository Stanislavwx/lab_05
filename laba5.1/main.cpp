#include "transport.h"

int main() {
    cout << "=== Creating Car ===\n";
    Car myCar;
    myCar.info();     // з Vehicle
    myCar.start();    // з Engine
    myCar.move();     // з Transport
    myCar.drive();    // з Car
    cout << "=== Exiting main ===\n";
    return 0;
}
