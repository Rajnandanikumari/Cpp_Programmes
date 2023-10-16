/*
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
*/

#include<iostream>
#include<stdio.h>
int print(){
    using namespace std;
    int n=5;
    for(int i=5;i>=1;i--){

        // space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }

        // star
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
int main()
{
    using namespace std;
    int i=5;
    print();
}