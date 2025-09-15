#include <bits/stdc++.h>
using namespace std;

int main() {
	int x; cin >> x;
    int n=0;
    while(x) {
        if (x % 2 == 1) n++;
        x /= 2;
    }
    cout << n;
}
