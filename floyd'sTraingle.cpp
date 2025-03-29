#include <iostream>
using namespace std;

int main() {
    int n=5;
   // cout << "Enter No: ";
   // cin >> n;

    int x = 1; // Initializing the number to print

    for (int i = 1; i <= n; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for columns
            cout << x << " "; // Print the current number
            x++; // Increment the number
        }
        cout << endl; // Move to the next line after each row
    }
    
    return 0;
}
