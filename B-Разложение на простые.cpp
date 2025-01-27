#include <iostream>

using namespace std;

int main() {
    int n, d, k;
    cin >> n;
    d = 2;
    k = 4;
    while (k <= n) {
        while (n % d == 0) {
            cout << d << ' ';
            n /= d;
        }
        k += 2 * d + 1;
        d += 1;
    }
    if (n > 1) {
        cout << n;
    }
}