#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, r = 0, s = 0;
    cin >> n;
    int *v = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == -1 && s == 0) r++;
        else if (v[i] == -1 && s > 0) s--;
        else if (v[i] != -1) s += v[i];
    }
    cout << r;
    return 0;
}
