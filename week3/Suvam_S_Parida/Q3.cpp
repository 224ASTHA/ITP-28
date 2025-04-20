//3. Write a C++ program to remove all characters except alphabets in a string.
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    int j=0;
    for( int i=0; i<s.length();i++){
        if(isalpha(s[i])){
            char t= s[i];
            s[i]=s[j];
            s[j]=t;
            j++;
        }
    }
    s.erase(j);
    cout<<s;
}
