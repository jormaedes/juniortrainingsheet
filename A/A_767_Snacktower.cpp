#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<bool> v(n);
    int c = n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v[m-1] = true;

        if (v[c-1]) {
            while (c > 0 && v[c-1]) {
                cout << c << " ";
                c--;
            }
        }
        cout << "\n";
    }
    return 0;
}
