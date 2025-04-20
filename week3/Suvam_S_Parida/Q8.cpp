/*8. Write a C++ program to check whether a given string is a
palindrome. (without using any built-in reverse function)*/
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string s;
    int length;
    int flag = 0;
    cout << "Enter a string: ";
    getline(cin,s);
    length = s.length();
    for(int i=0; i < length; i++){
        if(tolower(s[i]) != tolower(s[length-i-1])){
            flag = 1;
            break;
           }
        }
    if (flag) {
        cout << s << " is not a palindrome" << endl; 
    }    
    else {
        cout << s << " is a palindrome" << endl; 
    }
    return 0;
}