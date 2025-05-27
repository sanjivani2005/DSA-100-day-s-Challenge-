#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (hashMap.find(complement) != hashMap.end()) {
            return {hashMap[complement], i}; // Found the pair
        }

        hashMap[nums[i]] = i; // Store index of the current number
    }

    return {}; // If no solution found (in this case, it shouldn't happen)
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
