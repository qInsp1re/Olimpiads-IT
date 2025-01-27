#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    cout << a;
}