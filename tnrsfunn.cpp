#include<iostream>
#include<stdio.h>
using namespace std;

int add( )
{
    int a,b,c;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    c=a+b;
    cout<<"Addition of two numbers : "<<c<<"\n";
    return c;
}
int main()
{
    int c;
    c = add();
    cout<<"Addition of two numbers : "<<c<<"\n";
    return 0;
}