#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, m, Mid;
    cin >> n >> m;;
    int mas[100000], x[100000];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + n);
    for (int i = 0; i < m; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < m; i++) {
        int L = 0;
        int R = n - 1;
        while (L < R - 1) {
            Mid = (L + R) / 2;
            if (x[i] < mas[Mid]) {
                R = Mid;
            } else {
                L = Mid;
            }
        }
        if (abs(mas[R] - x[i]) < abs(mas[L] - x[i])) {
            cout << mas[R] << endl;
        } else {
            cout << mas[L] << endl;
        }
        if (L == R) {
            cout << mas[L] << endl;
        }
    }
}