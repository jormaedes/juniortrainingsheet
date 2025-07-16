#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    int min = 0, mai = 0;
    for (int i = 0; s[i]; i++)
    {
        if (isupper(s[i])) mai++;
        else if (islower(s[i])) min++;
    }
    if (mai > min) for (int i = 0; s[i]; i++) cout << (char)toupper(s[i]);
    else for (int i = 0; s[i]; i++) cout << (char)tolower(s[i]);
    return 0;
}