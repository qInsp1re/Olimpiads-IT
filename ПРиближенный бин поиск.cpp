#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m;;
    int mas[100000];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + n);
    for (int j = 0; j < m; j++) {
        cin >> x;
        int L = 0;
        int R = n - 1;
        while (L < R - 1) {
            int M = (L + R) / 2;
            if (x < mas[M]) {
                R = M;
            } else {
                L = M;
            }
        }
        if (abs(mas[R] - x) < abs(mas[L] - x)) {
            cout << mas[R] << endl;
        } else {
            cout << mas[L] << endl;
        }
        if (L == R) {
            cout << mas[L] << endl;
        }
    }
}