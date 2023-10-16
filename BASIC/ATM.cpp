//ATM choice 
#include<iostream>
using namespace std;
int manin()
{
    int choice;
    cout<<"choice are: \n";
    cout<<"withraw amount \n 2.Balance Enquiry \n 3.Pin Generation\n 4.Exit\n";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"withraw amount";
           break;
        case 2:cout<<"Generated Pin is 8520";
           break;
        case 3:cout<<"Exit";
        break;
        default:
        cout<<"Invalid choices";
        
    }
    return 0;      
    }


