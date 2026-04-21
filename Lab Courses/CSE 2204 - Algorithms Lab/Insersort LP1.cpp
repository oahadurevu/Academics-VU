#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    for (int i=0; i<n; i++)
    {
        int key =arr[i];
        cout<<"After Insert " <<key << " : " ;
        int j=i-1;

        while (j>=0 && key <arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

        for (int k=0; k<i+1; k++)
        {
            cout <<arr[k] <<" " ;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter Arry Size :";
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
    insertionsort(arr,n);

}

