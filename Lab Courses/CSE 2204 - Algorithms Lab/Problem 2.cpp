#include<iostream>
using namespace std;

int findind(int arr[],int n,int x)

{
    int left=0,right=n-1;

    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(x==arr[mid])
        {
            return mid;
        }
        if (arr[left]<=arr[mid])
        {
            if (x>=arr[left]&& x<arr[mid])
            {
                right=mid-1;
            }
         else
        {
            left=mid+1;
        }
        }
        else
        {
           if(x>arr[mid] && x<=arr[right])
           {
               left=mid+1;
           }
           else
            {
            right=mid-1;
           }
        }
    }
        return -1;
    }



int main ()

{
    int n,x;

    cout <<"Enter Number ";
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Find Index Of X ";
    cin>>x;

    int output=findind(arr,n,x);
    cout <<output;
      if (output==-1)
  {
    cout<<"Target Not found ";
  }
  else
    {
        cout<< "Index Number "<<output;

  }

}
