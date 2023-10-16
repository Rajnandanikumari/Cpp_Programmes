#include<iostream>
using namespace std;
int cou_digit()
{
    using namespace std;
    int n,c;
    cout<<"Enter the number\n";
    cin>>n;
    for(int count = 1;n>0;count++) 
    c=count;
    cout<<"count of digit is: "<<c;
    return 0;
}
int main()
{
    using namespace std;
    cout<<cou_digit();
}