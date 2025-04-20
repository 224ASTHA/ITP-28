#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter size of the array:"<<endl;
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The original array :"<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
       b[i]=a[i];
    }
     cout<<"\nThe copied array :"<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<b[i]<<" ";
    }
}
    