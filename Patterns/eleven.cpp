/*
1   
01  
101 
0101
10101  
*/

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin >>m;

    for(int i=1;i<=m;i++){
        for(int j=i;j>=1;j--){
           cout<<j%2;
        }
        cout<<endl;
    }
}
