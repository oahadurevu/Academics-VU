#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
         int x,y ;

         cin >>x>>y;

         if (x==y)
         {
             cout<<-1;
         }
         else if (x>y)
         {
             int subtract= x-y;
             if ( subtract>y)
             cout<<3;
             else
             cout<<-1;
         }
         else
         {
             cout <<2;
         }
    }}
