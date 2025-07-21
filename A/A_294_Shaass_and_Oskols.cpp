#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, x, y;
    cin >> n;
    int *w = new int[n];
    for(int i = 0; i < n; i++) cin >> w[i];
    cin >> m;
    while (m--)
    {
        cin >> x >> y; x--;
        if (x - 1 > -1) w[x - 1] += y - 1;
        if (x + 1 < n)  w[x + 1] += w[x] - y;
        w[x] = 0;
    }
    for(int i = 0; i < n; i++)
        cout << w[i] << "\n";
	return 0;
}
