#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
vector <int> cords;
void in() {
    cin >> n >> k;
    cords.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> cords[i];
    }
}
bool check(int x) {
    int cows = 1;
    int last_cow = cords[0];
    for (int c : cords) {
        if (c - last_cow >= x) {
            cows++;
            last_cow = c;
        }
    }
    return cows >= k;
}
int solve() {
    sort(cords.begin(), cords.end());
    int left = 0;
    int right = cords.back() - cords[0] + 1;
    while (right - left > 1) {
        int mid = (left + right) / 2;
        if (check(mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }
    return left;
}

int main() {
    in();
    cout << solve();
    return 0;
}
