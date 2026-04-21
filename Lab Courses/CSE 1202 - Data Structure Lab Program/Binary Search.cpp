#include<iostream>
using namespace std;
int main()
{ int maxsize;
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
    int item,Beg=0,End=n,mid=int((Beg+End)/2);
    cout<<"Enter Item";
    cin>>item;
  while(Beg<=End)
    {
        if(item<arr[mid])
        {
            End=mid-1;
        }
        else
        {
            Beg=mid+1;
        }
  mid=int((Beg+End)/2);
    }
    cout<<"Element "<<mid;
    }
