#include <iostream>
using namespace std;

// Class definition
class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Method to set data
    void setData(string n, int roll, float m) {
        name = n;
        rollNumber = roll;
        marks = m;
    }

    // Method to display data
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;  // Creating object

    // Setting and displaying data
    s1.setData("Sanjivani", 101, 92.5);
    s1.displayData();

    return 0;
}
