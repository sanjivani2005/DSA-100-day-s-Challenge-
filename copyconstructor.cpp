#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    // Constructor
    Student(std::string n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student& s) {
        name = s.name;
        age = s.age;
        std::cout << "Copy constructor called." << std::endl;
    }

    // Display student details
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create a Student object
    Student s1("John", 20);
    s1.display();

    // Create a copy of s1 using the copy constructor
    Student s2(s1);
    s2.display();

    return 0;
}
