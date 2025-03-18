#include <iostream>
#include <limits.h> // For INT_MIN and INT_MAX

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    std::cout << "Minimum value: " << minVal << std::endl;
    std::cout << "Maximum value: " << maxVal << std::endl;

    return 0;
}
