#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> removeDuplicates(const vector<int>& vec) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : vec) {
        if (seen.find(num) == seen.end()) {
            result.push_back(num);
            seen.insert(num);
        }
    }

    return result;
}

int main() {
    vector<int> vec = {1, 2, 2, 3, 4, 3, 5};

    vector<int> noDuplicates = removeDuplicates(vec);

    cout << "Vector after removing duplicates: ";
    for (int num : noDuplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
