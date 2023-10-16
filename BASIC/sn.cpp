#include<iostream>
using namespace std;
int swap()
{
    int a,b,c;
    cout<<"Enter the number\n";
    cin>>a>>b;
    cout<<"Before a= "<<a<<"b= "<<b;
    cout<<"\n";
    c=a;
    a=b;
    b=c;
    cout<<"After a= "<<a<<"b= "<<b;
    return 0;
}
int main()
{
    using namespace std;
    cout<<swap();
}
