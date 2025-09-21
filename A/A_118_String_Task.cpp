#include <bits/stdc++.h>
using namespace std;

int	isvowel(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
		return 1;
	return 0;
}

int main(void)
{
	string s; cin >> s;
	string r;
	for(int i=0; i<s.length(); i++)
		if (!isvowel(tolower(s[i])))
			cout << "." << (char)tolower(s[i]);
	return 0;
}
