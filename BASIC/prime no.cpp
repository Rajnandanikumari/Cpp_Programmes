#include<iostream>
int main()
{
    int n;
    using namespace std;
    bool flag=true;
    cout<<"Enter the number\n";
    cin>>n;
    for(int i=2;i<n;i++){
    if(n%i==0){
    flag=false;
       break;
    }}
    if(flag){
    
        cout<<"Prime number\n";
    }
    else{
        cout<<"Not prime number";
    }
    return 0;
    }
