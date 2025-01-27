#include <iostream>

using namespace std;

typedef tuple <long long, long long> tup;

int NOD(int a, int b) {
	while (b > 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main()
{
	long long n, dk, tk, dm, tm;
	cin >> n >> dk >> tk >> dm >> tm;
	long long z = NOD(tk, tm); 
	long long zz = tk;
	tk = tm / z; 
	tm = zz / z;
	long long x = dk / tk + (dk % tk > 0);
	long long y = dm / tm + (dm % tm > 0);
	long long p = max(x,y);
	tk *= p; 
	tm *= p;
	if (tk > n) {
		tk = n;
	}
	if (tm > n) {
		tm = n;
	}
	cout << tk << ' ' << tm;
}