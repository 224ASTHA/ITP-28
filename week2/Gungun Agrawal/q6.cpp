#include <iostream>
using namespace std;

int main() 
{
    int a[3][3],b[3][3],c[3][3];
    cout<<"enter 9 elements for matrix A"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter 9 elements for matrix b"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
 cout<<"matrix A"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"matrix b"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    } 
    cout<<"The sum of the two matrices are:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The transpose of matrix A is :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<"The transpose of matrix B is :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<b[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<"The sum of the two transposed matrices :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<b[j][i]+a[j][i]<<" ";
        }
        cout<<endl;
    }
}
    
    
    