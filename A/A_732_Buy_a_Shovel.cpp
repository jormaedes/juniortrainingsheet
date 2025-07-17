#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int k, n, r=1;
	cin >> k >> n;
	while (((r*k)%10 != 0) && (r*k)%10 != n)
		r++;
	cout << r;
	return 0;
}
