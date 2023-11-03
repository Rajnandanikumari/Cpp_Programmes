/*WAP to print sum of 1+2+3+.............................n*/
#include<iostream>
#include<stdio.h>
using namespace std;
int sum()
{
    int num,c;
    cout<<"Enter the number\n";
    cin>>num;
    c=num*(num+1)/2;
    cout<<"sum of number is: "<<c<<"\n";
    return 0;
}
int main()
{
    cout<<sum();
}