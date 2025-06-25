#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Backtracking function to find permutations
void permutations(string str, string ans) {
    if (str.size() == 0) {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < str.size(); i++) {
        // Take the i-th character and append to ans
        char ch = str[i];
        string ros = str.substr(0, i) + str.substr(i + 1); // Remaining string

        // Recurse
        permutations(ros, ans + ch);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "All permutations:\n";
    permutations(input, "");

    return 0;
}
