#include <iostream>
#include <string.h>
using namespace std;
bool s[10001];
void snt(int n)
{
	s[0] = s[1] = false;
	for (int i = 2; i <= n; i++) s[i] = true;
	for (int i = 2; i <= sqrt(n); i++)
		if (s[i] == true)
			for (int j = i * i; j <= n; j += i)
				s[j] = false;
}
int main()
{
	int n;
	cin >> n;
	snt(n);
	for (int i = 1; i <= n; i++)
	{
		if (s[i] == true) {
			cout << i << " ";
		}
	}
	
}