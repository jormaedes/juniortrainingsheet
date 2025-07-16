#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string s1, s2;
	cin >> s1 >> s2;
	int i;
	for (i = 0; tolower(s1[i]) == tolower(s2[i]) && s1[i]; i++);
	if (tolower(s1[i]) == tolower(s2[i])) cout << "0";
	else if (tolower(s1[i]) > tolower(s2[i])) cout << "1";
	else cout << "-1";
	return 0;
}