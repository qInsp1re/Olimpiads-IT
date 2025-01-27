#include <iostream>

using namespace std;

int main() {
    int a, b, temp = 0;
    cin >> a >> b;
    while (a && b) {
        if (a >= b) {
            temp += a / b;
            a %= b;
        } else {
            temp += b / a;
            b %= a;
        }
    }
    cout << temp;
    return 0;
}