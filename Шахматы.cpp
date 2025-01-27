#include <string>
#include <iostream>
using namespace std;

int main()
{
	string r;
	cin >> r;
	if (r.size() != 5 || r[2] != '-' || r[0] < 'A' || r[0] > 'H' || r[3] < 'A' 
		|| r[3] > 'H' || r[1] < '1' || r[1] > '8' || r[4] < '1' || r[4] > '8') 
	{
		cout << "ERROR";
	}
	else {
		if (abs((r[0] - r[3])*(r[1] - r[4])) == 2) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
}
