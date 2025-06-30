#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};

int main() {
    Dog myDog;

    myDog.eat();   // Inherited from Animal
    myDog.bark();  // Defined in Dog

    return 0;
}
