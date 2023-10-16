
/*
             *
            **
           ***   
          ****
*/
#include<iostream>
#include<stdio.h>

int main(){
    using namespace std;
    int n=5;
    for(int i=1;i<=5;i++){

        // space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        // star
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}