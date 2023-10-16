#include<stdio.h>
#include<iostream>
using namespace std;
    int vowel(char c){
    if(c==a||c==i||c==o||c==u||c==e)
    {
    cout<<"vowel\n";
    }
    else 
    {
        cout<<"not vowel";
    }
    return 0;
   }

int main()
{
    cout<<vowel('a');
}