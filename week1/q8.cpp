//8.Write a C++ program to print the pattern
//sample output: for n=4
//1      1
//12    21
//123  321
//12344321

#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter upto which you want the pattern:";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        for (int j = 1; j <= (n - i) * 2; ++j) {
            cout << " ";
        }
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
