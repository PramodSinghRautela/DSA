/*
A B C D E 
A B C D 
A B C 
A B 
A 
*/

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin >>m;

    for(int i=m;i>=1;i--){
        char temp= 'A';
        for(int j=1;j<=i;j++){
           cout<<temp<<" ";
           temp +=1;
        }
        cout<<endl;
    }
}
