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

// Backtracking function to generate subsets
void generateSubsets(vector<int>& nums, vector<int>& current, int index) {
    // Base case: print the current subset
    if (index == nums.size()) {
        printSubset(current);
        return;
    }

    // Include the current element
    current.push_back(nums[index]);
    generateSubsets(nums, current, index + 1);

    // Backtrack: exclude the current element
    current.pop_back();
    generateSubsets(nums, current, index + 1);
}

int main() {
    vector<int> nums = {1, 2, 3};  // You can change this
    vector<int> current;

    cout << "All subsets using backtracking:\n";
    generateSubsets(nums, current, 0);

    return 0;
}
