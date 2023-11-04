#include<iostream>
#include<stdio.h>
using namespace std;

void add(int a,int b)
{
    int c;
    c=a+b;
    cout<<"Addition of two number = "<<c<<"\n";
}
int main()
{
    int a,b;
    cout<<"Enter two number\n";
    cin>>a>>b;
    add(a,b);
    return 0;
}
