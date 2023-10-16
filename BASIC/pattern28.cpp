/*
  * * * * *
    *     *
      *   *
        * * 
          *  
*/
#include<iostream>
#include<stdio.h>
int main(){
    using namespace std;
    int n=5;
    for(int j=5;j>=1;j--){
        for(int i=5;i>=1;i--){
            if(i==j || i==1 || j==n){
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