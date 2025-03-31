#include <iostream>
using namespace std;

int main(){
    int num;
    int n;
    int l = 0;
    cout << "Enter a number:" << endl;
    cin >> num;
    n = num;
    cout << "Entered number is = " << num << endl;

    while(n!=0) {
        int d = n%10;
        n = n/10;
        l++;
    }

    int arr[l];
    int i = 0;
    while (num!=0)
    {
        arr[i] = num%10;
        num = num/10;
        i++;
    }
    int max = arr[0];

    for (int j = 0; j < l; j++)
    {
        if(arr[j] > max)
        max = arr[j];
    }
    
    cout << "The largest digit in the number is = " << max << endl;
    return 0;
}
