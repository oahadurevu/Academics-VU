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
    int maximum=arr[0];
 for(int i=0;i<n;i++)
{
    if (arr[i]>maximum)
    {
        maximum=arr[i];
    }
}
  cout <<"Maximum Value "<< maximum;

}
