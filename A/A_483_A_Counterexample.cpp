#include <bits/stdc++.h>
using namespace std;

int main() {
	long long l, r; cin >> l >> r;
    long long mx, mn;
    (l > r)?mx=l:mx=r;
    (l < r)?mn=l:mn=r;
    if (mx - mn + 1 < 3 || (mx - mn + 1 == 3 && mx % 2 == 1)) cout << -1;
    else if (mx % 2 == 0) cout << mx - 2 << " " << mx - 1 << " " << mx;
    else cout << mx - 3 << " " << mx - 2 << " " << mx - 1;
}
