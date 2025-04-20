#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n], b[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter value of k (rotation count): ";
    cin >> k;
    int orgnlk= k; 
    k = k % n; 
    for (int i = 0; i < k; i++) 
    {
        b[i] = a[n - k + i];
    }
    for (int i = 0; i < n - k; i++)
    {
        b[k + i] = a[i];
    }
    for (int i = 0; i < n; i++) 
    {
        a[i] = b[i];
    }

    cout << "Array after rotating right by " << orgnlk<< " positions:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
