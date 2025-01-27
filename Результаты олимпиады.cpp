#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct dan {
    int num;
    int o;
};

bool comp(dan x, dan x1) {
    if (x.o == x1.o) {
        return x.num < x1.num;
    }
    return x.o > x1.o;
}

int main() {
    int N;
    cin >> N;

    vector <dan> result(N);

    for (int i = 0; i < N; i++) {
        int z, z1;
        cin >> z >> z1;
        dan strz;
        strz.num = z;
        strz.o = z1;
        result[i] = strz;
    }
    sort(result.begin(), result.end(), comp);

    for (auto now : result) {
        cout << now.num << " " << now.o << endl;
    }
}