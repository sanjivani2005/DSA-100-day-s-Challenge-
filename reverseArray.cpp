#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

void reverseArray(int *arr, int n) {
    int start = 0;
    int end = n - 1;
    
    while(start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {5, 4, 3, 8, 6};
    int n = sizeof(arr) / sizeof(int);

    reverseArray(arr, n);

    printArr(arr, n);

    return 0;
}
