#include <bits/stdc++.h>
using namespace std;

void printR(string s)
{
    string  u = "qwertyuiop", 
            m = "asdfghjkl;",
            d = "zxcvbnm,./";
    int a;
    for(char cs:s)
    {
        a = 0;
        for(int i=0; i < u.size(); i++)
        {
            if(cs == u[i]) {
                cout << u[i-1];
                a = 1;
                break ;
            }
        }
        if(a) continue ;
        for(int i=0; i < m.size(); i++)
        {
            if(cs == m[i]) {
                cout << m[i-1];
                a = 1;
                break ;
            }
        }
        if(a) continue ;
        for(int i=0; i < d.size(); i++)
        {
            if(cs == d[i]) {
                cout << d[i-1];
                a = 1;
                break ;
            }
        }
        if(a) continue ;
        cout << cs;
    }
}

void printL(string s)
{
    string  u = "qwertyuiop", 
            m = "asdfghjkl;",
            d = "zxcvbnm,./";
    int a;
    for(char cs:s)
    {
        a = 0;
        for(int i=0; i < u.size(); i++)
        {
            if(cs == u[i]) {
                cout << u[i+1];
                a = 1;
                break ;
            }
        }
        if(a) continue ;
        for(int i=0; i < m.size(); i++)
        {
            if(cs == m[i]) {
                cout << m[i+1];
                a = 1;
                break ;
            }
        }
        if(a) continue ;
        for(int i=0; i < d.size(); i++)
        {
            if(cs == d[i]) {
                cout << d[i+1];
                a = 1;
                break ;
            }
        }
        if(a) continue ;
        cout << cs;
    }
}

int main() {
	char c; cin >> c;
    string s; cin >> s;
    if (c=='R') printR(s);
    else printL(s);
}
