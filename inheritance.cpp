#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonInfo(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNumber;

public:
    void setStudentInfo(string n, int a, int r) {
        setPersonInfo(n, a);  // Access base class method
        rollNumber = r;
    }

    void displayStudentInfo() {
        displayPersonInfo();  // Call base class method
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s1;
    s1.setStudentInfo("Sanjivani", 19, 101);
    s1.displayStudentInfo();

    return 0;
}
