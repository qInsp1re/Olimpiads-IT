#include <iostream>
#include <queue>

using namespace std;

int main() {
	int Kmax = 0, S = 0, Smax = 0;
	int a[20];
	for (int i = 0; i <= 20; ++i) {
		a[i] = rand() % 13 + 1;
	}
	for (int i = 0; i <= 20; ++i) {
		cout << a[i] << ' ';
	}
	queue <int> y;
	for (int i = 0; i <= 4; ++i) {
		y.push(a[i]);
		S += a[i];
	}
	Smax = S;
	for (int i = 5; i <= 19; ++i) {
		int m = y.front();
		S += a[i] - m;
		y.pop();
		if (S > Smax) {
			Smax = S;
			Kmax = i - 4;
		}
	}
	cout << Smax << ' ' << Kmax;
}
