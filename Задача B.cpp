#include <iostream>

using namespace std;

int main() {
    int n, k, o;
    cin >> n;
    int Mass[1000];
    for (int i = 0; i < n; i++) {
        cin >> Mass[i];
    }
    for (int i = 1; i < n; i++) {
        k = Mass[i];
        o = i - 1;
        while (o >= 0 && Mass[o] > k) {
            Mass[o + 1] = Mass[o];
            Mass[o] = k;
            o--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << Mass[i] << " ";
    }
    return 0;
}