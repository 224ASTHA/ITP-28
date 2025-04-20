#include <iostream>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter char to remove: ";
    cin >> ch;
    string res = "";

    for (int i = 0; i < str.length(); i++) 
    {
        if (str[i] != ch)
        {
            res += str[i];
        }
    }
    cout << "String after removal: " << res << endl;

    return 0;
}
