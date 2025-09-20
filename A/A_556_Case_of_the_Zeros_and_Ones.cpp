#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(void) {
	ll	n; cin >> n;
	string s; cin >> s;
	ll ones=0;
	for (ll i=0; i < n; i++) {
		if (s[i] == '1') ones++;
		else ones--;
	}
	cout << abs(ones);
	return 0;
}
