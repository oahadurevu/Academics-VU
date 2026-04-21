#include <iostream>
using namespace std;
const int MAX = 100;
int main() {
    int n;
    int loaded[MAX], unloaded[MAX], stack[MAX];
    int top = -1;

    cout << "Enter number of containers: ";
    cin >> n;
    cout << "loaded \n";
    for (int i = 0; i < n; i++) {
        cin >> loaded[i];
    }
    cout << "unloaded \n";
    for (int i = 0; i < n; i++) {
        cin >> unloaded[i];
    }

    int j = 0;
    cout << "\n Stack Operations:\n\n";
    for (int i = 0; i < n; i++) {
        stack[++top] = loaded[i];
        cout << "Push " << loaded[i] << " stack: [";
        for (int k = 0; k <= top; k++) {
            cout << stack[k];
            if (k != top) cout << ", ";
        }
        cout << "]\n";

        while (top >= 0 && stack[top] == unloaded[j]) {
            cout << "Pop " << stack[top] << " stack: [";
            top--;
            for (int k = 0; k <= top; k++) {
                cout << stack[k];
                if (k != top) cout << ", ";
            }
            cout << "]\n";
            j++;
        }
    }
    if (top == -1)
        cout << "\n Valid unloading sequence \n";
    else
        cout << "\n Invalid unloading sequence \n";
    return 0;
}
