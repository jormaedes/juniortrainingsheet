#include <bits/stdc++.h>
using namespace std;

int main() {
    int r=0, n; cin >> n;
    vector<long long>v(n);
    long long mn=1e10, mx=-1;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i] < mn) mn=v[i];
        if(v[i] > mx) mx=v[i];
    }
    for(int i=0;i<n;i++) if(v[i] != mn && v[i] != mx) r++;
    cout << r;
}
