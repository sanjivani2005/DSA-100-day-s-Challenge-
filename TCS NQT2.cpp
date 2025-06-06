// in given string replace each lower case character with # symbol and each upper case character with * 
//Input = SanJEEt
//Output = *##***#

#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;  // Use getline(cin, str); if input might have spaces

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = '*';
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = '#';
        }
    }

    cout << str;
    return 0;
}
