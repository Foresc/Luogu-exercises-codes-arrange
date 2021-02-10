#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	vector<int> ans;
	int x = 0, y = 0, s = 0;
	cin >> x >> y;
	
	for(int i=x; i<=y; ++i)
	{
		if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			ans.push_back(i);
			s++;
		}
	}
	
	cout << s << endl;
	
	for(int i=0; i<ans.size(); ++i)
		cout << ans[i] << " ";
		
	return 0;
}
