#include <iostream>
using namespace std;

void replaceWithNearestSmallerRight(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int nearestSmaller = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                nearestSmaller = arr[j];
                break;
            }
        }
        arr[i] = nearestSmaller;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    replaceWithNearestSmallerRight(arr, n);
    
    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
