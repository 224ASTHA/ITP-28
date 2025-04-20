#include <iostream>
using namespace std;

int main()
 {
    int d,n;
    cout<<"Enter a decimal number: ";
    cin>>d;
    n=d;
    cout << "Conversion to Binary: ";
    if (d==0) 
    {
        cout<<0;
    } 
    else
    {
        int binary[20];
        int i=0;
        while (d>0)
        {
            binary[i]=d% 2;
            d=d/2;
            i++;
        }
        for (int j=i-1;j>=0;j--) 
        {
            cout<<binary[j];
        }
    }
    cout<< endl;
    cout << "conversion to Octal: ";
    if (n==0) 
    {
        cout<<0;
    } 
    else 
    {
        int octal[20];
        int i=0;
        while (n>0)
        {
            octal[i]=n%8;
            n=n/8;
            i++;
        }
        for (int j=i-1;j>=0;j--)
        {
            cout<<octal[j];
        }
    }
    return 0;
}
