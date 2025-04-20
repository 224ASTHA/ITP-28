//2. Write a C++ program to find the total number of alphabets, digits and special characters in a string.
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    int ca=0,cd=0,cs=0;
    for(char &ch: s){
        
        if(isdigit(ch))cd++;
        else if(isalpha(ch))ca++;
        else if(!isspace(ch))cs++;
        }
    cout<<"No. of digits in the string: "<<cd<< endl;
    cout<<"No. of alphabets in the string: "<<ca<< endl;
    cout<<"No. of special characters: "<<cs++<<endl;
}
