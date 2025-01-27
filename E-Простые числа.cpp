#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    vector<bool> prime(m+1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= m + 1; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= m; j += i) {
                prime[j] = false;
            }
        }
    }
    bool once(true);
    for (int i = n; i <= m; ++i) {
        if (prime[i]) {
            cout << i << endl;
            once = false;
        }
    }
    if (once) {
        cout << "-1";
    }
    return 0;
}