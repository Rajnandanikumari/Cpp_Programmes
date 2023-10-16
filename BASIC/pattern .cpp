#include<iostream>
int main()
{
    using namespace std;
    int n=5;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
    cout<<"*";}
    cout<<"\n";
    }
    return 0;
    


}