//Write a C++ program to remove all characters except alphabets in a string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            result += ch;
        }
    }

    cout << "String after removing non-alphabet characters: " << result << endl;

    return 0;
}
