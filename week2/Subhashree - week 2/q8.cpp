//Find the sum of digits of a number using recursion.

#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    if (number >= 0 && number <= 9)
        return number;
    return (number % 10) + sumOfDigits(number / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = sumOfDigits(n);
    cout << "Sum of digits of " << n << " is: " << result << endl;
    return 0;
}