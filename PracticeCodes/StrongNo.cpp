#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int fac(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    int sum = 0;

    while (temp > 0) {
        int d = temp % 10;
        sum += fac(d);  // Add factorial of digit to sum
        temp = temp / 10;
    }

    if (sum == n) {
        cout << n << " is a Strong Number." << endl;
    } else {
        cout << n << " is NOT a Strong Number." << endl;
    }

    return 0;
}
