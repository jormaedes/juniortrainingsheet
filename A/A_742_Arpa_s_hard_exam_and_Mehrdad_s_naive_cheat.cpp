#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    cout << (char)((n == 0)? '1': "8426"[(n-1)%4]);
}
