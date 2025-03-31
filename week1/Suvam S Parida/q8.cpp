#include <iostream>
using namespace::std;
int main() {
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;
    cout<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if (j>i)cout<<" ";
            else cout<<j;
        }
        for(int k=n; k>=1; k--){
        if(k>i)cout<<" ";
        if(k<=i)cout<<k;
        }
    cout<<endl;
    }
}