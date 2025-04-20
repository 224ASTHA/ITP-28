#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n < 2) 
    {
        cout << "Array must contain at least two elements." << endl;
        return 1;
    }
    int a[n];
    cout << "Enter " << n << " distinct integers:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }

    int smallest, secsmall;
    if (a[0] < a[1]) 
    {
        smallest = a[0];
        secsmall = a[1];
    }
    else 
    {
        smallest = a[1];
        secsmall = a[0];
    }
    for (int i = 2; i < n; ++i)
    {
        if (a[i] < smallest)
        {
            secsmall = smallest;
            smallest = a[i];
        }
        else if (a[i] < secsmall) 
        {
            secsmall= a[i];
        }
    }
    cout << "The second smallest element is: " << secsmall << endl;

    return 0;
}
