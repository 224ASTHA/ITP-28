#include <iostream>
using namespace std;

int main()
{
    int num,d=0,r,h=0,l=0;
    cout<<"Enter a no.: ";
    cin>>num;
        r=num%10;
        h=r;
         while(num!=0)
        {
         r=num%10; 
        if(r>=h)
        {
           l=r;
        }
        num=num/10;
        }
        cout<<"The largest digit in the number is:"<<l<<endl;
        return 0;
}