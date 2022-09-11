#include <iostream>
using namespace std;

void makeSquare(int n);
int main() {
    int t; // Number of Testcase
    int n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        makeSquare(n);
    }
}

void makeSquare(int n) {
    int start = (n/2) % 2;
    // Up
    for (int i = 0; i < n / 2; i++) {
        if (i == 0) {
            for (int j = 0; j < n; j++)
                cout << start;
        }
        else {
            for (int j = 0; j < n; j++) {
                if (j == 0 || j == (n - 1)) cout << start;
                else if (j >= i && j <= n-1 - i) cout << (i + start) % 2;
                else cout << (j % 2 == 0 ? start : !start);
            }
        }
        cout << endl;
    }
    // Down
    for (int i = n / 2; i >= 0; i--) {
        if (i == 0) {
            for (int j = 0; j < n; j++)
                cout << start;
        }
        else {
            for (int j = 0; j < n; j++) {
                if (j == 0 || j == (n - 1)) cout << start;
                else if (j >= i && j <= n-1 - i) cout << (i + start) % 2;
                else cout << (j % 2 == 0 ? start : !start);
            }
        }
        cout << endl;
    }
}