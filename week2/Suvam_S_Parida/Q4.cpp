//4. Write a C++ program to find maximum occurring integer in an array.
#include<iostream> 
using namespace std;
int main(){
    int m;
    cout<<"Enter array size: "<<endl;
    cin>>m;
    int a[m];
    cout<<"Enter array elements: "<<endl;
    for(int i=0; i<m;i++){
        cin>>a[i];
    }
    int k, c=0,d=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(a[i]==a[j]){
            c++;
            }     
        } 
        if(c>d){ d=c;
            k=i;
            c=0;    
        }
        c=0;
    }
    cout<<"Max occuring element: "<<a[k]<<" occuring "<<d<<" times";
    return 0;
    }