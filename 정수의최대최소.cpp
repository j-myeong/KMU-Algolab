#include <iostream>
using namespace std;

int main() {
    int t; // Number of Testcase
    int n; // Number of Integers
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int num_arr[n]; // Array of Numbers
        for (int j = 0; j < n; j++) {
            cin >> num_arr[j];
        }
        int num_max = num_arr[0]; // Max of Number
        int num_min = num_arr[0]; // Min of Number
        for (int j = 0; j < n; j++) {
            if (num_max < num_arr[j]) num_max = num_arr[j];
            else if (num_min > num_arr[j]) num_min = num_arr[j];
        }
        cout << num_max << " " << num_min << '\n';
    }
}