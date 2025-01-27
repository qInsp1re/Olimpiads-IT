#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector < vector <int> > dp(n + 3, vector <int>(m + 3));
	dp[2][2] = 1;
	int si = 2, sj = 2;
	while ((si < n + 1) || (sj < m + 1)) {
		if (sj == m + 1) {
			++si;
		} else {
			++sj;
		}
		int i = si;
		int j = sj;
		while ((i <= n + 1) && j >= 2) {
			dp[i][j] = dp[i + 1][j - 2] + dp[i - 1][j - 2] + dp[i - 2][j - 1] + dp[i - 2][j + 1];
			++i;
			--j;
		}
	}
	cout << dp[n+1][m+1];
}