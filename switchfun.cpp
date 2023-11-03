// Online C++ compiler to run C++ program online
//WAP to check whether the entered character is vowel or not.
#include<iostream>
using namespace std;
void show()
{
    int choice;
    float l,b,h,result;
    cout<<"Choices are : \n";
    cout<<"1.Area \n2.Perimeter \n3.Volume\n";
    cout<<"Enter your choice \n";
    cin>>choice;
    if(choice ==1 || choice ==2)
    {
        cout<<"Enter length , breadth..";
        cin>>l>>b;
    }
    else if(choice==3){
        cout<<"Enter length , breadth , height...\n";
        cin>>l>>b>>h;
        switch (choice)
        {
            case 1:result=l*b;
            cout<<"AREA is: "<<result;
                break;
            case 2: result=2*(l+b);
            cout<<"PERIMETER is : "<<result;
            break;
            case 3: result=l*b*h;
            cout<<"VOLUME is : "<<result;
            break;
            default:
            cout<<"Invalid choices";
            break;
        }
    }
}
int main()
{
    using namespace std;
    show();
    return 0;
}