﻿#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	if (a == b) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}