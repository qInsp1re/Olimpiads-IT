#include <iostream>
#include <string>

using namespace std;

void f(string s, int n, int k) {
    if (n < k) {
        return;
    }
    if (k == 0) {
        cout << s << endl;
    } else {
        f(s, n - 1, k);
        f(s + " " + to_string(n), n - 1, k - 1);
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    f("", n, k);
}
