
#include <iostream>
using namespace std;

void decimalToBinary(int num) {
    int binary[32], i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;
}

void decimalToOctal(int num) {
    int octal[32], i = 0;
    while (num > 0) {
        octal[i] = num % 8;
        num /= 8;
        i++;
    }
    cout << "Octal: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << octal[j];
    }
    cout << endl;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    if (decimal == 0) {
        cout << "Binary: 0" << endl;
        cout << "Octal: 0" << endl;
    } else {
        decimalToBinary(decimal);
        decimalToOctal(decimal);
    }
    
    return 0;
}
