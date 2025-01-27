#include <iostream>
#include <list>

using namespace std;

int main() {
    long long N, K, a;
    cin >> N >> K;
    list <pair<long long, long long>> n;
    for (int i = 0; i < N; i++) {
        if (!n.empty() && i - n.front().first >= K) {
            n.pop_front();
            cin >> a;
        }
        while (!n.empty() && n.back().second > a) {
            n.pop_back();
            n.push_back({ i, a });
        }
        if (i + 1 >= K) {
            cout << n.front().second << " ";
        }
    }
    return 0;
}