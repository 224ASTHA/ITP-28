#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int alpha = 0, digits = 0, spcl = 0;

    for (int i = 0; i < str.length(); i++) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alpha++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        } else 
        {
            spcl++;
        }
    }

    cout << "Alphabets: " << alpha << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << spcl << endl;

    return 0;
}
