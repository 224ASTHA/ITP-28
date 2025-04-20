#include <iostream>
using namespace std;
int convert(int n, int b)
{
    int d = 0, p = 1;
    while(n > 0)
    {
        d += p*(n % b);
        p *= 10; 
        n /= b;
    }
    return d;
}
int main()
{
    int n, ch;
    cout << "Enter a no. : ";
    cin >> n;
    cout << "Enter : \n 1 convert it to binary \n 2 convert it to octal : ";
    cin >> ch ;
    switch(ch)
    { 
        case 1 : 
          cout << "The binary Equivalent of " << n << " is " << convert(n, 2);
          break ;
        case 2 : 
          cout << "The octal Equivalent of " << n << " is " << convert(n, 8);
          break ;
        default : 
          cout << "Invalid  input" ;
    }
    return 0;
}
