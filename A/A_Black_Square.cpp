#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n[4], res = 0;
	string s;
	for (int i = 0; i < 4; i++) cin >> n[i];
	cin >> s;
	for (char c:s) res += n[(c - 48) - 1];
	cout << res;
	return 0;
}
