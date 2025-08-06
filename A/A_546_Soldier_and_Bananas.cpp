#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n, w; cin >> k >> n >> w;
    while(w)
    {
        n -= (w * k);
        w--;
    }
    if (n > 0) cout << "0";
	else cout << abs(n);
}
