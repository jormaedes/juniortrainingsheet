#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<int>a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];
    for(int i=0; i<n; i++) 
        if(a[i] != b[i]){
            cout << "rated";
            return 0;
        }
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++)
            if (a[i] > b[j]){
                cout << "unrated";
                return 0;
            }
    }
    cout << "maybe";
}
