#include<iostream>
using namespace std;

int main ()
{
    /*int t;
    cout<<"Enter Test Case";
    cin>>t;
    while (t--)
    {*/

    int n;
    cout<<"Enter Array Element ";
    cin>>n;
    int arr[n];

    int Outer_count=0;
    int Inner_count=0;
    int swap_count=0;

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++)
    {
        Outer_count++;
        int temp;
        for(int j=i+1; j<n; j++)
        {
            Inner_count++;
            if (arr[i]>arr[j])
            {
                swap_count++;

                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        cout<<arr[i];
    }
    cout<<"\nOuter " <<Outer_count;
    cout<<"\nInner " <<Inner_count;
    cout<<"\nSwap " <<swap_count;
}
