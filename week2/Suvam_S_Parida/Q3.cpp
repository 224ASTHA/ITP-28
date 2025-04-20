//3. Write a C++ program to copy the elements of one array into another array
#include <iostream>
using namespace std;
int main() {
    int m;
    cout<<"Enter array size: ";
    cin>>m;
    int a[m];
    cout<<"Enter elements: "<<endl;;
    for(int i=0; i<m; i++){
        cin>>a[i];
   }
   cout<<"Original array: "<<"[";
   for(int i =0; i<m; i++){
    cout<<a[i]<<" ";
   }
   cout<<"]";
   int b[m];
   for(int i=0; i<m; i++){
    b[i]=a[i];
   }
   cout<<endl<<"Copied array: "<<"[";
   for(int i =0; i<m; i++){
    cout<<b[i]<<" ";
   }
   cout<<"]";
   return 0;
}