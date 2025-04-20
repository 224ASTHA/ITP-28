#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n], d[n], count = 0;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) 
    {
        int k = 0; 
        for (int j = 0; j < count; j++) 
        {
            if (a[i] == d[j])
            {
                k= 1;
                break;
            }
        }
        if (k == 0) 
        {
            d[count] = a[i];
            count++;
        }
    }

    cout << "Array with distinct elements:\n";
    for (int i = 0; i < count; i++) 
    {
        cout << d[i] << " ";
    }

    return 0;
}
