/*5. Write a C++ program to find the second smallest elements in a
given array of integers(all elements of array distinct).*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " distinct elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int smallest = arr[0];
    int second = arr[1];

    if (second < smallest) {
        smallest = arr[1];
        second = arr[0];
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] < smallest) {
            second= smallest;
            smallest = arr[i];
        } else if (arr[i] < second) {
            second= arr[i];
        }
    }

    cout << "Second smallest element is: " << second << endl;
    return 0;
}
