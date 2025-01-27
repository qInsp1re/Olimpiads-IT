#include <iostream>

using namespace std;

void sort(int* arr, int l, int h) {
    int mid;
    void merge(int*, int, int, int);
    if (l < h) {
        mid = (l + h) / 2;
        sort(arr, l, mid);
        sort(arr, mid + 1, h);
        merge(arr, l, h, mid);
    }
}
void merge(int* arr, int l, int h, int mid) {
    int i, j, k, c[100000];
    i = l;
    k = l;
    j = mid + 1;
    while (i <= mid && j <= h) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        } else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= h) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = l; i < k; i++) {
        arr[i] = c[i];
    }
}
int main() {
    int a[100000], N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, 0, N - 1);
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
}