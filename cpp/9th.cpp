#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swap...."<<endl;
    cout<<"a="<<a<<" b="<<b;
}

/*#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a and b :";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swap...."<<endl;
    cout<<"a="<<a<<" b="<<b;
}*/