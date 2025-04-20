// 1. Take two array as input, merge them and print it in reverse order
using loop
#include <iostream>
using namespace std;
int main() {
int m,n;
cout<<"Enter no of elements in 1st array"<<endl;
cin>>m;
int a[m];
cout<<"Enter 1st array elements: "<<endl;
for( int i=0; i<m; i++){
cin>>a[i];
}
cout<<"Enter no of elements in 2nd array"<<endl;
cin>>n;
int b[n];
cout<<"Enter 2nd array elements:" <<endl;
for(int i=0;i<n;i++){
cin>>b[i] ;
}
int k=m+n;
int c[k];
for(int i =0; i<m; i++){
c[i]= a[i];
}
for(int i=0; i<k; i++){
c[m]= b[i];
m++;
}
cout<<"merged array in reverse order:"<<endl;
for(int i=k-1; i>=0; i--){
cout<<c[i]<<" ";
}
return 0;
}