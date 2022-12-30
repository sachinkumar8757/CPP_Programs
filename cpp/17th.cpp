#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number of terms: ";
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    } 
    cout<<"sum of first "<<num<<" natural number is = "<<sum;
    return 0;
}