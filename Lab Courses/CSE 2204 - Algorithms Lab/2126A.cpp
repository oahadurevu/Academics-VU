#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string  x;
        cin>>x;
        char s='9';


      for(char ch: x)
        {
            if (ch < s)
            {
                s=ch;
            }
        }
        cout<<s;

    }
}
