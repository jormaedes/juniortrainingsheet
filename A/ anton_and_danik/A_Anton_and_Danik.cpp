/**
 * @author: jormaedes luis 
 */

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int a = 0, d = 0, n;
	cin >> n;
    char c;
	while (n--)
	{
		cin >> c;
		if (c == 'A') a++;
		else d++;
    }
	if (d > a) cout << "Danik";
	else if (a > d) cout << "Anton";
	else cout << "Friendship" << "\n";
	return 0;
}