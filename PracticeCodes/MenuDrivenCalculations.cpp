#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate area of basic shapes
void calculateArea() {
    int choice;
    double area = 0;
    cout << "\n--- Area Calculator ---\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter radius: ";
            cin >> radius;
            area = M_PI * radius * radius;
            cout << "Area of Circle: " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter length and width: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of Rectangle: " << area << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
            break;
        }
        default:
            cout << "Invalid shape choice.\n";
    }
}

// Function to calculate electricity bill based on units
void calculateUnits() {
    double units, bill;
    cout << "\n--- Electricity Bill Calculator ---\n";
    cout << "Enter number of units consumed: ";
    cin >> units;

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = (100 * 1.5) + (units - 100) * 2.5;
    else
        bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4.0;

    cout << "Electricity Bill: ₹" << bill << endl;
}

// Main program with menu
int main() {
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Calculate Area\n";
        cout << "2. Calculate Units\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateArea();
                break;
            case 2:
                calculateUnits();
                break;
            case 3:
                cout << "Exiting program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
