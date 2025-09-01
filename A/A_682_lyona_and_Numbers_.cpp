#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m,r = 0; cin >> n >> m;
    for (int i = 1; i <= n; i++)
        r += (i + m) / 5 - (i / 5);
    cout << r;
    return 0;
}
