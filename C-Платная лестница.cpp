#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    a[0] = s[0];
    a[1] = s[1];
    for (int i = 2; i < n; ++i) {
        a[i] = min(a[i - 1], a[i - 2]) + s[i];
    }
    cout << a[n - 1] << endl;
    return 0;
}
