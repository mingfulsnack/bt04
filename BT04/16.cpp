#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main()
{
	ll n, m;
	cin >> m >> n;
	string s[n];

	for (ll i = 0; i < n; i++) cin >> s[i];
	for (ll i = 0; i < n - 1; i++)
	{
		ll Ycnt = 0;
		for (ll j = 0; j < m; j++)
		{
			if (s[i][j] != 'Y') continue;
			Ycnt++;
			for (ll k = -1; k <= 1; k++)
			{
				if (j + k >= 0 && j + k < m &&
					s[i + 1][j + k] == 'E' && s[i][j + k] != 'R')
				{
					s[i + 1][j + k] = 'Y';
				}
			}
		}
		if (Ycnt == 0) {
			cout << "NO" << endl;
			return 0;
		}
	}
	for (ll j = 0; j < m; j++) {
		if (s[n - 1][j] == 'Y') {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}