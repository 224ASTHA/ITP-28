
#include <iostream>
using namespace std;

void binary(int a)
{
    int x = 0;
    int pow = 1;

    while (a > 0)
    {
        int rem = a % 2;
        x += rem * pow;
        a /= 2;
        pow *= 10;
    }
    cout << "binary: " << x << endl;
}

void octal(int a)
{
    int x=0;
    int pow =1;
        while (a > 0)
        {
            int rem= a%8;
            x+= rem*pow;
            a /= 8;
            pow *= 10;
        }

        cout << "octal: " << x << endl;
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a < 0)
    {
        cout << "Please enter a non-negative number." << endl;
        return 0;
    }
    binary(a);
    octal(a);
    return 0;
}