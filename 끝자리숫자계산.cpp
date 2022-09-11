#include <iostream>
using namespace std;

int main() {
    int t; // Number of Testcase
    int n; // Number of Integers
    int tmp; // Temp
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        long rst = 1; // result;  
        for (int j = 0; j < n; j++) {
            cin >> tmp;
            rst *= tmp;
            rst %= 10;
        }
        cout << rst << '\n';
    }
}