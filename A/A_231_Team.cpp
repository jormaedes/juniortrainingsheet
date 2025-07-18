#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, c, res = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if ((a + b + c) >= 2)
            res++;
    }
    cout << res;
    return 0;
}
