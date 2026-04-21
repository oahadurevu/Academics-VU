/*#include<iostream>
using namespace std;

int main ()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n,count=0;
        cin >>n;

        char s[n];
        for (int i =0 ;i<n;i++)
        {
            cin>>s[i];
            if (s[i]=='0')
            {
                count++;
            }
        }
        if (count>0)
        {
            cout<<"YEs";
        }
        else
        {
            cout<<"No";
        }

    }
}
*/#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool possible = false;

        // Check for any adjacent different characters
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
