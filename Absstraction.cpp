#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
    void sleep() {
        cout << "Animal sleeps..." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;

    a = &d;
    a->sound();  // Dog's sound
    a->sleep();

    a = &c;
    a->sound();  // Cat's sound
    a->sleep();

    return 0;
}
