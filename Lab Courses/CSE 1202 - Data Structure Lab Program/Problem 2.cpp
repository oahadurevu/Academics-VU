#include <iostream>
using namespace std;

const int MAX = 100;
int main() {
    int entered[MAX], served[MAX];
    int queue[MAX];
    int front = 0, rear = -1;
    int n, m;

    cout << "Enter number of entered customers: ";
    cin >> n;
    cout << "Enter entered sequence:\n";
    for (int i = 0; i < n; i++) {
        cin >> entered[i];
    }

    cout << "Enter number of served customers: ";
    cin >> m;
    cout << "served :\n";
    for (int i = 0; i < m; i++) {
        cin >> served[i];
    }

    int i = 0, j = 0;
    int pushCount = 0;
    cout << "\nQueue Operations:\n\n";

    while (i < n) {

        queue[++rear] = entered[i];
        cout << "Push " << entered[i] << "\n";
        i++;
        pushCount++;

        if (pushCount == 2 && j < m && front <= rear && queue[front] == served[j]) {
            cout << "Pop " << queue[front] << "\n";
            front++;
            j++;
            pushCount = 0;
        }
    }
    while (j < m && front <= rear && queue[front] == served[j]) {
        cout << "Pop " << queue[front] << "\n";
        front++;
        j++;
    }
    cout << "\nFinal queue: [";
    for (int k = front; k <= rear; k++) {
        cout << queue[k];
        if (k != rear) cout << ", ";
    }
    cout << "]\n";
    if (j == m)
        cout << "\nValid serving sequence.\n";
    else
        cout << "\nInvalid serving sequence.\n";

    return 0;
}
