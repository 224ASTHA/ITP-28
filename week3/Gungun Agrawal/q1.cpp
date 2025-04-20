#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n], b[n], index = 0;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
           b[index++] = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            b[index++] = a[i];
        }
    }
    for (int i = 0; i < n; i++) 
    {
        a[i] = b[i];
    }

    cout << "Rearranged array:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }

    return 0;
}
