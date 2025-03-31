#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter a number:"<< endl;
    cin >> n;
    int sqt = sqrt(n);
    if((sqt*sqt) == n) 
    cout << "Number is a perfect square" << endl;
    else 
    cout << "Number is not a perfect square" << endl;
    return 0;
}
