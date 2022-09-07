/*
1      1
12    21
123  321
12344321 
*/

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin >>m;
    int count=m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
           cout<<j;
        }
        for(int k=1;k<=count*2-2;k++){
           cout<<" ";
        }
        count--;
        for(int l=i;l>=1;l--){
           cout<<l;
        }
        cout<<endl;
    }
}
