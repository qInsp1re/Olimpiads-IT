#include <iostream>
#include <cmath>

using namespace std;

int n;
int a[100002];
int clst(int c) {
    int L = 0, R = n - 1;
    for (int i = 0; i < 100; ++i) {
        int mid = (R + L) / 2;
        if (a[mid] > c)
            R = mid;
        else
            L = mid;
    }
    if (L != R) {
        return (abs(a[R] - c) < abs(a[L] - c) ? R : L);
    }
    return L;
}

int main() {
    int k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0, c; i < k; ++i) {
        cin >> c;
        cout << a[clst(c)] << endl;
    }
    return 0;
}