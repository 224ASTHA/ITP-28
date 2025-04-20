//Write a C++ program to remove duplicates from an array and create a new array and store all distinct elements.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int distinct[n]; 
    int count = 0;   
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < count; j++) {
            if (arr[i] == distinct[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            distinct[count] = arr[i];
            count++;
        }
    }
    cout << "Distinct elements are:\n";
    for (int i = 0; i < count; i++) {
        cout << distinct[i] << " ";
    }
    cout << endl;
    return 0;
}
