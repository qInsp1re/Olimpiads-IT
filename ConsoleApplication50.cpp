#include <iostream>
using namespace std;

int main() {
	long long w, h, n;
	cin >> w >> h >> n;
	long long L = max(w, h);
	long long R = L * n;
	while (R - L > 1) {
		long long Mid = (R + L) / 2;
		long long res = (Mid / w) * (Mid / h);
		if (res < n) {
			L = Mid;
		} else {
			R = Mid;
		}
	}
	cout << R;
}