/*
    *   
   ***  
  ***** 
 *******
*********
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin >>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
