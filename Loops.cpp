//You need to compute the sum of digits for a very large number N (up to 10^100 ). If the sum itself has multiple digits, continue summing until a single-digit number is obtained. This single-digit sum is known as the Digital Root of the number.

#include <iostream>
using namespace std;

// Function to find digital root
int sumOfDigits(long long n) {
    int sum = 0;
    while (n > 0) {
        int lastDig = n % 10;
        sum += lastDig;
        n /= 10;
    }
    return sum;
}

// Function to compute digital root
int digitalRoot(string n) {
    int sum = 0;
    
    // Summing digits for large number
    for (char c : n) {
        sum += c - '0'; 
    }
    
    // Keep reducing sum until a single digit is obtained
    while (sum >= 10) {
        sum = sumOfDigits(sum);
    }
    
    return sum;
}

int main() {
    string n;
    cout << "Enter a large number: ";
    cin >> n;
    cout << "Digital Root: " << digitalRoot(n) << endl;
    return 0;
}
