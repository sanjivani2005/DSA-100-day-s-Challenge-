#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* a;  // Base class pointer
    Dog d;
    a = &d;//run time binding
    a->sound();  // Calls Dog's version due to virtual function

    return 0;
}
