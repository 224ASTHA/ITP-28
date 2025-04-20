//5. Write a C++ program to check if a Number is Perfect square using loops.

#include <iostream>
using namespace std; 

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int check = 0 ;
    
    for (int i = 1; i <= num; i++){
        if (i*i == num){
            check = 1;
            break;
        }
    }
    
    if (check == 1){
        cout << "Given number is a perfect square.";
    }
    else{
        cout << "Given number is NOT a perfect square.";
    }
    return 0;
}