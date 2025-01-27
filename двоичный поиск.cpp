#include <iostream>

using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k;
    int mas[100000];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    for (int j = 0; j < k; j++) {
        cin >> x;
        int L = 0;
        int R = n;
        while (R - L > 1) {
            int M = (L + R) / 2;
            if (mas[M] <= x) {
                L = M;
            } else {
                R = M;
            }
        }

        if (mas[L] == x) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}