#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 1st side of triangle:"<<endl;
    cin>>b;
    cout<<"Enter 2nd side of the triangle:"<<endl;
    cin>>c;
    cout<<"Enter 3rd side of the triangle:"<<endl;
    cin>>a;
    if(a+b>c&&b+c>a&&a+c>b)
    {
        cout<<"The Triangle can be drawn."<<endl;
        if(a==b&&b==c)
    {
        cout<<"It is an equilateral triangle.";
    }
    else if(a==b||b==c||c==a)
    {
        cout<<"It is an isosceles triangle.";
    }
    else
    {
        cout<<"It is a scalene triangle.";
    }
    }
    else
    {
        cout<<"The Triangle can't be drawn"<<endl;
    }
    
    return 0;
}