#include<iostream>
using namespace std;

int findind(int arr[],int n,int x)

{
    int left=0,right=n-1,mid=0;
    int location=-1;

    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(1==arr[mid])
        {
            location=mid;
            right=mid-1;
            }
         else
        {
            left=mid+1;
        }
    }
    return location;
    }

int main ()

{
    int n,x=1;
    cout <<"Enter array Size : ";
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int output=findind(arr,n,x);

if (output==-1)
{
    cout<<"Not Found";
}
  else{
    cout<<"First 1 Index Number  is "<<output;
  }

}
