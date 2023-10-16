#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n=4;
    for(int i=n;i>=0;i--){
        for(int j=n;j<=i;j--){
            cout<<" ";
        }
        for(int j=n;j>=0;j--)
        {
            if(i==n||i==1||j==n||j==1)
                cout<<"*";
                else
                    cout<<" ";
                }
                cout<<"\n";
    }
                
      return 0;
        }