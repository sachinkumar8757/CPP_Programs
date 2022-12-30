#include<iostream>
using namespace std;
void fabonacci(int num)
{
    int i=3;
    int first=0;
    int last=1;
    int sum=0;
    cout<<first<<" "<<last<<" ";
    while(i<=num)
    {
        sum=first+last;
        cout<<sum<<" ";
        first=last;
        last=sum;
        i++;
    }
}
int main()
{
    fabonacci(7);
}