#include <iostream>
using namespace std;
int main() 
{
    int n,m;
    cout<<"enter the no of elements in array1: ";
    cin>>n;
    cout<<"enter the no of elements in array2: ";
    cin>>m;
    int a[n],b[m],c[n+m];
    cout<<"enter elements for array1:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter elements for array2:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        c[n+i]=b[i];
    }
    cout<<"The elements of the merged array in the reversed order are:"<<endl;
    for(int i=n+m-1;i>=0;i--)
    {
        cout<<c[i]<<endl;
    }
    
    return 0;
}