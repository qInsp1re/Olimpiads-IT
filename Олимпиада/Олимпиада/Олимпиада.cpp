#include <iostream>

using namespace std;

int main()
{
	int n;
	int m;
	cin >> n >> m;
	int cntrazrezovsasiski = 0;
	if (n >= m) {
		if (n % m == 0) {
			cntrazrezovsasiski = 0;
			cout << cntrazrezovsasiski;
		}
		if (n % m != 0) {
			if (n % m == 1) {
				cout << m;
			}
			else {
				float rrrr = float(n) / m;
				cout << rrrr * m;
			}
		}

	}
	else if (n < m) {
		float rrrrr = float(n) / m;
		cout << rrrrr * m;
	}
}