//find the value at odd index //

#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[]={5,6,7,8,9,1};
   // cout<<arr<<"\n";
   // int length = sizeof(arr)/sizeof(int);

    for(int i=0;i<6;i++)
    {
        if(i%2==1)
        cout<<"Array at " <<i<<"position is: "<<arr[i]<<"\n";
    }
    return 0;

}