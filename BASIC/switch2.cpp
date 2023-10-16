#include<iostream>
using namespace std;
int main()
{
    int choice;
    int a,b,result;
    cout<<"Enter the choice\n";
    cout<<"1.sum\n 2.substract \n 3.product \n 4.Remainder";
    cin>>choice;
    cout<<"Enter the choice number\n";
    cin>>a>>b;
    switch(choice)
    {
        case 1:result=a+b;
          break;
        case 2:result=a-b;
           break;
        case 3:result=a*b;
           break;
        case 4:result=a%b;
            break;
        default:
            cout<<"invalid choices";
            break;
    }
    cout<<"Result is : "<<result;
    return 0;
    
}