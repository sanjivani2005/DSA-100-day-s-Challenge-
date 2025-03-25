#include <iostream>
using namespace std;

int anagram(string s) {
    int n = s.length();
    if (n % 2 != 0) return -1;
    
    int mid = n / 2;
    string s1 = s.substr(0, mid);
    string s2 = s.substr(mid);
    
    int freq[26] = {0};
    
    for (char c : s1) freq[c - 'a']++;
    for (char c : s2) freq[c - 'a']--;
    
    int changes = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) changes += freq[i];
    }
    
    return changes;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << anagram(s) << endl;
    }
    return 0;
}
