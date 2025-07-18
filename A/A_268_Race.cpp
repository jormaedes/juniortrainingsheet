#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int tc, a, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> x >> y;
        int d = (abs(x - y) + 1) / 2;
        if (d < abs(x - a) && d < abs(y - a)) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
    
    return 0;
}
