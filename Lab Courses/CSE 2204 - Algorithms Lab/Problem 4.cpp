
#include<iostream>
using namespace std;

int findindex(int arr[],int n,int x)

{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
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

    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Find Index Of X ";
    cin>>x;

  int index=findindex(arr,n,x);

  if (index==-1)
  {
      cout<<"Target Not found ";
  }
  else
    {
        cout<< "Index Number "<<index;

  }


    }
