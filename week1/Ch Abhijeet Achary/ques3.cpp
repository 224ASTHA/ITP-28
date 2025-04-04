#include <iostream>
using namespace std;
int main()
{
    int n, ori, ld = 0;
    cout << "Enter a no. : ";
    cin >> n;
    ori = n;
    while(n > 0)
    {
        if(n % 10 > ld)
          ld = n % 10;
        n /= 10;
    }
    cout << "The largest digit in " << ori << " is " << ld << endl ;
    return 0;
}
