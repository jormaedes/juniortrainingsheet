#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, p, q, x; cin >> n; cin >> p;
    vector<bool>v(n);
    for (int i=0; i < p; i++){
        cin >> x;
        v[x - 1] = true;
    }
    cin >> q;
    for (int i=0; i < q; i++) {
        cin >> x;
        v[x - 1] = true;
    }
    for(int i=0; i<n; i++) {
        if (!v[i]){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}
