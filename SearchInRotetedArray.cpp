#include <iostream>
using namespace std;

int search(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Found the target
        if (arr[mid] == target)
            return mid;

        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        // Right half is sorted
        else {
            if (arr[mid] < target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;  // Not found
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
