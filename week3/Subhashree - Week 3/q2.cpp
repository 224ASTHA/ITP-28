//Write a C++ program to find the total number of alphabets, digits and special characters in a string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int alpha = 0, dig = 0, spChar = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            alpha++;
        }
        else if (ch >= '0' && ch <= '9') {
            dig++;
        }
        else {
            if (ch != ' ')
                spChar++;
        }
    }
    cout << "Alphabets: " << alpha << endl;
    cout << "Digits: " << dig << endl;
    cout << "Special characters: " << spChar << endl;

    return 0;
}