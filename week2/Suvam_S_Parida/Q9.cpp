//9. Print all elements of an array using recursion.
#include <iostream>
using namespace std;
void print_elements(int arr[],int n, int index= 0){
    
    if (index==n) return;
    cout<<arr[index]<<" ";
    print_elements(arr,n,index+1);
}
int main() {
    int n;
    cout<<"Enter array size: "<<'\n';
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<'\n';
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements: "<<'\n';
    print_elements(arr,n);
    return 0;
}