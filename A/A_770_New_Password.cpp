#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k, i = 0; cin >> n >> k;
    string s = "abcdefghijklmnopqrstuvwxyz";
    while(n--)
    {
        cout << s[i];
        i++;
        if(i == k)
            i=0;
    }
}
