#include <bits/stdc++.h>
using namespace std;

int main() {
	size_t t, n, c, r; cin >> t;
    while(t--){
        cin >> n >> c;
        r = 0;
        vector<size_t> v(n);
        int p = 1;
        for (size_t i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        for (size_t i = 0; i < n; i++)
        {
            if (v[i] * p > c) r++;
            else p *= 2;
        }
        cout << r << "\n";
    }
}
