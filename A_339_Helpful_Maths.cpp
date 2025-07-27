#include <bits/stdc++.h>
using namespace std;
int main() {
	string s, r="";
    cin >> s;
    for(size_t i=0;i < s.length(); i+=2)
        r+= s[i];
    sort(r.begin(), r.end());
    cout << r[0];
    for(size_t i=1;i < r.length(); i++)
        cout << "+" << r[i];
}
