#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[] ={5,8,7,3,9,1},n=6;
    //Address of array//
    //cout<<arr<<"\n";
     
     //int length = sizeof(arr)/sizeof(int);
     for(int i=0;i<6;i++)
     {
        if(i%2==1)
        {
            cout<<"Array at "<<i<<" position is: "<<arr[i]<<"\n";
        }
        return 0;
     }
}