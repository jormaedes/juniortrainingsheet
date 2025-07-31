#include <bits/stdc++.h>
using namespace std;
int main() {
	uint64_t n, k, m; cin >> n >> k;
    m = (n / 2) + (n % 2);
    if (k <= m) cout << (k * 2) - 1;
    else cout << (2 *(k - m));
}
