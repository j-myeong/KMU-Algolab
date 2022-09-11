#include <iostream>
using namespace std;

int main() {
    int t; // Number of TestCase
    cin >> t;
    int n;
    for (int test = 0; test < t; test++) {
        cin >> n;
        int mid =  n / 2 + 1;
        for(int i = 0; i < mid; i++) {
            for(int j = 0; j < mid; j++) {
                if (i == 0 || i == mid - 1) {
                    if (j == 0 || j == mid - 1) {
                        if (i == mid - 1 && j == mid - 1) cout << '*';
                        else cout << '+';
                    } 
                    else cout << '-';
                }
                else {
                    if (j == 0 || j == mid - 1) cout << '|';
                    else if (i == j) cout << '\\';
                    else cout << '.';
                }
            }
            for(int j = mid; j < n; j++) {
                if (i == 0 || i == mid - 1) {
                    if (j == n - 1) cout << '+';
                    else cout << '-';
                }
                else {
                    if (j == n - 1) cout << '|';
                    else if (j == (n - i - 1)) cout << '/';
                    else cout << '.';
                }
            }
            cout << '\n';
        }
        for(int i = mid; i < n; i++) {
            for(int j = 0; j < mid; j++) {
                if (i == n - 1) {
                    if (j == 0 || j == mid - 1) cout << '+';
                    else cout << '-';
                }
                else {
                    if (j == 0 || j == mid - 1) cout << '|';
                    else if (j == (n - i - 1)) cout << '/';
                    else cout << '.';
                }
            }
            for(int j = mid; j < n; j++) {
                if (i == n - 1) {
                    if (j == n - 1) cout << '+';
                    else cout << '-';
                }
                else {
                    if (j == n - 1) cout << '|';
                    else if (i == j) cout << '\\';
                    else cout << '.';
                }
            }
            cout << '\n';
        }
    }
}