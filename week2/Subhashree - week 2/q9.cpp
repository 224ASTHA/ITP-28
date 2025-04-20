// Print all elements of an array using recursion.

#include<iostream>
using namespace std;
void print_arr(int a[],int i,int m){
    if(i<m){
       cout<<a[i++]<<" ";
       print_arr(a,i,m);
    }
}
int main(){
    int m;
    cout<<"Enter the number of elements in the array: ";
    cin>>m;
    int a[m];
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"All the elements of the array is: ";
    print_arr(a,0,m);
    return 0;
}