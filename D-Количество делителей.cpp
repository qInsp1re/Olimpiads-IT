#include <iostream>

using namespace std;

int main() {
    long long x, cnt = 0;
    cin >> x;
        for (int i = 1; i <= x; i++) {
            if (x % i == 0) {
                cnt++;
            }
        }
        cout << cnt;
        return 0;
}
