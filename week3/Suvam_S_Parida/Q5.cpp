/*5. Write a C++ program to remove duplicates from an array and
create a new array and store all distinct elements.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n]; 
    int unique[n]; 
    int c = 0; 
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bool visited = false;

        for (int j = 0; j < c; j++) {
            if (arr[i] == unique[j]) {
                visited = true;
                break;
            }
        }

        if (!visited) {
            unique[c] = arr[i];
            c++;
        }
    }
    cout << "Array with distinct elements:\n";
    for (int i = 0; i < c; i++)
       cout << unique[i] << " ";

    return 0;
}
