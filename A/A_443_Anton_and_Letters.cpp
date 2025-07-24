#include <bits/stdc++.h>
using namespace std;
int ft_strchr(string s, char c)
{
	for(char cc:s)
	{
		if(cc == c) return 0;
	}
	return 1;
}

int main(void)
{
	string s, r = "";
	getline(cin, s);
	for(size_t i = 1; i < s.length(); i+=3)
	{
		if (isalpha(s[i]) && ft_strchr(r, s[i]))
			r += s[i];
	}
	cout << r.length();
}
