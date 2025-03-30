//4. Write a C++ program to input a decimal number and convert it into binary and octal number system using loops.

#include <iostream>
using namespace std;

int main() {
    int dec_num;
    cout << "Enter a decimal number: ";
    cin >> dec_num;
    
    int bin_num[10];
    int bin_index = 0;
    int temp = dec_num;
    while (temp > 0) {
        bin_num[bin_index] = temp % 2; 
        temp = temp / 2;
        bin_index++;
    }

    cout << "Binary: ";
    for (int i = bin_index - 1; i >= 0; i--) { 
        cout << bin_num[i];
    }
    cout << endl;

    int oct_num[10];
    int oct_index = 0;
    temp = dec_num;
    while (temp > 0) {
        oct_num[oct_index] = temp % 8; 
        temp = temp / 8;   
        oct_index++;
    }

    cout << "Octal: ";
    for (int i = oct_index - 1; i >= 0; i--) { 
        cout << oct_num[i];
    }
    cout << endl;

    return 0;
}
