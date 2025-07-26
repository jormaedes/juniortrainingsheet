#include <bits/stdc++.h>
using namespace std;
int main() {
	size_t n, x, v, cd = 0;
    char s;
    cin >> n >> x;
    while(n--)
    {
        cin >> s >> v;
        if (s == '+') x += v;
        else if(s == '-' && v <= x) x -= v;
        else cd ++;
    }
	cout << x << " " << cd;
}
