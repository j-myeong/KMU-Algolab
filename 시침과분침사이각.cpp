#include <iostream>
using namespace std;

int angleClock(int h, int m);

int main() {
    int t;
    int h, m;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> h >> m;
        cout << angleClock(h, m) << '\n';
    }

    return 0;
}

int angleClock(int h, int m) {
    double h_angle = (h * 30) + (m * 0.5);
    int m_angle = (m / 5 * 30) + (m % 5 * 6);
    double result = h_angle - m_angle;
    if (result < 0) result *= -1;
    if (result > 180) result = 360 - result;
    return (int)result;
}