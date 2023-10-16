#include<iostream>
int main(){
    
    using namespace std;

    int n=5;
     for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++)
            {
            if(j==i||j==1||i==n)
                {cout<<"*";}
            else{
                cout<<" ";
            }
            }
            cout<<"\n";
     }
    return 0;
}