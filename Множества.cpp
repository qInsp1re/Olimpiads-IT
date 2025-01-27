#include <iostream>
#include <map>
#include <iomanip>
#include <set>

using namespace std;

int main() {
    long long n;
    int m, k;
    cin >> n >> m >> k;
    map<int, set<long long>> q;
    map<long long, set<int>> w;
    for (int v = 0; v < k; ++v) {
        string a;
        cin >> a;
        if (a == "ADD") {
            long long y;
            int x;
            cin >> y >> x;
            q[x].insert(y);
            w[y].insert(x);
        } else if (a == "DELETE") {
            int x;
            long long y;
            cin >> y >> x;
            q[x].erase(q[x].find(y));
            w[y].erase(w[y].find(x));
        } else if (a == "CLEAR") {
            int x;
            cin >> x;
            for (auto i = q[x].begin(); i != q[x].end(); ++i) {
                w[*i].erase(w[*i].find(x));
            }
            q[x].clear();
        } else if (a == "LISTSET") {
            int x;
            cin >> x;
            if (q[x].size() == 0) {
                cout << -1 << '\n';
            } else {
                for (auto i = q[x].begin(); i != q[x].end(); ++i) {
                    cout << *i << ' ';
                }
                cout << '\n';
            }
        } else if (a == "LISTSETSOF") {
            long long x;
            cin >> x;
            if (w[x].size() == 0) {
                cout << -1 << '\n';
            } else {
                for (auto i = w[x].begin(); i != w[x].end(); ++i) {
                    cout << *i << ' ';
                }
                cout << '\n';
            }
        }
    }
}