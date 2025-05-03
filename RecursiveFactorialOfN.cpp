#include <iostream>
using namespace std;

// Recursive function to find the factorial of n
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Output the factorial of n
    cout << "The factorial of " << n << " is: " << factorial(n) << endl;
    
    return 0;
}
