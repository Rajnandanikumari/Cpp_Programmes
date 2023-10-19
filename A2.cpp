#include<iostream>
#include<stdio.h>
int main(){
      using namespace  std;
      int arr[4] ={1,2,3,4};
      int n =sizeof(arr)/sizeof(int);
      int x =arr[0];
      for(int i=0;i<n;i++){
          if(x<arr[i]){
              x=arr[i];
          }
      }
      cout<< "Max element is: "<<x;
      return 0;
      }

