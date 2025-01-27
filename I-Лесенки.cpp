#include <iostream>

using namespace std;

int func(int a, int b) {
    if (!b) {
        return 1;
    }
    int cnt = 0;
    for (int i = 1; i < a; ++i) {
        if (b - i >= 0) {
            cnt += func(i, b - i);
        }
    }
    return cnt;
}
int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cnt += func(i, n - i);
    }
    cout << cnt;
    return 0;
}
