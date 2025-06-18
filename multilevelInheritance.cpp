#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

// Derived class (inherits from Animal)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};

// Another derived class (inherits from Dog)
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy is weeping..." << endl;
    }
};

int main() {
    Puppy myPuppy;

    myPuppy.eat();   // From Animal
    myPuppy.bark();  // From Dog
    myPuppy.weep();  // From Puppy

    return 0;
}
