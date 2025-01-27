#include <iostream>

using namespace std; 

int main()
{
	int n;
	cin >> n;
	int Mass(1000);
	for (int i = 0; i < n; i++) {
		cin >> Mass[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (Mass[j] > Mass[j + 1]) {
				int g = Mass[j]
				Mass[j] = Mass[j + 1];
				Mass[j + 1] = g;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		cout << Mass[i] << " ";
	}
	return 0;
}