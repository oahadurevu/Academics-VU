#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void selectionSort(int arr[],int n)
{
    int swap_count=0,comparison_count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            comparison_count++;
            if (arr[j]<arr[i])
            {
                swap (arr[j],arr[i]);
                swap_count++;
            }
        }
    }
      cout<<"Comparison_count "<<comparison_count<<endl;
    cout<<"Swap_ Count "<<swap_count<<endl;


}
void output(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout <<arr[i];
    }
}
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
    selectionSort(arr, n);
    output(arr,n);
    }

    if (c=="best")
    {

    for (int i=0; i<n; i++)
        arr[i] = i+1;
    cout<<"Best Case"<<endl;
    selectionSort(arr, n);
    output(arr,n);
    }

    if (c=="worst")
    {

    for (int i=0; i<n; i++)
        arr[i] = n-i;

    cout<<"worst Case"<<endl;
    selectionSort(arr, n);
    output(arr,n);
    }
}
