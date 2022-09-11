#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int result = 1;
        string tmp = "";
        cin >> tmp;
        for (int i = 0; i < tmp.length(); i++) {
            if (i == 0 && 48 <= tmp[i] && 57 >= tmp[i]) {
                result = 0;
                break;
            }
            if ((48 > tmp[i] || (57 < tmp[i] && tmp[i] < 65) || (90 < tmp[i] && tmp[i] < 97) || tmp[i] > 122) && tmp[i] != 95) {
                result = 0;
                break;
            }
        }
        cout << result << endl;
    }
}