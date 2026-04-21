
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter Number ";
    cin>>n;
    int arr[n];

    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int minimum=arr[0];
 for(int i=0;i<n;i++)
{
    if (arr[i]<minimum)
    {
        minimum=arr[i];
    }
}
  cout <<"Minimum Value "<< minimum;

}
