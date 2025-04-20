/*5. Write a C++ program to find the second smallest elements in a
given array of integers(all elements of array distinct).*/

#include<iostream>
using namespace std;
int main(){
    int m; 
    cout<<"enter array size: "<<endl;
    cin>>m;
    int a[m];
    cout<<"Enter elements"<<endl;
    for(int i =0;i<m; i++){
        cin>>a[i];
    }
    int s=a[0];
    for(int i=0;i<m;i++){
        if(a[i]<s){
            s=a[i];
        }
    }
    cout<<"Smallest integer in the array: "<<s;
    return 0;
}