//7. Find the Nth Fibonacci number using recursion.
#include <iostream>
using namespace std;
int fact(int n){
    if(n>1){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}
int main() {
    int n,res;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    res= fact(n);
    cout<<"Factorial of "<<n<<" is "<<res;
    return 0;
}