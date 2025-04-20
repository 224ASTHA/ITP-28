#include <iostream>
using namespace std;

int main() {
    string str, res = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            res += str[i];
        }
    }

    cout << "Alphabets are: " << res << endl;

    return 0;
}
