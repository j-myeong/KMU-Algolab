#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        string answer = "";
        string n;
        cin >> n;
        int *n_int = new int[n.length()];
        int idx = 0;
        reverse(n.begin(), n.end());
        for (int i = 0; i < n.length(); i++) {
            n_int[i] = n[i] - 48;
        }
        bool flag = false;
        for (int i = 1; i < n.length(); i++) {
            n_int[i] -= n_int[i - 1];
            if (flag) {
                n_int[i]--;
                flag = false;
            }
            if (n_int[i] < 0) {
                n_int[i] += 10;
                flag = true;
            }
            answer += to_string(n_int[i - 1]);
        }
        reverse(answer.begin(), answer.end());
        for (int i = 0; i < answer.length(); i++) {
            if (answer[i] <= 48) continue;
            else {
                idx = i;
                break;
            }
        }
        answer = answer.substr(idx);
        if (n_int[n.length() - 1] == 0) cout << answer << endl;
        else cout << 0 << endl;
    }
}