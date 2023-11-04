#include<iostream>
#include<stdio.h>
using namespace std;

void add( )
{
    int a,b,c;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    c=a+b;
    cout<<"Addition of two numbers : "<<c<<"\n";
    
}
int main()
{
    add();
    return 0;
}