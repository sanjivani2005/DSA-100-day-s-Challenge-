#include <iostream>
using namespace std;

void printDecreasing(int n) {
    if (n == 0)
        return;  // base case
    cout << n << " ";
    printDecreasing(n - 1);  // recursive call
}

void printIncreasing(int n) {
    if (n == 0)
        return;  // base case
 
    printIncreasing(n - 1);  // recursive call
       cout << n << " ";
}


int main() {
    int num,num1;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Numbers in decreasing order:\n";
    printDecreasing(num);

    cout << "Enter a number: ";
    cin >> num1;

      cout << "Numbers in increasing order:\n";
    printIncreasing(num1);

    return 0;
}
