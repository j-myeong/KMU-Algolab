#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t; // Number of TestCase
    cin >> t;
    for (int test = 0; test < t; test++) {
        int x[4];
        int y[4];
        int round = 0;
        int range = 0;
        cin >> x[0] >> y[0] >> x[1] >> y[1];
        cin >> x[2] >> y[2] >> x[3] >> y[3];
        int tmp = max(x[1], x[3]);
        int *x_arr = new int[max(x[1], x[3])]();
        tmp = max(y[1], y[3]);
        int x_tmp = 0;
        int y_tmp = 0;
        int *y_arr = new int[max(x[1], x[3])]();
        if (x[1] < x[2] || x[3] < x[0] || y[1] < y[2] || y[3] < y[0]) // 안겹치는 조건
        {
            round += abs(x[1] - x[0]) + abs(y[1] - y[0]) + abs(x[3] - x[2]) + abs(y[3] - y[2]);
            round *= 2;
            range += abs(x[1] - x[0]) * abs(y[1] - y[0]) + abs(x[3] - x[2]) * abs(y[3] - y[2]);
        }
        else // 그 외
        {
            for (int i = x[0]; i < x[1]; i++) {
                x_arr[i] += 1;
                if(x_arr[i] == 2) x_tmp++;
            }
            for (int i = x[2]; i < x[3]; i++) {
                x_arr[i] += 1;
                if(x_arr[i] == 2) x_tmp++;
            }
            for (int i = y[0]; i < y[1]; i++) {
                y_arr[i] += 1;
                if(y_arr[i] == 2) y_tmp++;
            }
            for (int i = y[2]; i < y[3]; i++) {
                y_arr[i] += 1;
                if(y_arr[i] == 2) y_tmp++;
            }

            round += abs(x[1] - x[0]) + abs(y[1] - y[0]) + abs(x[3] - x[2]) + abs(y[3] - y[2]);
            round *= 2;
            round -= (x_tmp + y_tmp) * 2;
            range += abs(x[1] - x[0]) * abs(y[1] - y[0]) + abs(x[3] - x[2]) * abs(y[3] - y[2]);
            range -= (x_tmp * y_tmp);
        }
        cout << range << " " << round << endl;
    }
}