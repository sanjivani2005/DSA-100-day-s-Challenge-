#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key, int index = 0) {
    if(index == n)
        return -1;
    if(arr[index] == key)
        return index;
    return firstOccurrence(arr, n, key, index + 1);
}

int main() {
    int arr[] = {4, 2, 7, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int index = firstOccurrence(arr, n, key);

    if(index != -1)
        cout << "First occurrence of " << key << " is at index: " << index << endl;
    else
        cout << key << " not found in the array.\n";

    return 0;
}
