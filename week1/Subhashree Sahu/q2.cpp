//2. Write a C++ program to input 3 sides of triangle and a triangle can be drawn from it or not, if triangle can be drawn then check if it is equilateral, isosceles or scalene triangle.

#include <iostream>
using namespace std;

int main() {
    int a, b ,c;
    int check = 0 ;
    
    cout << "Enter length of first side : ";
    cin >> a ;
    cout << "Enter length of second side : ";
    cin >> b ;
    cout << "Enter length of third side : ";
    cin >> c ;
    
    if (a+b > c && b+c > a && a+c > b){
        cout << "The triangle is VALID." << endl;
        check = 1;
    }
    else{
        cout << "The triangle is INVALID." << endl;
    }
    
    if (check == 1){
      if (a == b && b==c){
            cout << "EQUILATERAL TRIANGLE" << endl;
        }
        else if (a==b || b==c || c==a){
            cout << "ISOSCELES TRIANGLE" << endl;
        }
        else{
            cout << "SCALENE TRIANGLE" << endl;
        }  
    }
    
    return 0;
}
