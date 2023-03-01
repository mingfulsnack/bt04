#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,dem=0;
	cin >> n;
	int a[1001], b[1001];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> b[i];
	}
	sort(a + 1, a + 1 + n);
	sort(b + 1, b + 1 + n);
	for (int i = 1; i <= n; i++)
	{
		if (a[i] > b[i]) dem++;
	}
	if (dem == n) cout << "YES";
	else
	{
		cout << "NO";
	}
}