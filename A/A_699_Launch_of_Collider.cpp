#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    vector<ll> x(n);
    ll mn = 1e10;
    for(int i=0; i < n; i++)
        cin >> x[i]; 
    for(int i = 0; i < s.length(); i++){
        if (s[i] == 'R' && s[i + 1] == 'L' && s[i + 1] != '\0'){
            (mn > ((int)((x[i + 1] - x[i])/2)))? mn = ((int)((x[i + 1] - x[i])/2)): mn=mn;
            //return (0);
        }
    }
    cout << ((mn == 1e10)? -1: mn);
    return (0);
}
