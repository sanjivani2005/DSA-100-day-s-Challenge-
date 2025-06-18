#include <iostream>
using namespace std;

// First base class
class Father {
public:
    void fatherTraits() {
        cout << "Father: Hardworking and disciplined." << endl;
    }
};

// Second base class
class Mother {
public:
    void motherTraits() {
        cout << "Mother: Caring and loving." << endl;
    }
};

// Derived class inheriting from both Father and Mother
class Child : public Father, public Mother {
public:
    void childTraits() {
        cout << "Child: Inherits traits from both parents." << endl;
    }
};

int main() {
    Child c;

    c.fatherTraits();   // From Father
    c.motherTraits();   // From Mother
    c.childTraits();    // From Child

    return 0;
}

