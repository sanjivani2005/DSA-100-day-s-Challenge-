/* Problem Statement:
"Valid Parentheses"

Given a string containing just the characters '(', ')', '{', '}', '[', and ']', determine if the input string is valid.

A string is valid if:

Open brackets are closed by the same type of brackets.

Open brackets are closed in the correct order.

✅ Examples:
Input: "()[]{}" → Output: true

Input: "(]" → Output: false

Input: "([{}])" → Output: true

🧠 Approach:
Use a stack to track opening brackets.

Push opening brackets onto the stack.

For every closing bracket, check if it matches the top of the stack. */

  #include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> stk;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stk.push(ch);
        } else {
            if (stk.empty()) return false;

            char top = stk.top();
            stk.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return stk.empty();
}

int main() {
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;

    if (isValid(input))
        cout << "The string is valid." << endl;
    else
        cout << "The string is NOT valid." << endl;

    return 0;
}
