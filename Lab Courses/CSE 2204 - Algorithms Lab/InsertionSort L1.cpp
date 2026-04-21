#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void insertionSort(int arr[],int n)
{
    int comparison_count=0;
     int shift_count = 0;
    for(int i=1; i<n; ++i)

    {
        int  key=arr[i];
        int  j=i-1;

        while ( j>=0 && arr[j]> key)

        {
            comparison_count++;

            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        shift_count++;
    }
    cout<<"Comparison_count "<<comparison_count<<endl;
     cout << "Shift Count = " << shift_count << endl;

}
void output(int arr[],int n)
{
    for (int i=0; i<n; i++)
    {
        cout <<arr[i]<<" " ;
    }
}
/*new wlta element notun kore add kore sort koret hobe  ..ekta ekta kore sort kot=rte nhobe ..*/

int main ()
{
    int n;
    string c;
    cout<<"Enter Array Size: ";
    cin >>n;
    int arr[n];

    cout<<"Enter (avg/best/worst) : ";
    cin>>c;
    srand(time(0));

    if (c=="avg" )
    {
        for (int i=0; i<n; i++)
            arr[i] = rand() % 10000;

        cout<<"Average Case"<<endl;
        insertionSort(arr, n);
        output(arr,n);
    }
    if (c=="best")
    {

        for (int i=0; i<n; i++)
            arr[i] = i+1;
        cout<<"Best Case"<<endl;
        insertionSort(arr, n);
        output(arr,n);
    }
    if (c=="worst")
    {
        for (int i=0; i<n; i++)
            arr[i] = n-i;

        cout<<"worst Case"<<endl;
        insertionSort(arr, n);
        output(arr,n);
    }
}
