#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, e1=1, e2=0; cin >> n;
    string s, s1, s2;
    cin >> s1;
    while(--n)
    {
        cin >> s;
        if (s == s1) e1++;
        else {
            e2++;
            s2 = s;
        }
    }
	cout << ((e1 > e2)? s1: s2);
}
