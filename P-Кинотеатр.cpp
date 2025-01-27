#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
}
int main() {
	long long n, m;
	cin >> n >> m;
    if (n == 1) {
        cout << m;
    } else if (m == 1) {
        cout << n;
    } else {
        cout << (gcd(n - 1, m - 1) + 1);
    }
}