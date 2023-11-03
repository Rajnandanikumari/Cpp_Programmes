/*25. WAP to print sum of 1 2 +2 2 +3 2 +..........................n 2*/
#include<iostream>
#include<stdio.h>
using namespace std;
    int sq_sum()
    {
    int n,sum=0;
    cout<<"Enter the number\n";
    cin>>n;
    //sum=n(n+1)(2*n+1)/6
    sum=n*(n+1)*(2*n+1)/6;
    cout<<"sum of n number\n"<<sum<<"\n";
    return 0;

}
int main()
{
    cout<<sq_sum();
    return 0;
}
