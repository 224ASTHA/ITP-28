//3. Write a C++ program to find the largest digit in a number.

#include <iostream>
using namespace std;

int main() {
    int a, max , b; 
    cout << "Enter the number: ";
    cin >> a ;
    max = 0;
    b = a % 10;
    while (a != 0){
        if (max < b){
            max = b;
        }
        b = a % 10 ;
        a = a / 10;
    }
    cout << "The largest digit is = " << max;
    
    return 0;
}