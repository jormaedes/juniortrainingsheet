#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, first, last; cin >> n;
    string s; cin >> s;
    for(int i=0; s[i]; i++)
    {
        if(s[i] != '.'){
            first = i;
            break;
        } 
    }
    for(int i=n-1; i > -1; i--)
    {
        if(s[i] != '.'){
            last = i;
            break;
        }
    }
    if(s[first] == 'R' && s[last] == 'R')
        cout << first+1 << " " << last+1+1;
    else if (s[first] == 'L' && s[last] == 'L')
        cout << last+1 << " " << first-1+1;
    else if (s[first] == 'R' && s[last] == 'L')
    {
        for(int i = first; i < n; i++)
        {
            last = i;
            if (s[i] == 'L') break;
        }
        cout << first+1 << " " << last-1+1;
    }
}
