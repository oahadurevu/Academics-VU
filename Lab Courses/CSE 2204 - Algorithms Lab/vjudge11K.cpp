#include <iostream>
using namespace std;

int reversenum1(int n1) {

    int revNum1 = 0;
    while (n1 > 0) {
        revNum1 = revNum1 * 10 + n1 % 10;
        n1 = n1 / 10;
    }
    return revNum1;
}

int main() {
    int t;
    cin>>t;
    while(t--){
     int n,n2;
    cin>>n>>n2;


    int rev1,rev2,sum=0;

    rev1=reversenum1(n);
     rev2=reversenum1(n2);
     sum=rev1+rev2;
     int result=reversenum1(sum);
     cout<<result<<endl;


}
}
