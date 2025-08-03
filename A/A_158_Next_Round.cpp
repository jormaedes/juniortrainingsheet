#include <bits/stdc++.h>
using namespace std;
int main() {
	int k, n, r=0; cin >> k >> n;
    int *v = new int[k];
    for (int i=0; i < k; i++)
        cin >> v[i];
    for (int i=0; i < k; i++)
    {
        n--;
        if (v[i] > 0) r++;
        if (v[i] == v[i + 1])continue;
        if (n <= 0) break;
    }
	cout << r;
}
