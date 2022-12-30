#include<iostream>
using namespace std;
int main()
{
    int n,temp=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int count=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(count>=0)
    {
    for(int i=0;i<=count;i++)
    {
        if(arr[i]>arr[i+1])
        {
           temp= arr[i+1];
           arr[i+1]=arr[i];
           arr[i]=temp;
        }
    }
    count--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}