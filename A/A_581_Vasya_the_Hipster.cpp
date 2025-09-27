#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int r, b; cin >> r >> b;
	int m = min(b, r);
	int mx = max(b, r) - m;
	cout << m << " " << (mx/2);
	return 0;
}
