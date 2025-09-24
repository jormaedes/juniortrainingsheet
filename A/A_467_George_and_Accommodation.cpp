#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int	n; cin >> n;
	int res=0;
	while (n--)
	{
		int p, q; cin >> p >> q;
		if (p + 2 <= q) res++;
	}
	cout << res;
	return 0;
}
