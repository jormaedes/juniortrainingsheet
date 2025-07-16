#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, c;
    vector<int>v;
    cin >> n;
    while (n--)
    {
        cin >> c;
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    for(auto i:v)
        cout << i << " ";
    return 0;
}