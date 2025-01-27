#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, bb;
    cin >> n;
    vector<int> a;
    vector<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> bb;
        a.push_back(bb);
    }
    sort(a.begin(), a.end());
    if (n == 2) {
        cout << a[1] + a[0];
        return 0;
    }
    s.push_back(a[1] - a[0]);
    s.push_back(a[2] - a[0]);
    for (int i = 2; i < a.size() - 1; ++i) {
        s.push_back(min(s[i - 1], s[i - 2]) + abs(a[i] - a[i + 1]));
    }
    cout << s[s.size() - 1];
    return 0;
}
