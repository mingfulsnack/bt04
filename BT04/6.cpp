#include <iostream>

using namespace std;
int a[10002];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			for (int k = j + 1; k <= n; k++)
			{
				if (a[i] + a[j] + a[k] == 0)
				{
					cout << a[i] << " " << a[j] << " " << a[k];
					return 0;
				}
			}
		}
	}
}