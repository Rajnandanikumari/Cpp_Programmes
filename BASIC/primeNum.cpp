#include<iostream>
int main()
{
    using namespace std;
    int i,n;
    
    cout<<"Enter range";
    cin>>n;
    for(int num=3;num<=n;num++){
        bool flag=true;
        for(i=2;i<num;i++)
        {
            if(num%i==0){
                flag = false;
                break;
            }
        }
        if(flag){
        cout<<i<<"Prime Num \n";
        }
    }
        
return 0;
}