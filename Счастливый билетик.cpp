#include <iostream>
using namespace std;
int main()
{
	int a, ch1 = 0, ch2 = 0, k;
	cin >> k >> a;
	for (int i = 0; i < k/2; i++) {
		ch1 += a % 10; a /= 10;
	}
	for (int i = 0; i < k/2; i++) {
		ch2 += a % 10; a /= 10;
	}
	if (ch1 == ch2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}