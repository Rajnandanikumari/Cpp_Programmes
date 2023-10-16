/*
* 
*  *
*    *
*       *        
* * * * * *
*/
#include<iostream>
#include<stdio.h>
int print(int n){
    using namespace std;
    int n=5;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=j;i++){
            if(i==j||i==1||j==5 ){
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
int main()
{
    using namespace std;
    int n=5;
    print(n);
    return 0;
}