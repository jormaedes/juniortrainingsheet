#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s;
	char r[26]; cin >> s;
    if (n < 26){
        cout << "NO";
        return 0;
    }
    for(int i=0; i< 26;i++) r[i] = '0';
    for(int i=0; i<n;i++) r[toupper(s[i]) - 65] ='1';
    for(int i=0; i<n;i++){
        if(r[i] == '0'){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
