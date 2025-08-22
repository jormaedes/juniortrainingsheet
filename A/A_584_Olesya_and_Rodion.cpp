#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t; cin >> n >> t;
    if (n == 1 && t == 10) cout << -1;
    else if (t == 10) for(int i=1; i < n; i++) cout << ((i + 1 == n)? t: 1);
    else for(int i=0; i < n; i++) cout << t;
}
