#include<iostream>
using namespace std;

int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
      int num,xdijit;
      cin>>xdijit>>num;

      if (num%2==0)
      {
          cout<<"Output " <<0;
      }
      else
      {
          cout<<"Output"<<xdijit;
      }

  }

}

