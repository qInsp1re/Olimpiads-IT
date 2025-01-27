#include <iostream>

using namespace std;

int main() {
	string str = "TTAAAATAATTTAAAAAAATATTAAAAAAAT";
	int l = str.length();
	int y[3];
	int p[3];
	int cnt = 0;
	int a = 0;
	for (int i = 0; i < l; ++i) {
		if (str[i] == 'A') {
			cnt = 0;
			for (int j = i; j < l && str[j] == 'A'; ++j) {
				cnt++;
			}
			i += cnt;
			for (int z = 0; z < l; ++z) {
				if (cnt > y[0]) {
					y[2] = y[1];
					y[1] = y[0];
					y[0] = cnt;
				}
				else if (cnt > y[1]) {
					y[2] = y[1];
					y[1] = cnt;
				}
				else if (cnt > y[2]) {
					y[2] = cnt;
				}
			}
		}
	}
	for (int i = 0; i < 3; ++i) {
		cout << y[i] << " ";
	}
}