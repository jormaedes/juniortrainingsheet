#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x; cin >> t;

	while(t--){
		cin >> x >> n;
		cout << ((n % 2 != 0)? x:0);
		cout << "\n";
	}
	return 0;
}
