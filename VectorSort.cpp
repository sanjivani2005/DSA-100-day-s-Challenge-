

#include <iostream>
#include <vector>
#include <algorithm> // for sort()
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Insert elements into the vector
    numbers.push_back(10);
    numbers.push_back(5);
    numbers.push_back(20);
    numbers.push_back(15);

    // Display elements using index
    cout << "Vector elements (index-based): ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Display elements using range-based for loop
    cout << "Vector elements (range-based loop): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Remove the last element
    numbers.pop_back(); // removes 15

    // Sort the vector
    sort(numbers.begin(), numbers.end());

    // Display sorted vector
    cout << "Sorted Vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
