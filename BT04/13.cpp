#include <bits/stdc++.h>
using namespace std;
int a[100002];
int b[10002];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		int trai = 0;
		int phai = 0;
		int i = 1;
		int j = n;
		if (n == 1)
		{
			cout << "YES" << endl;
			continue;
		}
		if (n == 2 && a[1] != a[2])
		{
			cout << "NO" << endl;
			continue;
		}
		if (a[2] == 0 && a[4] == 0)
		{
			cout << "YES" << endl;
			continue;
		}

		while (i != j)
		{
			if (trai < phai)
			{
				trai += a[i];
				i++;
			}
			else if (phai < trai)
			{
				phai += a[j];
				j--;
			}
			else
			{
				trai += a[i];
				phai += a[j];
				i++;
				j--;
			}
		}
		if (trai == phai)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}