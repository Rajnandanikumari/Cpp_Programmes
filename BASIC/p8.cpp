#include<iostream>
int main(){
    
    using namespace std;

    int n=5;
     for(int i=n;i<0;i--){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
              cout<<"*";
            }
            cout<<"\n";
     }
    return 0;
}