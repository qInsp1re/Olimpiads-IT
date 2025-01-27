#include <iostream>

using namespace std;

int main() {
    int n, a[1001];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int cnt, max = 1;
    for (int i = 0, j = 1; j < n; ++i, ++j) {
        cnt = 1;
        while (a[i] <= a[j] && j < n) {
            ++cnt;
            ++i;
            ++j;
        }
        if (cnt > max) {
            max = cnt;
        }
    }
    cout << max;
    return 0;
}
