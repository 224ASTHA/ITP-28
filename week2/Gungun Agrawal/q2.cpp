#include <iostream>
using namespace std;
void sort(int arr[], int n) 
{
    for(int i = 0; i <n-1; ++i)
    {
        for(int j = 0; j < n-i-1; ++j) 
        {
            if(arr[j] > arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void print(int arr[], int n)
{
    for(int i = 0; i <n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int n;
    cout << "Enter the no.of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n<< " integers:" << endl;
    for(int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }
    cout << "Original array: ";
    print(arr, n);
    sort(arr, n);
    cout << "Sorted array: ";
    print(arr, n);
    return 0;
}
