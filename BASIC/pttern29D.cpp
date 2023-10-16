#include<iostream>
#include<stdio.h>
int main(){
    using namespace std;
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if( j==1 ||i==4||i>j-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}