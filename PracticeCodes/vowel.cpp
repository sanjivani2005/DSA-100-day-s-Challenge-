#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter any character: ";
    cin >> c;

    char choice;
    cout << "\nMenu:\n";
    cout << "1. Check if Vowel\n";
    cout << "2. Check if Consonant\n";
    cout << "3. Check if Number\n";
    cout << "4. Check if Special Character\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case '1':
        switch (c)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << c << " is a vowel." << endl;
            break;
        default:
            cout << c << " is not a vowel." << endl;
        }
        break;

    case '2':
        switch (c)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << c << " is not a consonant." << endl;
            break;
        default:
            ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
                ? cout << c << " is a consonant." << endl
                : cout << c << " is not a consonant." << endl;
        }
        break;

    case '3':
        (c >= '0' && c <= '9')
            ? cout << c << " is a number." << endl
            : cout << c << " is not a number." << endl;
        break;

    case '4':
        (
            !((c >= 'a' && c <= 'z') || 
              (c >= 'A' && c <= 'Z') || 
              (c >= '0' && c <= '9'))
        )
            ? cout << c << " is a special character." << endl
            : cout << c << " is not a special character." << endl;
        break;

    default:
        cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
