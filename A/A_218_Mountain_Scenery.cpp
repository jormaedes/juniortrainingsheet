#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    vector<int>v(n*2+1);
    for(int &x:v) cin >> x;
    for(int i=1; i<v.size() && k; i+=2){
        if(v[i] - 1 > v[i+1] && v[i-1] + 1 < v[i]) {
            v[i]--;
            k--;
        } 
    }
    for(int x:v) cout << x << " ";
    return 0;
}
