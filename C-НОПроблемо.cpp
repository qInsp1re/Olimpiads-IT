#include <iostream>
#include <cstring>

using namespace std;

int x[1002], y[1002], dp[1002][1002];
int n, m, res;
int max(int i, int j) {
    return (i > j) ? i : j;
}
int f(int* x, int* y, int m, int n) {
    if (m == 0 || n == 0) {
        return 0;
    }
    if (dp[m][n] != -1) {
        return dp[m][n];
    }
    if (x[m] == y[n]) {
        return dp[m][n] = 1 + f(x, y, m - 1, n - 1);
    } else {
        return dp[m][n] = max(f(x, y, m, n - 1), f(x, y, m - 1, n));
    }
}
int main(void) {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> y[i];
    }
    memset(dp, -1, sizeof(dp));
    res = f(x, y, n, m);
    cout << res;
    return 0;
}