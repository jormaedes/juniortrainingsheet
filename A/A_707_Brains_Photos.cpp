#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n; cin >> n >> m;
    for(int i=0; i < n*m; i++){
        char c; cin >> c;
        if(c != 'W' && c != 'G' && c != 'B'){
            cout << "#Color";
            return 0;
        }
    }
    cout << "#Black&White";
}
