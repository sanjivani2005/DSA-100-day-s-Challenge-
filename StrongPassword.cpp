#include <iostream>

using namespace std;

int main() {
    int n;
    char password[101];
    cin >> n >> password;

    bool has_digit = false, has_lower = false, has_upper = false, has_special = false;
    
    for (int i = 0; i < n; i++) {
        char c = password[i];
        if (c >= '0' && c <= '9') has_digit = true;
        else if (c >= 'a' && c <= 'z') has_lower = true;
        else if (c >= 'A' && c <= 'Z') has_upper = true;
        else has_special = true;
    }
    
    int missing_types = (!has_digit) + (!has_lower) + (!has_upper) + (!has_special);
    cout << max(missing_types, 6 - n) << endl;
    
    return 0;
}
