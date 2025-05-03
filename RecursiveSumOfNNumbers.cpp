#include <iostream>
using namespace std;

// Recursive function to find the sum of first n natural numbers
int sum(int n) {
    // Base case: if n is 0, return 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: sum n + sum of (n-1)
    return n + sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Output the sum of the first n natural numbers
    cout << "The sum of first " << n << " numbers is: " << sum(n) << endl;
    
