#include <iostream>
using namespace std;

int main() {
    int t; // Number of TestCase
    int n; // Number of Integers
    int tmp; // Temp
    int sum; // Sum of Integers
    cin >> t;
    for(int i = 0; i < t; i++) {
        sum = 0;
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> tmp;
            sum += tmp;
        }
        cout << sum << '\n';
    }
}