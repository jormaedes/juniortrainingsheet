#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, mex; cin >> t;
    int p = 0;
    while (t--)
    {
        cin >> n;
        vector<int>v(n);
        p = 0;
        for (int i=0;i<n;i++)
        {
            cin >> v[i];
            (v[i] == 0)? mex = 1: mex = 0; 
            (mex == 0)? p+= v[i]: p += mex;
        }
        cout << p << "\n";
    }
}
