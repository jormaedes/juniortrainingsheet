#include <bits/stdc++.h>
using namespace std;

int	main(void) {
	int n; cin >> n;
	int chest=0, biceps=0, back=0;
	string mx;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (i % 3 == 0) chest += x;
		else if (i % 3 == 1) biceps += x;
		else back += x;
	}
	map<int, string> mp;
	mp[chest] = "chest";
	mp[biceps] = "biceps";
	mp[back] = "back";
	cout << mp[max(chest, max(biceps, back))];
}
