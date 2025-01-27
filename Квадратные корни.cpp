#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double kor(double x) {
    return x * x + sqrt(x);
}
int main() {
    double c;
    cin >> c;
    double l = 0, r = c;

    for (int i = 0; i <= 100000; i++) {
        double m = (l + r) / 2;
        if (kor(m) > c) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << fixed << setprecision(9) << l;
    return 0;
}
