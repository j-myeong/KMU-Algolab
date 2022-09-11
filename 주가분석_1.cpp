#include <iostream>
using namespace std;

int main() {
    int t; // Number of Testcase;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        int left = -1, mid = -1, right;
        int input;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> input;
            if (left == -1) {
                left = input;
                continue;
            }
            if (mid == -1) {
                mid = input;
                continue;
            }
            right = input;
            if (mid == right) continue;
            else if (left < mid && mid > right) sum++;
            left = mid;
            mid = right;
        }
        cout << sum << endl;
    }
}