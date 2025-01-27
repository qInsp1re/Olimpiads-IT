#include <iostream>

using namespace std;

int nod(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    int n, k, a;
    cin >> n >> k;
    for (int i = 1; i < n; i++) {
        cin >> a;
        k = nod(k, a);
    }
    cout << k;
    return 0;
}