//1. Write a C++ program to move all the negative elements to one side of the array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            j++;
        }
    }
    cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}