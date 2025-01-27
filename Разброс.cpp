#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int mas[100000];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	sort(mas, mas+n);
	for (int i = 0; i < n; i++) {
		cout << mas[i] << ' ';
	}
}
