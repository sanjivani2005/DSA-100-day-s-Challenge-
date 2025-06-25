#include <iostream>
#include <vector>
using namespace std;

// Function to print a subset
void printSubset(const vector<int>& subset) {
    cout << "{ ";
    for (int num : subset) {
        cout << num << " ";
    }
    cout << "}" << endl;
}

// Backtracking function to generate all subsets
void backtrack(vector<int>& nums, vector<int>& subset, int index) {
    // Print current subset
    printSubset(subset);

    // Explore further elements
    for (int i = index; i < nums.size(); ++i) {
        // Include the current element
        subset.push_back(nums[i]);

        // Recursive call with next index
        backtrack(nums, subset, i + 1);

        // Backtrack: remove the last element
        subset.pop_back();
    }
}

int main() {
    vector<int> nums = {1, 2, 3};  // Example array
    vector<int> subset;           // To store the current subset

    cout << "All subsets:\n";
    backtrack(nums, subset, 0);

    return 0;
}
