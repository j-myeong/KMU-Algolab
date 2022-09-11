#include <iostream>
using namespace std;

void list3Numbers(int a, int b, int c);

int main() {
    int numTestCases;
    int a, b, c;
    cin >> numTestCases;
    for(int i = 0; i < numTestCases; i++) {
        cin >> a >> b >> c;
        list3Numbers( a, b, c );
    }
    return 0;
}

void list3Numbers(int a, int b, int c) {
    if (a <= b) {
        if (b <= c) cout << a << " " << b << " " << c << '\n';
        else {
            if (a <= c) cout << a << " " << c << " " << b << '\n';
            else cout << c << " " << a << " " << b << '\n';
        }
    }
    else {
        if (c <= b) cout << c << " " << b << " " << a << '\n';
        else {
            if (a <= c) cout << b << " " << a << " " << c << '\n';
            else cout << b << " " << c << " " << a << '\n';
        }
    }
}