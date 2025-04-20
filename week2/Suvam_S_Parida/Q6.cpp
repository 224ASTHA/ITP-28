/*6. Write a C++ program that takes two 2D arrays (matrices) of size
3×3 as input from the user. First, the program should calculate and
print the sum of the two original matrices. After that, it should compute
the transpose of both the original matrices. Finally, the program
should calculate and display the sum of the two transposed matrices
as well.*/
#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    cout<<"Enter 9 elements of 1st array: "<<endl;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
    int b[3][3];
    cout<<"Enter 9 elements of 2nd array: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Sun of original matrices: "<<endl;
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            c[i][j]=a[i][j]+b[i][j];
            cout<<" "<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    int x[3][3];
    for(int i=0;i<3;i++ ){
        for(int j=0; j<3; j++){
        x[i][j]=a[j][i];
        }
    }
    int y[3][3];
    for(int i=0;i<3;i++ ){
        for(int j=0; j<3; j++){
        y[i][j]=b[j][i];
        }
    }
    cout<<"Sun of transposed matrices: "<<endl;
    int z[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            z[i][j]=x[i][j]+y[i][j];
            cout<<" "<<z[i][j]<<" ";
        }
        cout<<endl;
    }
}