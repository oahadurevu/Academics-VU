
#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    string c;
    while (true)
    {
        cout <<" Do you want to insert another number ? (y/n): " ;
        cin >>c;
        if (c!="y")
            break;

        for (int i=0; i<n; i++)
        {



            cin >> arr[i];

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
}
int main()
{
    int n=0;
    int arr[n];


    insertionsort(arr,n);

}

