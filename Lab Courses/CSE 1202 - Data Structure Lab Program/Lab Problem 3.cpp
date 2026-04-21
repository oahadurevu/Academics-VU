#include<iostream>
using namespace std;
int main ()
{
    int n,i,z,maxx;
    cout<<"Maximum Array Size ";
    cin>>maxx;
    int arr[maxx];
    cout<<"Enter Array ";
    cin>>n;

    for( i=0; i<n; i++)
    {
        cout<< "Enter the input= ";
        cin>>arr[i];
    }
    cout<<"New Element ";
    cin>>z;
    for(i=n; i<(n+z); i++)
    {
        cout<< "Enter the input= ";
        cin>>arr[i];
    }
    cout<<"Total "<<endl;
    for(i=0; i<(n+z); i++)
    {
        cout<<arr[i]<<endl;
    }
}
