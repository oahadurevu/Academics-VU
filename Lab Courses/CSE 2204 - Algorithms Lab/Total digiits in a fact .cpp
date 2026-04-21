#include<iostream >
#include<cmath>

using namespace std;

int main ()
{
    int n ,digit;
    cout <<"Enter Array Size ";
    cin >>n;

    if (n==0||n==1)
    {
        cout << "1"<<endl;
    }
    else{

    float sum=0;

    for(int i=2;i<=n;i++)
    {
        sum =sum+log10(i);//nlog n

    }
    digit=floor(sum)+1;
    cout <<digit<<endl;

}
}


