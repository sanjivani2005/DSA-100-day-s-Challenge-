#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void display() {
        cout << "I am a person." << endl;
    }
};

// Derived from Person
class Employee : public Person {
public:
    void work() {
        cout << "I am an employee." << endl;
    }
};

// Another base class
class Student {
public:
    void study() {
        cout << "I am a student." << endl;
    }
};

// Derived class from both Employee and Student (Hybrid Inheritance)
class Intern : public Employee, public Student {
public:
    void internRole() {
        cout << "I am an intern (employee + student)." << endl;
    }
};

int main() {
    Intern i;
    i.display();      // From Person (via Employee)
    i.work();         // From Employee
    i.study();        // From Student
    i.internRole();   // Own method

    return 0;
}
