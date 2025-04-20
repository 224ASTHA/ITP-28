#include <iostream>
using namespace std;

void print(int a[], int size, int index= 0) 
{
    if (index == size)
        return;
    cout << a[index] << " ";
    print(a, size, index + 1);
}

int main() 
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int a[size];
    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cin >> a[i];
    }

    cout << "Array elements are: ";
    print(a, size);
    cout << endl;

    return 0;
}