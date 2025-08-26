#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    char m[n][n];
    for(int i = 0; i < n; i++){
        for (int j=0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    char c = m[0][0];
    int i = 0, j = n - 1;
    while (i<n){
        if (m[i][i] == c && m[i][j] == c){
            m[i][i] = '1';
            m[i][j] = '1';
        }else{
            cout << "NO";
            return 0;
        }
        i++;
        j--;
    }
    if(c!= m[0][1])c = m[0][1];
    else {
        cout << "NO";
        return 0;
    }
    for(i=0; i<n; i++){
        for (j=0; j < n; j++){
            if (m[i][j] != '1' && m[i][j] != c){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
