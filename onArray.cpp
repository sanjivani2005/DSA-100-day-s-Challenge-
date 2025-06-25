#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to print the array
void PrintArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Backtracking function
void changeArr(int arr[], int n, int i) {
    if(i == n) {
        PrintArr(arr, n);
        return; // Important to stop recursion
    }

    // Perform action
    arr[i] = i + 1;

    // Recursive call
    changeArr(arr, n, i + 1);

    // Backtrack step
    arr[i] -= 2;
}

int main() {
    int arr[5] = {0};  // Initialize array with 0s
    int n = 5;

    changeArr(arr, n, 0);

    return 0;
}
