#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char choice;

    cout << "Enter two operands: " << endl;
    cin >> a >> b;

    do {
        int n;
        cout << "\nEnter the operation you want to perform:\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
        cin >> n;

        switch (n) {
        case 1:
            c = a + b;
            cout << "Addition is: " << c << endl;
            break;
        case 2:
            c = a - b;
            cout << "Subtraction is: " << c << endl;
            break;
        case 3:
            c = a * b;
            cout << "Multiplication is: " << c << endl;
            break;
        case 4:
            if (b != 0) {
                c = a / b;
                cout << "Division is: " << c << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Enter a valid operation number (1-4)." << endl;
            break;
        }

        cout << "\nDo you want to perform another operation on the same numbers? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
