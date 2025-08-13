#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b; cin >> a; cin >> b;
    if(a==b) cout << -1;
    else cout << max(b.size(), a.size());
}
