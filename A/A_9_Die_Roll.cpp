#include <bits/stdc++.h>
using namespace std;
int main() {
	int y, w, n, d = 6;
    cin >> y >> w;
    if (y > w) n = 6 - y + 1;
    else n = 6 - w + 1;
    if (d % n == 0)
    {
        d /= n;
        n /= n;
    }
    if (d % 2 == 0 && n % 2 == 0)
    {
        d = d / 2;
        n = n / 2;
    }
	cout << n << "/" << d;
}
