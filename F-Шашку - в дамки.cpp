#include <iostream>
#include <cassert>

using namespace std;

int f(int a, int b) {
    assert(b <= 8 && b >= 1 && a >= 1 && a <= 8);
    if (b == 8) {
        return 1;
    }
    if (a == 1) {
        return f(a + 1, b + 1);
    } else if (a == 8) {
        return f(a - 1, b + 1);
    } else {
        return f(a - 1, b + 1) + f(a + 1, b + 1);
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << f(n, m);
    return 0;
}
