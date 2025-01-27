#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long n, k = 0;
	cin >> n;
	for (int i = 1; i <= sqrt(n) - 1; ++i) {
		if (n % i == 0) {
			++k;
		}
	}
	k *= 2;
	if (sqrt(n) == int(sqrt(n))) {
		++k;
	}
	cout << k;
	return 0;
}

