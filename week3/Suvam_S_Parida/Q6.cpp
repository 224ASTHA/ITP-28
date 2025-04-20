/*Write a C++ program to convert a string to lowercase without
using inbuilt functions*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i]= s[i]+ 32; 
        }
    }

    cout << "Lowercase string: " << s << endl;

    return 0;
}
