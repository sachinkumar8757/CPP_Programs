#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter binary number: ";
    cin>>n;
    int count=-1,sum=0;
    while(n>0)
    {
        int r=n%10;
        count=count+1;
        sum=sum+(r*pow(2,count));
        n=n/10;
    }
    cout<<"In decimal it is : "<<sum;
    return 0;
}