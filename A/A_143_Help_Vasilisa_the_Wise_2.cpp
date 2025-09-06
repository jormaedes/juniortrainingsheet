#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int r1, r2, c1, c2, d1, d2, a, b, c, d, m;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;
    vector<int>n(10);
    m = min(r1, min(d1, c1));
    while(m > 1){
        for(int i = 0; i<10; i++) n[i] = i;
        m--;
        if (m > 9) continue;
        a = n[m];
        n[a] = -1;
        b = r1 - a;
        if (b > 9 || n[b] == -1) continue;
        n[b] = -1;
        c = c1 - a;
        if (c > 9 || n[c] == -1) continue;
        n[c] = -1;
        d = c2 - b;
        if (d > 9 || n[d] == -1) continue;
        if(r1 == a + b && r2 == c + d && d1 == a + d && d2 == b + c && c1 == a + c && c2 == b  + d){
            cout << a << " " << b << "\n" << c << " " << d;
            return 0;
        }
    }
	cout << -1;
}
