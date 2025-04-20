#include <iostream>
using namespace std;

int sum(int num)
{
    if (num == 0)
        return 0;
    return (num % 10) + sum(num / 10);
}

int main()
{
    int num;
    cout << "Enter a no.: ";
    cin >> num;
    cout << "Sum of digits of " << num << " is: " << sum(num) << endl;
    return 0;
}
