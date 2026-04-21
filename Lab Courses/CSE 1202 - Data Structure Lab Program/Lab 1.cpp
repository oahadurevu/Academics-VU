#include<iostream>
using namespace std;
int main ()
{int n;
      cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<< "Enter the input= ";
        cin>>arr[i];
    }
    int maximum=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>maximum)
        {
            maximum=arr[i];
        }
    }
    cout <<"Maximum Number is : "<<maximum<<endl;
        int minimum=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<minimum)
        {
            minimum=arr[i];
        }
    }
    cout <<"Minimum Number is : "<<minimum<<endl;
    int sum=0;
        for(int i=0; i<n; i++)
        {
            sum=sum+arr[i];
        }
        cout<<"Sum of All Elements : "<<sum<<endl;
        int even=0,odd=0;
        cout<<"Even = ";
 for(int i=0; i<n; i++)
 {
            if(arr[i]%2==0)
            {
                even=arr[i];
               // cout<<"Even "<<even<<endl;

                cout<<arr[i]<<" ";
            }}
            cout<<"\n Odd =  ";
          for(int i=0; i<n; i++){
          if(arr[i]%2!=0)

            {
                odd=arr[i];
                //cout<<"Odd"<<odd<<endl;
               cout<<arr[i] <<" " ;
            }
}

}
