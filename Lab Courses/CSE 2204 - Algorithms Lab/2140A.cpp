
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main ()
{

int n;
cin>>n;
  string s1;
  cin>>s1;

  string sorted=s1;
  sort(sorted.begin(),sorted.end());

 int dijit=0;
    for (int i=0 ;i<n;i++)
    {
        if(s1[i]=='1' && sorted [i]=='0')
        {
            dijit++;
        }
    }
    if ( dijit==0)
  {
      cout<<0;
  }
      else if (dijit==1)
      {
          cout<<1;
      }
      else
      {
          cout<<2;
      }



}
