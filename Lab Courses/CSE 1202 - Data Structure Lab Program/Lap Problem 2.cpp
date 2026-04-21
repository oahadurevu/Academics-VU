#include<iostream>
using namespace std;
int main ()
{
    int n,i,x,z;
    cout<<"Enter Array size ";
    cin>>n;
    int arr[n];
    for( i=0; i<n; i++)
    {
        cout<< "Enter the input= ";
        cin>>arr[i];
    }
    cout<<"New Element ";
    cin>>x;
    arr[i]=x;
    n++;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

