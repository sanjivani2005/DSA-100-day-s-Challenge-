#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    // Base case: only one or zero elements are always sorted
    if (n == 0 || n == 1)
        return true;

    // If the current pair is not sorted
    if (arr[n - 2] > arr[n - 1])
        return false;

    // Recursive check for the rest of the array
    return isSorted(arr, n - 1);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    if(isSorted(arr, n))
        cout << "Array is sorted\n";
    else
        cout << "Array is not sorted\n";

    return 0;
}
