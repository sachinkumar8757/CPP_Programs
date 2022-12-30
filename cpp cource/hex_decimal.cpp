#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number in Hexadecimal: ";
    cin>>n;
    int sum=0;
    int count=-1;
    while(n>0)
    {
        int r=n%10;
        count=count+1;
        sum=sum+r*pow(16,count);
        n=n/10;
    }
    cout<<"in decimal it is: "<<sum;
    return 0;
}