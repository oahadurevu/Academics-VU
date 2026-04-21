 #include<iostream>
#include<climits>
using namespace std;

int main ()
{
    int n;
    cout << "Enter Array Size ";
    cin >>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    int maxsum=INT_MIN, sum=0;
    for (int i=0;i<n;i++)
    {

            sum=sum+arr[i];
        maxsum=max(sum,maxsum);
        if (sum<0)
        {
            sum=0;
        }
        }

     cout <<"TotalPoint " <<maxsum<<endl;//6
}
