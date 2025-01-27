#include <iostream>

using namespace std;

int main() {
	int n;
	int a[5010], b[5010], c[5010], t[5010];
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		cin >> b[i];
		cin >> c[i];
	}
	t[0] = 0; t[1] = a[1]; t[2] = min(a[1] + a[2], b[1]);
	for (int i = 3; i <= n; i++) {
		t[i] = min(min(t[i - 1] + a[i], t[i - 2] + b[i - 1]), (t[i - 3] + c[i - 2]));
	}
	cout << t[n];
}
