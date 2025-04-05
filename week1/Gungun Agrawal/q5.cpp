#include <iostream>
using namespace std;

int main() 
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0)
    {
       cout<<"The no. is not a perfect square."; 
       return 0;
    }
    while(i*i<=n)
    {
        if(i*i==n)
        {
            cout<<"The no.is a perfect square.";
            return 0;
        }
        i++;
    }
    cout<<"The no. is a perfect square.";
    return 0;
}