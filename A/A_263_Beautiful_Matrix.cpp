#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[])
{
    int m[5][5], r = 0, c = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> m[i][j];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    cout << abs(r - 2) + abs(c - 2);
    return 0;
}
