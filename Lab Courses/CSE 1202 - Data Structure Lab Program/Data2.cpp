#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter Size ";
    cin>>n;
    int arr[n];
    int i;
    for( i=0; i<n; i++)
    {
        cout<< "Enter the input= ";
        cin>>arr[i];
    }
    int nn;
    cout<<"Increase Array Size ";
    cin>>nn;
      n=n+nn;
    for(int i=0; i<n; i++)
    {
        cout<< "Enter the input= ";
        cin>>arr[i];
    }
      cout<< "Print ";
     // arr[i]=n+nn;
      cout<<arr[i]+arr[];


  }




