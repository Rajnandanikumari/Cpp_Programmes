#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j--){
            cout<<" ";
        }
        for(int j=n;j>=0;j--)
        {
            if(i==1||j==n||j==1)
                cout<<"*";
                else
                    cout<<" ";
                }
                cout<<"\n";
    }
                
      return 0;
        }