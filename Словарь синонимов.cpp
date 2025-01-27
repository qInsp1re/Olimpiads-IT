#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s, k, f;
    map <string, string> v, vv;
    for (int i = 0; i < n; i++) {
        cin >> k >> s;
        v[k] = s;
        vv[s] = k;
    }
    cin >> f;
    map <string, string>::iterator i;
    if ((i = v.find(f)) != v.end()) {
        cout << i->second;
    } else if ((i = vv.find(f)) != vv.end()) {
        cout << i->second;
    } else {
        return 0;
    }
    return 0;
}