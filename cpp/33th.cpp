#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    char ch;
    cout<<"Enter operation to be performed: ";
    cin>>ch;
    switch(ch)
    {
         case'+':cout<<a+b;
        break;
        case'-':cout<<a-b;
        break;
         case'*':cout<<a*b;
        break;
         case'/':cout<<a/b;
        break;
         case'%':cout<<a%b;
        break;
        default:cout<<"Enter valid character:";
    }
    return 0;
}