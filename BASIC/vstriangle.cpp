/* Identify the triangle is valid or invalid
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the sides of triangle\n";
    cin>>a>>b>>c;
    if(a+b>c && c+a>b && b+c>a)
    {
        cout<<"vaild triangle\n";
    }
    else{
        cout<<"invaid triangle";
    }
    return 0;
}