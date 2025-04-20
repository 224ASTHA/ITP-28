
#include <iostream>
using namespace std;

int main(){
    int n;
    int k = 1;
    cout << "Enter n:\n";
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (k%3 == 0)
            {
                cout << k;
                k++;
            }
            else {
                cout << k << "*";
                k++;

            }
            
        }
        cout << "\n";
    }
    
    return 0;
}
