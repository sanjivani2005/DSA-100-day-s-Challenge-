#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() {  // Function overriding
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog d;
    d.sound();  // Calls Dog's version

    return 0;
}
