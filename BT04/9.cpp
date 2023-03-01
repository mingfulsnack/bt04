#include <bits/stdc++.h>

using namespace std;

int x[10002];
int y[10002];

bool canQueenAttack(int qR, int qC, int oR, int oC)
{
	if (qR == oR)
		return true;


	if (qC == oC)
		return true;

	if (abs(qR - oR) == abs(qC - oC))
		return true;

	return false;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x[i] >> y[i];
	}
	bool check = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (canQueenAttack(x[i], y[i], x[j], y[j]))
			{
				check = 1;
				break;
			}
		}
	}
	if (check) cout << "Yes";
	else cout << "No";
}