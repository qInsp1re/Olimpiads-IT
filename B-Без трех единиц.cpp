#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int f[40];
	f[1] = 2;
	f[2] = 4;
	f[3] = 7;
	for (int i = 4; i <= n; ++i) {
		f[i] = (f[i - 1] + f[i - 2] + f[i - 3]);
	}
	cout << f[n];
}
