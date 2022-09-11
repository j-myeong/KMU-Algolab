#include <iostream>
using namespace std;

int** initialArr(int n);
int main() {
    int t; // Number of Testcase
    int tmp = 0;
    int a, b, n;
    cin >> t;
    for (int t_case = 0; t_case < t; t_case++) {
        cin >> n >> a >> b;
        int **arr = initialArr(n);
        int *num = new int[n * n];
        int s_cnt = 0;
        int step = 1;
        int x = -1;
        int y = 0;
        int tmp = n;
        while (s_cnt < n * n) {
            for(int i = 0; i < tmp; i++) { 
                x += step;
                num[s_cnt++] = arr[y][x];
            }
            tmp--;
            if (tmp < 1) break;
            for(int i = 0; i < tmp; i++) {
                y += step;
                num[s_cnt++] = arr[y][x];
            }
            step = -step;
        }
        for (int i = a - 1; i < b; i++)
            cout << num[i] << " ";
        cout << endl;
    }
}

int** initialArr(int n) {
    int **arr = new int*[n];
    for (int i = 1; i <= n; i++) {
        arr[i - 1] = new int[n];
        for (int j = 1; j <= n; j++) {
            arr[i - 1][j - 1] = (i - 1) * n + j;
        }
    }
    return arr;
}