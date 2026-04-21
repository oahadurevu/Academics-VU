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
    int s;
    cout<<"Enter searching Element ";
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(arr[i]==s)
        {
            cout<<s<<" is found ";
            break;
        }
    }
    if (arr[i]!=s)
    {
        cout<<"Not found";

    }
}
