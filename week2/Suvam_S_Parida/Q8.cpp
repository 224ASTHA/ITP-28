//8. Find the sum of digits of a number using recursion.
#include <iostream>
using namespace std;
int sum(int n){
    if(n>0){
        return n%10 + sum(n/10);
    }
    else{
        return 0;
    }
}
int main() {
    int n,res;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    res= sum(n);
    cout<<"Sum of digits of "<<n<<" is "<<res;
    return 0;
}