#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, m, n, i;
    cin >> a >> b >> c >> d;
    m = a * d + b * c;
    n = b * d;
    i = 2;
    while (i <= n && i <= m) {
        if (n % i == 0 && m % i == 0) {
            n = n / i;
            m = m / i;
        } else {
            i++;
        }
    }
    cout << m << " " << n;
    return 0;
}