#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i < n; i++){
        cin >> v[i];
    }
    int mx = 0, r;
    for(int i=0; i < n; i++){
        r = 1;
        for(int j=0; j < n; j++){
            if(i != j && v[i] == v[j]) r++;
        }
        mx = max(mx, r);
    }
    cout << ((mx <= (n / 2) + (n % 2))? "YES": "NO");
}
