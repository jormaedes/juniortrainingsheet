#include <bits/stdc++.h>
using namespace std;
int main() {
	int x, r =0; cin >> x;
    if (x >= 5) {
        r += x/5;
        x = (x%5);
    } 
    if(x > 0 && x < 5) r++;
	cout << r;
}
