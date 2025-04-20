//4. Write a C++ program to rotate an array to the right by k positions.
#include <iostream>
using namespace std;

void rotate_array_right(int arr[], int n, int d) {
    d = d % n; 
    int temp[d];
    for(int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    for(int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    for(int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    int d;
    cout<<"Enter rotation position from right: "<<endl;
    cin>>d;
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    rotate_array_right(arr, n, d);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}