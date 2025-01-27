#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<long long> T;
    vector<long long> Z;
    vector<long long> Y;
    vector<long long> a;
    long long n, m;
    cin >> m >> n;
    for (int i = 0; i < n; ++i) {
        int t, z, y;
        cin >> t >> z >> y;
        T.push_back(t);
        Z.push_back(z);
        Y.push_back(y);
    }
    long long L = -1, R = 1e7;
    while (R - L > 1) {
        long long Mid = (L + R) / 2;
        long long cnt = 0;
        for (int i = 0; i < n; ++i) {
            long long s = (Mid / (T[i] * Z[i] + Y[i])) * Z[i];
            long long sbt = min((Mid % (T[i] * Z[i] + Y[i])) / T[i], Z[i]);
            cnt += s + sbt;
        }
        if (cnt >= m) {
            R = Mid;
        } else if (cnt < m) {
            L = Mid;
        }
    }
    cout << R << endl;
    for (int i = 0; i < n; ++i) {
        a.push_back((R / (T[i] * Z[i] + Y[i])) * Z[i]);
        a[i] += min((R % (T[i] * Z[i] + Y[i])) / T[i], Z[i]);
        a[i] = min(a[i], m);
        m -= a[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}
