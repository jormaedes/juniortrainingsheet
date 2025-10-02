#include <bits/stdc++.h>
using namespace std;
 
int rain(vector<int>v, int pos){
    int r = 0, current = v[pos];
    for(int i=pos-1; i >= 0; i--){
        if (v[i] > current) break;
        r++;
        current = v[i]; 
    }
    current = v[pos];
    for(int i=pos+1; i < v.size(); i++){
        if (v[i] > current) break;
        r++;
        current = v[i];
    }
    return (r+1);
}
 
int main() {
	int n; cin >> n;
    vector<int>v(n);
    for(int &x:v) cin >> x;
    int mx=0;
    for(int i=0; i<n; i++)  {
        mx = max(mx, rain(v, i));
    }
    cout << mx;
}
