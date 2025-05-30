#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0; // Pointer to place the next non-zero element

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};

    moveZeroes(arr);

    cout << "Array after moving zeroes: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
