#include <iostream>
using namespace std;

// Base Class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started\n";
    }

    void stop() {
        cout << "Vehicle stopped\n";
    }
};

// Derived Class
class Car : public Vehicle {
public:
    void honk() {
        cout << "Car is honking: Beep Beep!\n";
    }
};

int main() {
    Car myCar;

    myCar.start();  // Inherited from Vehicle
    myCar.honk();   // Defined in Car
    myCar.stop();   // Inherited from Vehicle

    return 0;
}
