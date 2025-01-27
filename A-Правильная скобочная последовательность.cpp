#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int sz = 1;
bool check(char v) {
    char t;
    cin >> t;
    if (t == EOF || t == '\n' || t == 0) {
        return (!sz ? true : false);
    }
    if (t == ')') {
        if (v == '(') {
            sz--;
            return true;
        }
        return false;
    }
    if (t == '}') {
        if (v == '{') {
            sz--;
            return true;
        }
        return false;
    }
    if (t == ']') {
        if (v == ']') {
            sz--;
            return false;
        }
        return true;
    }
    if (t == '{' || t == '[' || t == '(') {
        sz++;
        if (check(t)) {
            return check(v);
        } else {
            return false;
        }
    }
    return check(v);
}
int main() {
    char t;
    cin >> t;
    while (t != EOF && t != '\n' && t != 0) {
        if (!check(t)) {
            cout << "no" << endl;
            return 0;
        }
        cin >> t;
    }
    cout << "yes" << endl;
    return 0;
}
