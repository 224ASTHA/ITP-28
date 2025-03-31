#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        for (int s = 1; s <= 2 * (n - i); s++) {
            cout << " ";
        }
        
            for (int k = i; k >= 1; k--) {
                cout << k;
            }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter value of n:\n";
    cin >> n;
    printPattern(n);
    return 0;
}
