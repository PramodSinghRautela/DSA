/*
A
A B
A B C 
A B C D
A B C D E
*/

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin >>m;

    for(int i=1;i<=m;i++){
        char temp= 'A';
        for(int j=1;j<=i;j++){
           cout<<temp<<" ";
           temp +=1;
        }
        cout<<endl;
    }
}
