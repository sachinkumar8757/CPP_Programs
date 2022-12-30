#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number whose table has to be generate: ";
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<"x"<<i<<" = "<<num*i<<endl;
    }
}