/**
 * @author: jormaedes luis 
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r = 0, n;
	cin >> n;
	int *t1 = new int[n], *t2 = new int[n];
	for (int i = 0; i < n; i++)
		cin >> t1[i] >> t2[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if(t1[i] == t2[j]) r++;
	}
	cout << r;
	return 0;
}
