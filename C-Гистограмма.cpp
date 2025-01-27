#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

typedef long long ll;
const int N = 1e5 + 5;
int n;
int h[N], q[N], l[N], r[N];
void get(int bound[N]) {
    int tt = 0;
    h[0] = -1;
    for (int i = 1; i <= n; i++) {
        while (h[q[tt]] >= h[i]) tt--;
        bound[i] = q[tt];
        q[++tt] = i;
    }
}
int main() {
    while (cin >> n, n) {
        for (int i = 1; i <= n; i++) {
            cin >> h[i];
        }
        h[0] = -1;
        get(l);
        reverse(h + 1, h + n + 1);
        get(r);
        ll res = 0;
        for (int i = 1, j = n; i <= n; i++, j--) {
            res = max(res, h[i] * (n + 1 - l[j] - r[i] - 1ll));
        }
        cout << res << endl;
    }
    return 0;
}