#include <iostream>

using namespace std;

void f(string str, int l) {
    if (!l) {
        cout << str << endl;
        return;
    }
    f(str + '0', l - 1);
    f(str + '1', l - 1);
}
int main() {
    int n;
    cin >> n;
    f("", n);
    return 0;
}