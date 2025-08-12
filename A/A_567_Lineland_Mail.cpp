#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<long long>v(n);
    for(auto &x:v) cin>>x;
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++)
    {
        long long mx, m;
        if(i == 0)
            m = abs(v[i] - v[i + 1]);
        else if (i == - 1)
            m = abs(v[i] - v[i - 1]);
        else
            m = min(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
        mx = max(abs(v[i] - v[0]), abs(v[i] - v[n - 1]));
        cout << m << " " << mx << "\n";
    }
}
