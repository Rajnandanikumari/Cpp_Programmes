#include<stdio.h>
#include<iostream>
int main()
{
    using namespace std;
    int n,c;
    cout<<"Enter the number\n";
    cin>>n>>c;
    {
    for(int c = 1;n>0;c++) 
    n = n/10;
    }
    cout<<"count of digit is: "<<c;
    return 0;
}