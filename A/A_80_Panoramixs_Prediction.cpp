#include <bits/stdc++.h>
using namespace std;

int get_next_prime(vector<bool>v, int n){
    for(int i = n+1; i < 50; i++) 
        if(!v[i]) return (i);
    return -1;
}

int main()
{
    vector<bool> v(50, false);
    for(int i=2; i<50;i++){
        if(v[i]) continue;
        for(int j=i+i; j<50;j+=i)
            v[j] = true;
    }
    int n, m; cin >> n >> m;
    if (get_next_prime(v, n) == m)
        cout << "YES";
    else cout << "NO";
    return 0;
}
