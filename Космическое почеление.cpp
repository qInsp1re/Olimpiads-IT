#include <iostream>

using namespace std;

int main() {
	long long n, a, b, w, h;
	cin >> n >> a >> b >> w >> h;
	long long L = 0;
	long long R = min(w, h);
	while (L  + 1 < R) {
		long long Mid = (L + R) / 2;
		long long res = max((w / (a + 2 * Mid)) * (h / (b + 2 * Mid)), (h / (a + 2 * Mid)) * (w / (b + 2 * Mid)));
		if (res >= n) {
			L = Mid;
		} else {
			R = Mid;
		}
	}
	cout << L;
}