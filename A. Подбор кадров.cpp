#include <iostream>

using namespace std;

int fact(int a) {
    int ans = 1;
    for (int i = 1; i <= a; i++) {
        ans *= i;
    }
    return ans;
}
int main() {
	int n;
    cin >> n;
    long long Cn5, Cn6, Cn7, summ;
    Cn5 = fact(n) / (fact(5) * fact(n - 5));
    Cn6 = fact(n) / (fact(6) * fact(n - 6));
    Cn7 = fact(n) / (fact(7) * fact(n - 7));
    summ = Cn5 + Cn6 + Cn7;
    cout << summ;
}
