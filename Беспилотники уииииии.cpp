#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, zh;
	cin >> n >> m;
	vector <int> gor;
	vector <int> z;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int vvod;
			cin >> vvod;
			gor.push_back(vvod);
		}
	}
	cin >> zh;
	for (int i = 0; i < zh; i++) {
		int vvod;
		cin >> vvod;
		z.push_back(vvod);
	}
	sort(gor.begin(), gor.end());
	sort(z.begin(), z.end());
	int cnt = 0;
	int a1 = gor.size() - 1;
	int a2 = z.size() - 1;
	while ((a1 + 1) * (a2 + 1) > 0) {
		if (gor[a1] >= z[a2]) {
			cnt++;
			a1--;
			a2--;
		} else {
			a2--;
		}
	}
	cout << cnt << endl;
}