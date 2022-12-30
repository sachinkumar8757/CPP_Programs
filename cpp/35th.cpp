#include<iostream>
using namespace std;
int sum_of_natural(int n)
{
    while(n>1)
     return n+sum_of_natural(n-1);
}
int main()
{
    int  n;
    cout<<"Enter number of term: ";
    cin>>n;
    int sum=sum_of_natural(n);
    cout<<sum;
    return 0;
}