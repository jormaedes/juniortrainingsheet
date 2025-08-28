#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    cout << (((n / 2) + (n % 2)) * ((n % 2)? -1:1));
}
