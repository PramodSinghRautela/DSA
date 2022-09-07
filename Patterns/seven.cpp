/*
    *
   ***
  *****
 *******
*********  
*/

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin >>m;

    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++){          //Printing <space> till :-number of rows - i(row number) 
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){     //printing * in the odd places (2*i - 1)
            cout<<"*";
        }
        cout<<endl;
    }
}
