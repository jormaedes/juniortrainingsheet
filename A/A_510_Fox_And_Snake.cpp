#include <bits/stdc++.h>
using namespace std;

void	printline(int n, int line)
{
	for(int i=0; i < n; i++)
	{
		if ((line == 1 && i == 0) || (line == 2 && i == n-1) || line == 0)
			cout << "#";
		else cout << ".";
	}
}

int	main(void)
{
	int	n, m; cin >> n >> m;
	int line = 2;
	for(int i=0; i<n; i++) 
	{
		if (i % 2 == 0) printline(m, 0);
		else if (line == 1 || line == 2)
		{
			printline(m, line);
			(line == 1)? line = 2:line = 1;
		}
		cout << "\n";
	}
}
