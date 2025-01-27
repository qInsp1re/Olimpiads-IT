#include <iostream>

using namespace std;

int main() {
	int n, k, p;
	cin >> n >> k >> p;
	int a[1000000];
	int maximump = p;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (k == 1) {
			maximump += a[i];
			if (p < 0) {
				cout << -1;
				break;
			}
			else {
				cout << maximump;
			}
		}
	}
}
