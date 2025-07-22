#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, b, d, r = 0, s = 0;
    cin >> n >> b >> d;
    int *l = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
        if (l[i] > b) continue;
        s += l[i];
        if(s > d)
        {
            r++;
            s = 0;
        }
    }
    cout << r;
	return 0;
}
