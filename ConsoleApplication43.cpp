#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int l = 1, r = 1e9;
    while (l < r)
    {
        int m = (l + r) / 2;
        int an = 0;
        for (int i = 0; i < n; ++i)
            an += a[i] / m;
        if (an >= k)
            l = m + 1;
        else
            r = m;
    }
    cout << l - 1;
}