#include <iostream>

using namespace std;

long long pow(long long a, long long p, long long m) {
    if (p == 0) {
        return 1;
    }
    if (p % 2 == 1) {
        return a * pow(a, p - 1, m) % m;
    }
    long long g = pow(a, p / 2, m);
    return g * g % m;
}
int main() {
    long long x, n, p;
    cin >> x >> n >> p;
    cout << pow(x, n, p);
}