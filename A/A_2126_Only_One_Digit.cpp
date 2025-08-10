#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        char m = s[0];
        for(int i = 1; i < s.size(); i++)
            if (s[i] < m) m = s[i];
        cout << m << "\n";
    }
}
