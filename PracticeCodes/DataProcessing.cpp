//Process space separated custom formatted inputs
//suppose the input is :
//101-Alice 102-Bob 103-Charlie
//Each token has a format like ID-Name, and you want to extract both parts.
//ID:101 Name:Alice
//ID:102 Name:Bob
//ID:103 Name:Charlie


#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter input (e.g., 101-Alice 102-Bob 103-Charlie):\n";
    getline(cin, input); // Read the full line

    stringstream ss(input);
    string token;

    // Split by space
    while (ss >> token) {
        size_t hyphenPos = token.find('-');//find position
        if (hyphenPos != string::npos) {
            string id = token.substr(0, hyphenPos); // Extract ID from 0 to before -
            string name = token.substr(hyphenPos + 1);//
            cout << "ID:" << id << " Name:" << name << endl;
        } else {
            cout << "Invalid token: " << token << endl;
        }
    }

    return 0;
}
