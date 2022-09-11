#include <iostream>
using namespace std;

int multipleData(unsigned long int n);
int main() {
    int t; // Number of Testcase
    unsigned long int n;
    unsigned long int tmp;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        tmp = n;
        while(tmp >= 10) {
            tmp = multipleData(tmp);
        }
        cout << tmp << endl;
    }
}

int multipleData(unsigned long int n) {
    if (n < 10) return n;
    unsigned long int tmp = n;
    int digit = 0;
    int rest[10] = {
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    };
    unsigned long int sum = 1;
    do {
        rest[digit++] = tmp % 10;
        tmp /= 10;
    } while (tmp != 0);
    for (int i = 0; i < digit; i++) {
        if(rest[i] > 0) sum *= rest[i];
        else if (rest[i] == -1) break;
        else continue;
    }
    return sum;
}