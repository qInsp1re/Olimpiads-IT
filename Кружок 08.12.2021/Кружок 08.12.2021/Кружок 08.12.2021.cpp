#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int m[100000];
	int my[100000];
	int k[100000];
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}
	for (int i = 0; i < n - 1; i++) {
		my[m[i]]++;
	}
	k[0] = 0;
	for (int i = 0; i < n; i++) {
		k[i] = k[i - 1] + my[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int r[k[m[i]] - 1] = m[i];
		k[m[i]] --;
	}
	cout << m[100000];
}

