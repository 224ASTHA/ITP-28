
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter three sides of a triangle:" << endl;
    cin >> a >> b >> c;
    if((a+b)>c && (a+c)>b && (b+c)>a){
        if(a==b && b==c && c==a)
        cout << "Triangle is equilateral";
        else if(a==b || b==c || c==a)
        cout << "Triangle is isosceles";
        else 
        cout << "Triangle is scalene";
    } else{
        cout << "A triangle can't be formed from the entered details"<<endl;
    }
    return 0;
}
