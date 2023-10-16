/* sum of the given numbers
*/
#include<iostream>
int main()
{
    using namespace std;
    int n,sum=0,rem;
    cout<<"Enter the number\n";
    cin>>n>>rem;
    rem = n%10;
    sum =sum+rem;
    n=n/10;
    cout<<"sum of num is:"<<sum;
    
    return 0;
}