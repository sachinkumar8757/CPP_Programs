#include<iostream>
using namespace std;
int main()
{
    int n;
    int first_term=0;
    int last_term=1;
    int next_term;
    cout<<"Enter number of term: ";
    cin>>n;
    cout<<"Fabonnaci series is: ";
    cout<<first_term<<","<<last_term;
    for(int i=3;i<=n;i++)
    {
        next_term=first_term+last_term;
        cout<<","<<next_term;
        first_term=last_term;
        last_term=next_term;
    }
}