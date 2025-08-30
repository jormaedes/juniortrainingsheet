#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    int n, sum=0; cin >> n;
    string s;
    while(n--){
        cin >> s;
        sum += mp[s];
    }
    cout << sum;
    return 0;
}
