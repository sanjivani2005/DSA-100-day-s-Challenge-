#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        // Reduce prefix until it matches the beginning of the current string
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }

    return prefix;
}

int main() {
    vector<string> words = {"flower", "flow", "flight"};

    string result = longestCommonPrefix(words);
    cout << "Longest Common Prefix: \"" << result << "\"" << endl;

    return 0;
}
