/*
A 
B B 
C C C 
D D D D 
E E E E E 
*/

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin >>m;
    
    char temp= 'A';
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
           cout<<temp<<" ";
        }
        temp +=1;
        cout<<endl;
    }
}
