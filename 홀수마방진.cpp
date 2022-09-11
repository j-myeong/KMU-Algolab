#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        int x = 0;
        int y = n / 2;
        int** arr = new int*[n];
        for (int i = 0; i < n; i++) arr[i] = new int[n];
        arr[0][y] = 1;

        for (int i = 2; i <= n * n; i++) {
            int tmp_x, tmp_y;
            tmp_x = x;
            tmp_y = y;
            x--; y++;
            if (x < 0) x = n - 1;
            if (y >= n) y = 0;
            if (arr[x][y] == 0) {
                arr[x][y] = i;
            }
            else {
                tmp_x++;
                arr[tmp_x][tmp_y] = i;
                x = tmp_x;
                y = tmp_y;
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << ' ';
            }
            cout << endl;
        }
    }
}