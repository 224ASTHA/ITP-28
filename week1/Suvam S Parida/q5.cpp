#include <iostream>
using namespace::std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=1; i<=n; i++){
        
        if(i*i==n){cout<<endl<<n<<" is a perfect square\n";
        exit(0);
        }
    }
    cout<<endl<<n<<" is not a perfect square\n";
    return 0;
}