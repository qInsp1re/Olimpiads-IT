#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int calc(int len, vector <int>& a) {
    long long res = 0;
    for (int i = 0; i < a.size(); i++) {
        res += a[i] / len;
    }
    return res;
}

int main() {
    int n, k;
    vector <int>  a;
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long L = 0, R = 1e7 + 1;
    while (R - L > 1) {
        int mid = (L + R) / 2;
        long long ca = calc(mid, a);
        if (ca < k) {
            R = mid;
        } else if (ca >= k) {
            L = mid;
        }
    }
    cout << L;
    return 0;
}
