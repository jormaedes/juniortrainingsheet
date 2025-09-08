#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(void){
    string s; cin >> s;
    ll i = 0;
    if(s[i] == '9') {
        i++;
        cout << '9';
    }
    for (; i < s.length(); i++)
    {
        if(s[i] > '4') cout << char(('9' - s[i]) + '0');
        else cout << s[i];
    }
}
