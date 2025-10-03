#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, prev, next, res=0; cin >> n >> a;
    vector<int> v(n);
    for(auto &x:v) cin >> x;
    prev = a-2, next=a;
    if (v[a-1] == 1) res++;
    while (prev >= 0 || next < n) {
        if ((prev >= 0 && next < n) && v[prev] == 1 && v[next] == 1) res += 2;
        else if ((prev >= 0 && v[prev] == 1 && next >= n) || (next < n && v[next] == 1 && prev < 0)) res++;
        prev--;
        next++;
    }
	cout << res;
}
