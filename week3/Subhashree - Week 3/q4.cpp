//Write a C++ program to rotate an array to the right by k positions.

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate to the right: ";
    cin >> k;
    k = k % n;
    for (int start = 0, end = n - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    for (int start = 0, end = k - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    for (int start = k, end = n - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    cout << "Array after rotating to the right by " << k << " positions:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
