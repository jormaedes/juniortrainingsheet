#include <bits/stdc++.h>
using namespace std;
int main() {
	int m, n, r=0; cin >> m >> n;
  n = n * m;
  while(n > 1)
  {
    n -= 2;
    r++;
  }
  cout << r;
}
