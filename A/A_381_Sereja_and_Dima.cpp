#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, s = 0, d = 0, turn = 1;
    cin >> n;
    int *v = new int[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, r = n - 1;
    while (n--)
    {
        if (v[l] < v[r])
        {
            if (turn)
            {
                s += v[r];
                turn = 0;
            }
            else
            {
                d += v[r];
                turn = 1;
            }
            r--;
        }
        else
        {
            if (turn)
            {
                s += v[l];
                turn = 0;
            }
            else
            {
                d += v[l];
                turn = 1;
            }
            l++;
        }
    }
    cout << s << " " << d; 
    return 0;
}
