#include<iostream>
int main(){
    
    using namespace std;

    int n=5;
     for(int i=0;i<n;i++){
        for(int j=0;j<5-i;j++)
            {
            cout<<"* ";
            }
            cout<<"\n";
     }
    
    return 0;
}