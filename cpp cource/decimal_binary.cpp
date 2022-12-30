#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[10];
    int i=-1;
    while(n>0)
    {
        int r=n%2;
        i=i+1;
        arr[i]=r;
        n=n/2;
    }
    cout<<"In binary: ";
    for(int p=i;p>=0;p--)
    {
        cout<<arr[p]<<" ";
    }
  return 0;
}