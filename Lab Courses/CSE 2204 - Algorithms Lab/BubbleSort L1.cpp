#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void bubblesort(int arr[],int n)
{
    int comparison_counter=0,swapcounter=0;
    bool swapp;

    for (int i=0;i<n-1;i++)
    {
        swapp = false;

        for(int j=0; j<n-i-1; j++)
        {
            comparison_counter++;

            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapcounter++;
                swapp=true;
            }
        }
        if (swapp==false)
            break;
    }
    cout<<"Comparison Counter: " << comparison_counter<<endl;
    cout<<"Swap Counter: " <<swapcounter <<endl;

}
void output(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    bubblesort(arr, n);
    output(arr,n);
    }

    if (c=="best")
    {

    for (int i=0; i<n; i++)
        arr[i] = i+1;
    cout<<"Best Case"<<endl;
    bubblesort(arr, n);
    output(arr,n);
    }

    if (c=="worst")
    {

    for (int i=0; i<n; i++)
        arr[i] = n-i;

    cout<<"worst Case"<<endl;
    bubblesort(arr, n);
    output(arr,n);
    }
}
