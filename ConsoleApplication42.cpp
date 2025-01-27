#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double a, b, c, d;
double fun(long double x) {
	return a * x * x * x + b * x * x + c * x + d;
}
int main() {
	cin >> a >> b >> c >> d;
	if (a < 0) {
		a = -a;
		b = -b;
		c = -c;
		d = -d;
	}
	long double r = 1;
	long double l = -r;
	while (fun(l) * fun(r) >= 0) {
		l *= 2;
		r *= 2;
	}
	long double mid, v1, v2;
	for (int i = 0; i < 100; i++) {
		mid = (l + r) / 2;
		v1 = fun(mid);
		v2 = fun(r);
		if (v1 * v2 <= 0) {
			l = mid;
		} else {
			r = mid;
		}
	}
	cout << setprecision(12) << l;
}