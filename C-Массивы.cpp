#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	int a1[100000];
	int a2[100000];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a1[i];
	}
	sort(a1, a1 + n);
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> a2[i];
	}
	sort(a2, a2 + m);
	int L = 0;
	int R = a2[m];
	cout << R;
}
