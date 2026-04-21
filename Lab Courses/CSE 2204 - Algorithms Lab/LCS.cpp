#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    int a = s1.size();
    int b = s2.size();

    int lcsTable[a + 1][b + 1];

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            if (i == 0 || j == 0)
                lcsTable[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                lcsTable[i][j] = lcsTable[i - 1][j - 1] + 1;
            else
                lcsTable[i][j] = max(lcsTable[i - 1][j], lcsTable[i][j - 1]);
        }
    }

    int lcs_length = lcsTable[a][b];
    string lcs = "";

    int i = a, j = b;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            lcs = s1[i - 1] + lcs;
            i--;
            j--;
        } else if (lcsTable[i - 1][j] > lcsTable[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    cout << "\nThe LCS: " << lcs << endl;
    cout << "LCS length: " << lcs_length << endl;

}
