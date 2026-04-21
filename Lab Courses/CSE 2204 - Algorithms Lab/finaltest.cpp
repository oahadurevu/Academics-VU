#include<iostream>
using namespace std;
int main ()
{
    int n;

    cin>>n;

    int act[n],st[n],fn[n];
    for (int i=0; i<n; i++)
{
    cin>>product[i]>>value[i]>>weight[i];
        vpw[i]=value[i]/weight[i];
    }
    for (i =0;i<n;i++)
    {
        if(st[i]>=fn[lastselected])
        {
            cout<<activity[i];
            lastselected=i;
        }
    }

}
