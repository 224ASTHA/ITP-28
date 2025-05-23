//Find the Nth Fibonacci number using recursion.

#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) 
        return n;    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the term number (n): ";
    cin >> n;
    int a = fibonacci(n);
    cout << "The Fibonacci number is: " << a << endl;
    return 0;
}
