#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, o;
    cin >> n;
    int Mass[1000];
    for (int i = 0; i < n; i++) {
        cin >> Mass[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int sm = i;
        for (int j = i + 1; j < n; j++) {
            if (Mass[j] < Mass[sm]) {
                sm = j;
            }
            swap(Mass[i], Mass[j]);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << Mass[i] << " ";
    }
    return 0;
}