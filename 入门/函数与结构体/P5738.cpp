#include <bits/stdc++.h>

using namespace std;

double score(int m)
{
	int max = 0, min = 11, sum = 0, tem = 0;
	double ref = 0;
	for (int i=0; i<m; ++i)
	{
		cin >> tem;
		if(tem > max)
			max = tem;
		if(tem < min)
			min = tem;
		sum += tem;
	}
	sum -= (max + min);
	ref = 1.0 * sum / (m - 2);
	return ref;
}

int main(void)
{
	int n = 0, m = 0;
	cin >> n >> m;
	double ans = 0;
	for (int i=0; i<n; ++i)
	{
		double scr = score(m);
		if(scr > ans)
			ans = scr;
	}
	
	cout << fixed << setprecision(2) << ans;
	return 0;
}
