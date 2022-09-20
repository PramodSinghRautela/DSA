/*
    A
   ABA
  ABCBA
 ABCDCBA
*/

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin >>m;

    for(int i=1;i<=m;i++){
        char temp='A';
        for(int j=1;j<=m-i;j++){          //Printing <space> till :-number of rows - i(row number) 
            cout<<" ";
        }
        for(int k=1;k<=i;k++){     //printing * in the odd places (2*i - 1)
            cout<<temp<<" ";
            temp++;
        }
        temp-=2;
        for(int m=1;m<i;m++){     //printing * in the odd places (2*i - 1)
            cout<<temp<<" ";
            temp--;
        }
        cout<<endl;
    }
}
