// Find the First Non-Repeating Character in a String"

//Given a string, find the first character that does not repeat anywhere in the string.
//If all characters repeat, return -1.

#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(string s) {
    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char ch : s)
        freq[ch]++;

    // Find the first non-repeating character
    for (char ch : s) {
        if (freq[ch] == 1)
            return ch;
    }

    return -1; // If all characters repeat
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    char result = firstNonRepeatingChar(input);
    if (result != -1)
        cout << "First non-repeating character: " << result << endl;
    else
        cout << "All characters repeat. No non-repeating character found." << endl;

    return 0;
}
