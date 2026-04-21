#include<iostream>
using namespace std;
int main()
{
    int maxsize;
    cout<<"Enter Max Size";
    cin>>maxsize;
    int arr[maxsize];
    int n;
    cout<<"Enter Array Size";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int del,item;
    cout<<"Enter Deleting index ";
    cin>>del;
    item=arr[del];

    for(int i=del;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<endl;
    }
    n=n-1;
}
