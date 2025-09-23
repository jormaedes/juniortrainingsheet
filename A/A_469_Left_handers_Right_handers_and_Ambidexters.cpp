#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int	l, r, a; cin >> l >> r >> a;
	int res = 0;
	while (a--)
	{
		if (l > r) r++;
		else l++;
	}
	while (l && r)
	{
		res += 2;
		l--;
		r--;
	}
	cout << res;
	return 0;
}
