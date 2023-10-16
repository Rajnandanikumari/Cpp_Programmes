#include<iostream>
using namespace std;
 int print(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            {
            cout<<"* ";
            }
            cout<<"\n";
     }
    
    return 0;
}
int main()
{
    using namespace std;
    int n=5;
    print(n);
    return 0;
}