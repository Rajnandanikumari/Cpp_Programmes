/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<stdio.h>
int main(){
      using namespace  std;
      int arr[4] ={1,2,3,4};
      int n =sizeof(arr)/sizeof(int);
      int x =arr[0];
      for(int i=0;i<n;i++){
          if(x>arr[i]){
              x=arr[i];
          }
      }
      cout<< "Min element is: "<<x;
      return 0;
      }


