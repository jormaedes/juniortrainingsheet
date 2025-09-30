#include <bits/stdc++.h>
using namespace std;

bool	is_diferent(string s) {
	for(int i=0; i<s.length(); i++){
		for(int j=i+1; j < s.length(); j++){
			if (s[i] == s[j]) return (false);
		}
	}
	return (true);
}

int main() {
	int n; cin >> n;
	n++;
	while (!is_diferent(to_string(n)))
		n++;
	cout << n;
}
