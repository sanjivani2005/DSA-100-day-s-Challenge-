#include <iostream>
using namespace std;

class Demo {
private:
    static int objectCount;  // Static member variable (shared by all objects)

public:
    Demo() {
        objectCount++;
    }

    static void showCount() {  // Static member function
        cout << "Total objects created: " << objectCount << endl;
    }

    void callCounter() {
        static int callCount = 0;  // Static local variable
        callCount++;
        cout << "Function called " << callCount << " times for this object.\n";
    }
};

// Static member variable must be defined outside the class
int Demo::objectCount = 0;

int main() {
    Demo d1, d2;

    d1.callCounter();
    d1.callCounter();

    d2.callCounter();

    // Static function can be called using class name (no object required)
    Demo::showCount();

    return 0;
}
