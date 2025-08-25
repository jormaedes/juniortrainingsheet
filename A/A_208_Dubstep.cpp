#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int i = 0, j = s.length()-1;
    while(i < j && s[i] == 'W'  && s[i + 1] == 'U' && s[i + 2] == 'B')
        i+= 3;
    while (j > i && s[j - 2] == 'W'  && s[j - 1] == 'U' && s[j] == 'B')
        j-= 3;
    while (i <= j){
        if (s[i] == 'W'  && s[i + 1] == 'U' && s[i + 2] == 'B'){
            cout << ' ';
            i += 3;
        }else{
            cout << s[i];
            i++;
        }
    }
}

int main() {
    string s; cin >> s;
    solve(s);
}
