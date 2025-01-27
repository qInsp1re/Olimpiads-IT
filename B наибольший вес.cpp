#include <iostream>

using namespace std;

int n, m;
int w[100];
int a[100][10000];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> w[i];
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j <= m; ++j) {
			a[i][j] = a[i - 1][j];
			if ((j >= w[i]) && ((a[i-1][j-w[i]] + w[i]) > a[i][j])) {
				a[i][j] = a[i - 1][j - w[i]] + w[i];
			}
		}
	}
	cout << a[n][m];
}
