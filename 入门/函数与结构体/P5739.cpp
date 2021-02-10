#include <bits/stdc++.h>

using namespace std;

long fac(int n)
{
	if(n == 1)
		return 1;
	else
		return n * fac(n-1);
}

int main(void)
{
	int n = 0;
	cin >> n;
	cout << fac(n);
	return 0;
}
