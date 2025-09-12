#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
    int covered = 0;
    while (n--){
        int start, end;
        cin >> start >> end;
        covered += (end - start + 1);
    }
    covered %= k;
    if (covered != 0) covered = k - covered; 
	cout << covered;
}
