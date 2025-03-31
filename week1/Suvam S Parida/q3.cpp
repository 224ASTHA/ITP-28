#include <iostream>
#include <cmath>
using namespace::std;
int main(){
    long double x;
    int max{};
    cout<<"Enter a number: ";
    cin>>x;
    while(x!=floor(x)){
    x*=10;
    }
    int n=x;
    while(n!=0){
        
        int i=n%10;
        if(i>max) max=i;
        n/=10;
    }
    cout<<max;
    return 0;
}