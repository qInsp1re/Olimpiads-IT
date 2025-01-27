#include <iostream>

using namespace std;

/* int a = 5;
int b = 6;
int f(int n0, int nk) {
	int c = 0;
	int s = 0;
	for (int i = n0; i <= nk; ++i) {
		if (b % 2 == 0) {
			c = a + i;
		} else {
			c = a + 2 * i;
		}
		a = b;
		b = c;
	}
	for (int i = nk + 1; i <= nk + 11; ++i) {
		if (b % 2 == 0) {
			c = a + i;
		} else {
			c = a + 2 * i;
		}
		a = b;
		b = c;
		s += c;
	}
	return s;
} */
int main() {
	int s = 0;
	int f[51];
	for (int i = 2; i <= 50; ++i) {
		if (i < 4) {
			f[i] = i + 3;
		} else {
			if (f[i - 1] % 2 == 0) {
				f[i] = f[i - 2] + i;
			}
			else {
				f[i] = f[i - 2] + 2 * i;
			}	
			if (i > 39) {
				s += f[i];
			}
		}

	}
	cout << s;
}
