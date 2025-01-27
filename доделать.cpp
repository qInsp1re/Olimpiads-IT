#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void f(vector<int>& p, vector<bool>& used, int n) {
    if (p.size() == n) {
        for (auto i : p) {
            cout << i << ' ';
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (used[i]) continue;
            used[i] = true;
            p.push_back(i);
            f(p, used, n);
            p.pop_back();
            used[i] = false;
    }
}
void subsets(vector<int>& a, int n, int k) {
    if (a.size() == k) {
        for (auto i : a) {
            cout << i << ' ';
        }
        cout << endl;
        return;
    }
    int from = (a.empty() ? 1 : a.back() + 1);
    if (k - a.size() > n - from + 1) {
        return;
    }
    for (int i = from; i <= n; ++i) {
        a.push_back(i);
        subsets(a, n, k);
        a.pop_back();
    }
}
int main() {
    int n, k; 
    cin >> n;
    //cin >> k;
    //vector<int> p;
    //vector<bool> used(n + 1);
    //f(p, used, n);
    //sebsets(p, n, k);
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }
    do {
        for (auto x : a) {
            cout << x;
        }
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}
