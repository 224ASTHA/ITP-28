//Write a C++ program to convert a string to lowercase without using inbuilt functions.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            str[i] = ch + 32;
        }
    }
    cout << "Lowercase string: " << str << endl;
    return 0;
}

