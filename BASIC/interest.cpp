//simple interest and total amount
#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si,am;
    cout<<"Enter the value\n";
    cout<<"principal: \n";
    cin>>p;
    cout<<"rate :\n";
    cin>>r;
    cout<<"time : \n";
    cin>>t;
    //si=p*r*t/100;
    si=p*r*t/100;
    cout<<"simple interest is Rs"<<si<<"\n";
    //amount = si+p;
    am = si+p;
    cout<<"Amount is Rs"<<am;
    return 0;



}