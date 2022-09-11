#include <iostream>
#include <cmath>
using namespace std;

int checkData(int n);
int main() {
    int t; // Number of Testcase
    int n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        cout << checkData(n) << endl;
    }
}

int checkData(int n) {
    int tmp = n;
    int digit = 0;
    int rest[10] = {
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    };
    int sum = 0;
    do {
        rest[digit++] = tmp % 10;
        tmp /= 10;
    } while (tmp != 0);
    for (int i = 0; i < digit; i++) {
        if (rest[i] != -1) sum += (int) pow(rest[i], digit);
        else break;
    }
    return sum == n ? 1 : 0;
}