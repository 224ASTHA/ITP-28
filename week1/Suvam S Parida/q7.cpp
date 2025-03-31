#include <iostream>
using namespace::std;
int main() {
    int n;
    int c=1;
    cout<<"Enter no. of lines: ";
    cin>>n;
    cout<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<c;
            if (j<n)cout<<"*";
            c++;
        }
    cout<<endl;
    }
}