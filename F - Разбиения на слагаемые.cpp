#include <iostream>

using namespace std;

int x[50];
void f(int pos, int m, int num) {
	if (!num) {
		cout << x[0] << ' ';
		for (int i = 1; i < pos; i++) {
			cout <<  x[i] << ' ';
		}
		cout << endl;
	} else {
		for (int i = 1; i <= min(m, num); ++i) {
			x[pos] = i;
			f(pos + 1, i, num - i);
		}
	}
}
int main() {
	int n;
	cin >> n;
	f(0, n, n);
}
