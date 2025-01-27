#include <iostream>

using namespace std;

bool prime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i < n - 1; ++i) {
            if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    for (int i = 2; i < n; ++i) {
        int a = n - i;
        if (prime(i) && prime(a)) {
            if (i < n / 2 + 1) {
                cout << i << " " << a;
            }
        }
    }
}
