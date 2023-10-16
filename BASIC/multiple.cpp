//Multiple of any numbers //
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    for(int i=1;i<=10;i=i+1){
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}