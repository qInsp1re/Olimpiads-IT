﻿#include <iostream>

using namespace std;

int main() {
    int n, j, i, s = 0;
    cin >> n;
    int a[20][3];
    a[0][0] = a[0][1] = a[0][2] = 1;
    for (i = 1; i < n; ++i) {
        a[i][0] = a[i - 1][1] + a[i - 1][2];
        a[i][2] = a[i][1] = a[i - 1][0] + a[i - 1][1] + a[i - 1][2];
    }
    for (i = 0; i < 3; ++i) {
        s += a[n - 1][i];
    }
    cout << s << endl;
    return 0;
}
