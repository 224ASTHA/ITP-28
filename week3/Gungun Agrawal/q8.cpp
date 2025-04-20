#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int i, j;
    for (i = 0, j = str.length() - 1; i < j; i++, j--) 
    {
        if (str[i] != str[j])
        {
            cout << "The string is not a palindrome.\n";
            return 0; 
        }
    }
    cout << "The string is a palindrome.\n";
    return 0;
}
