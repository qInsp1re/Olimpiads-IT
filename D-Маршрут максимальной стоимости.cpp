#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	string s;
	cin >> n >> m;
	int mm[100][100];
	char a[100][100];
	a[0][0] = '0';
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> mm[i][j];
			if (!i && !j) {
				continue;
			}
			if (!i) {
				mm[i][j] += mm[i][j - 1];
				a[i][j] = 'R';
			}
			if (!j) {
				mm[i][j] += mm[i - 1][j];
				a[i][j] = 'D';
			}
			if (i && j) {
				mm[i][j] += max(mm[i - 1][j], mm[i][j - 1]);
				if (max(mm[i - 1][j], mm[i][j - 1]) == mm[i - 1][j]) {
					a[i][j] = 'D';
				} else {
					a[i][j] = 'R';
				}
			}
		}
	}
	cout << mm[n - 1][m - 1];
	cout << endl;
	for (int i = n - 1;;) {
		for (int j = m - 1;;) {
			if (a[i][j] == '0') {
				reverse(s.begin(), s.end());
				s.erase(0, 1);
				cout << s << endl;
				return 0;
			}
			s.push_back(a[i][j]);
			s.push_back(' ');
			if (a[i][j] == 'R') {
				j -= 1;
				continue;
			}
			if (a[i][j] == 'D') {
				i -= 1;
				continue;
			}
		}
	}
	cout << endl;
	return 0;
}
