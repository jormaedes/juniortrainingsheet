#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
    vector <pair<int, int>> mp(m);
    for (int i=0; i < m; i++) {
        cin >> mp[i].first >> mp[i].second;
    }
    sort(mp.begin(), mp.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second;
    });
    int len = mp.size(), mat=0;
    while(n && (len)) {
        if (n >= mp[len - 1].first) {
            n -= mp[len - 1].first;
            mat += (mp[len - 1].first * mp[len - 1].second);
        } else {
            mat += (n * mp[len - 1].second);
            n = 0;
        }
        len--;
    }
    cout << mat;
}
