#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n[4], r = 0;
    for(int i = 0; i < 4; i++)
        cin >> n[i];
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            if (n[i] == n[j])
            {r++; break;}
        }
    }
    cout << r;
	return 0;
}