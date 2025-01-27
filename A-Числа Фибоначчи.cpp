#include <iostream>

using namespace std;

int main() {
    long long f1, f2, f3, n;
    cin >> n;
    f1 = 1;
    f2 = 1;
    f3 = 0;
    for (int i = 3; i <= n; ++i) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    if (n > 2) {
        cout << f3;
    }    else {
        cout << 1;
    }
    return 0;
}