#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter Size ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<< "Enter the input= ";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum of All Elements : "<<sum<<endl;
}
