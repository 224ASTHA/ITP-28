#include <iostream>
#include <cmath>
using namespace std;
bool chePer(int n)
{
    int k = (int)sqrt(n);
    for(int x = k + 1; x >= k; x++)
       if(n == x*x)
         return true;
    return false;
}
int main()
{
    int n;
    cout << "Enter a no. : ";
    cin >> n;
    if(chePer(n))
        cout << n <<" is a perfect square" << endl ;
    else
        cout << n <<" is not a perfect square" << endl ;
    return 0;
}
