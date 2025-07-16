#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, y = 0;
    cin >> a >> b;
    while (b >= a)
    {
        y++;
        a *= 3;
        b *= 2;
    }
    cout << y;
    return 0;
}
