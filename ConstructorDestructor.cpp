//Create a C++ class named Employee that stores an employee's Name and ID.

//Write a Constructor that initializes these values when an object is created.

//Write a Destructor that prints a message when an object is destroyed.

//Demonstrate the creation of two employee objects in main() and show how the destructor is automatically called when the objects go out of scope.

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    // Constructor
    Employee(string empName, int empID) {
        name = empName;
        id = empID;
        cout << "Constructor called for " << name << " with ID " << id << endl;
    }

    // Member function to display details
    void display() {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Creating Employee objects..." << endl;

    Employee emp1("Alice", 101);
    Employee emp2("Bob", 102);

    cout << "\nDisplaying Employee Details:" << endl;
    emp1.display();
    emp2.display();

    cout << "Exiting main function..." << endl;
    return 0;
}
