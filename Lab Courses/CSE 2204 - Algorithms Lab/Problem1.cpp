#include <iostream>
using namespace std;

int squareRoot(int n) {
    int low = 0, high = n, s = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (mid * mid <= n) {
            s = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return s;
}

int main() {
    int n;
    cout << "Enter a non-negative number: ";
    cin >> n;
    cout << "Square root is: " << squareRoot(n) << endl;
    return 0;
}

