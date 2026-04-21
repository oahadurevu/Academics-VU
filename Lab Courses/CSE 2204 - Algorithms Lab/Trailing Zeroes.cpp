#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter aaray Size ";
    cin >>n;
    int counter=0;
    while (n>0)
    {
        n=n/5;
        counter=counter+n;


    }
    cout << "Output "<<counter;


}
