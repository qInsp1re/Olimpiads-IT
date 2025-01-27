#include <iostream>

using namespace std;

int main() {
	int w, h, n;
	cin >> w >> h >> n;
	int L = max(w, h);
	int R = L * n;
	while (R - L > 1) {
		int Mid = (R + L) / 2;
		int res = (Mid / w) * (Mid / h);
		if (res < n) {
			L = Mid;
		} else {
			R = Mid;
		}
	}
	cout << R;
}