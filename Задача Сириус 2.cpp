#include <iostream>
using namespace std;

int main() {
    int arr[100], n, first = 0, second = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++) {
        const int diff = arr[i] - arr[i - 1];
        if (diff > 0)
            if (arr[i] <= 2000)
                first += diff;
            else if (arr[i - 1] >= 2000)
                second += diff;
            else {
                first += 2000 - arr[i - 1];
                second += arr[i] - 2000;
            }
    }
    cout << first << ' ' << second;
    return 0;

}