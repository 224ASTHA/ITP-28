//2. Write a C++ program to sort a given array using function.
#include <iostream>
using namespace std;
void sortarr(int a[],int m){
    for(int i=0; i<m;i++){
        for(int j=i+1; j<m; j++){
            if(a[i]>a[j]){
            int t= a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    }
    cout<<"Sorted array: "<<"[ ";
    for(int i=0; i<m; i++){
        cout<<a[i]<<" ";
    }
    cout<<"]";
}
int main(){
    int m;
    cout<<"enter no of elements: "<<endl;
    cin>>m;
    int a[m];
    for (int i =0; i<m; i++){
        cin>>a[i];
    }
    sortarr(a, m);
    return 0;
}