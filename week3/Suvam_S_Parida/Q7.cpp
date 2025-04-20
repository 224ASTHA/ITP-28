/*7. Write a C++ program to remove all occurrences of a given
character from a string.*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    char ch;
    cout << "Enter character to remove: ";
    cin >> ch;
    string res = ""; 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ch) {
            res+= s[i]; 
        }
    }
    cout << "String after removing '" << ch << "': " << res<< endl;
    return 0;
}
