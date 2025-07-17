#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int r = 0;
	string s;
	cin >> s;
	char c = 'a';
	for(char v:s)
	{
		if (abs(c - v) > 13) r += 26 - abs(c - v);
		else r += abs(c - v);
		c = v;
	}
	cout << r;
	return 0;
}
