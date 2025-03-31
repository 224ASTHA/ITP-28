#include <iostream>
using namespace::std;
int main() {
    float a{},b{},c{};
    cout<<"Enter three sides: ";
    cin>>a>>b>>c;
    if((a+b<=c)||(a+c<=b)||(b+c)<=a){
        cout<<"\nTriangle not possible with sides "<<a<<", "<<b<<" and "<<c;
        exit(1);
    }
    else{
        if((a==b)&&(b==c)&&(c==a))cout<<"\nEquilateral triangle with sides " <<a<<", "<<b<<" and "<<c;
        else if((a==b)||(a==c)||(b==c))cout<<"\nIsosceles triangle with sides "<<a<<", "<<b<<" and "<<c;
        else cout<<"\nScalene triangle with sides "<<a<<", "<<b<<" and "<<c;
    }
    return 0;
}