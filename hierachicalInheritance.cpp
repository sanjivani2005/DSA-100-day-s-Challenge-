#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing..." << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.eat();
    d.bark();

    c.eat();
    c.meow();

    return 0;
}
