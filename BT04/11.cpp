#include <bits/stdc++.h>

using namespace std;
string s[10002];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (s[i].size() != s[j].size())
			{
				continue;
			}
			else
			{
				int l = 0;
				int r = s[i].size();
				bool check = 1;
				for (int m = 0; m < r; m++)
				{
					if (s[i][m] != s[j][r - 1 - m])
					{
						check = 0;
						break;
					}
				}
				if (check) cout << r << " " << s[i][r / 2];
				else continue;
			}
		}
	}
}