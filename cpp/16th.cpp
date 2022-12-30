#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        cout<<"This is Alphabet";
    }
    else
    {
        cout<<"This is not Alphabet";
    }
}