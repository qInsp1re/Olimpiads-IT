#include <iostream>

using namespace std;

int main() {
    int b, N, len[1000];
    cin >> b >> N;
    for (int i = 0; i < N; i++) {
        cin >> len[i];
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (len[i] >= b && b > 1) {
            if (len[i] - len[i + 1] >= 3 || len[i + 1] - len[i] >= 3) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}