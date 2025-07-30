#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, x; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> x;
        x--;
        a[x] = i + 1;
    }
    for (int v:a)
	    cout << v << " ";
}
