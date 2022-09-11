#include <iostream>
using namespace std;

int main() {
    int t; // Number of test case
    cin >> t;
    int k = 0; // Integer k
    for (int i = 0; i < t; i++) {
        cin >> k; // Input K
        for (int up_row = 0; up_row < k/2 +1; up_row++) {
            for (int hyphen = 0; hyphen < up_row; hyphen++) {
                cout << '-';
            }
            for (int print = 0; print < k - (up_row * 2); print++) {
                if (print % 2 == 0) cout << '*';
                else cout << '+';
            }
            for (int hyphen = 0; hyphen < up_row; hyphen++) {
                cout << '-';
            }
            cout << '\n';
        }
        for (int down_row = k/2 - 1; down_row >= 0; down_row--) {
            for (int hyphen = 0; hyphen < down_row; hyphen++) {
                cout << '-';
            }
            for (int print = 0; print < k - (down_row * 2); print++) {
                if (print % 2 == 0) cout << '*';
                else cout << '+';
            }
            for (int hyphen = 0; hyphen < down_row; hyphen++) {
                cout << '-';
            }
            cout << '\n';
        }
    }
}