#include <iostream>

using namespace std;

int main() {
	int n, k, p;
	cin >> n >> k >> p;
	int a[100000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (k == 1) {
		for (int i = 0; i < n; i++) {
			p += a[i];
			if (p < 0) {
				cout << -1;
				break;
			}
		}
		if (p >= 0) {
			cout << p;
		}
	}
	if (k > 1) {
		for (int i = 0; i < n; i++) {
			if (a[i] <= 0) {
				if (k > i) {
					while (a[i] < 0) {
						i++;
					}
				}
			}
			p += a[i];
		}
		cout << p;
	}
}