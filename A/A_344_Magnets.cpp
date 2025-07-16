#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, p = -1, r = 0;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s == "10" && p != 1) {r++; p = 1;}
        else if (s == "01" && p != 0) {r++; p = 0;}
    }
    cout << r;
    return 0;
}