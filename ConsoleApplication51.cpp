#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int n, k;
vector <int> a;
void in() {
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
int calc(int len, vector <int>& a) {
    long long res = 0;
    for (int i = 0; i < a.size(); i++) {
        res += a[i] / len;
    }
    return res;
}
void reh() {
    long long L = 0, R = 100000001;
    int len = 0;
    while (L <= R) {
        int mid = (L + R) / 2;
        if (mid == 0) {
            L = mid + 1;
        }
        int ca = calc(mid, a);
        if (ca < k) {
            R = mid - 1;
        } else if (ca >= k) {
            L = mid + 1;
            len = max(len, mid);
        }
    }
    cout << len;
}
int main() {
    in();
    reh();
    return 0;
}