#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    int sx=0, sy=0, sz=0;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }
    if (sx == 0 && sy == 0 && sz == 0) cout << "YES";
    else cout << "NO";
}
