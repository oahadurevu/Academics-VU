#include<iostream>
using namespace std;
int main()
{
    int n,m,mul;
    cin>> n>> m;
    mul=n;
    if(m<n)
    {
        mul=m;
    }
    if(n>=1&&m<=100)
    {
        if(mul%2==0)
        {
            cout << "Malvika"<< endl;
        }
        else
        {
            cout <<"Akshat"<< endl;
        }
    }
}
