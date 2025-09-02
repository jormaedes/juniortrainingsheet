#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, r =0; cin >> n >> k;
    string s;
    while(n--)
    {
        cin >> s;
        vector<bool> v(10, false);
        for(char c: s) v[c - '0'] = true;
        int n = 1;
        for (int i=0; i<=k; i++){
            if(!v[i]) {
                n = 0;
            }
        }
        r += n;
    }
	cout << r << "\n";
}
