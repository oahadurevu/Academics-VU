

#include<iostream>
using namespace std;

int countt(int arr[],int n,int x)

{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
}
return count;
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

  int num=countt(arr,n,x);


        cout<< "Total Number "<<num;

  }
