#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
    cin >> n; cin >>x;
    int y = 7 - x;
    bool ok = true;
    while(n--){
        int a, b; cin >> a >> b;
        if (a == x || a == y || b == x || b == y)
            ok = false;
    }
    cout << (ok? "YES":"NO");
}
