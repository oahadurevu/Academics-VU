#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        int countzero=0,countneg=0;
        for (int i=0;i<n;i++)
        {
            cin>>a;
            if(a==0)
            {
                countzero++;
            }
            else if (a==-1)
            {
                countneg++;

            }
        }
            if(countneg%2==1)
            {
                countzero+=2;

            }
            cout <<countzero;


        }
    }


