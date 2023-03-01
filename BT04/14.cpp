#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[10001], b[10001], c[10001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        if (b[i] != a[i]) {
            cout << b[i]; return 0;
        }
    }
}
