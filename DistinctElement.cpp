//Count Distinct Elements in a Window

#include <iostream>

using namespace std;

void countDistinctElements(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int distinctCount = 0;

        for (int j = i; j < i + k; j++) {
            bool isDistinct = true;
            
            for (int p = i; p < j; p++) {
                if (arr[j] == arr[p]) {
                    isDistinct = false;
                    break;
                }
            }

            if (isDistinct)
                distinctCount++;
        }

        cout << distinctCount << " ";
    }
    cout << endl;
}

int main() {
  
    int n, k;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; 
  
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the window size (k): ";
    cin >> k;

    if (k > n) {
        cout << "Window size should be less than or equal to the array size." << endl;
        return 0;
    }

    countDistinctElements(arr, n, k);

    return 0;
}

