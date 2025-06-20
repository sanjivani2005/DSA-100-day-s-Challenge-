#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) return 0;  // base case
    return n + sum(n - 1); // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of first " << n << " natural numbers is: " << sum(n) << endl;

    return 0;
}
