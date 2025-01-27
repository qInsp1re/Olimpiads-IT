#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a[100][100];
	for (int i = 0; i < 100; ++i) {
		for (int j = 0; j <= i; ++j) {
			if (j == 0 || j == i) {
				a[i][j] = 1;
			} else {
				a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]);
			}
		}
	}
	int n, m, t;
	cin >> n >> m >> t;
	long long res = 0;
	for (int i = 4; i < t; ++i) {
		int u = t - i;
		res += (a[n][i] * a[m][u]);
	}
	cout << res << endl;
	return 0;
}
