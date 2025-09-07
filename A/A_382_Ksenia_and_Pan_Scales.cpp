#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    int i=0;
    string ra="", rb="";
    cin >> a >> b;
    for(; a[i]!='|'; i++) ra += a[i];
    i++;
    for(; a[i]; i++) rb += a[i];
    for(int j=0; b[j]; j++){
        if(ra.length() > rb.length())
            rb += b[j];
        else ra += b[j];
    }
    if(ra.length() == rb.length())
        cout << ra << "|" << rb;
    else cout << "Impossible";
    return 0;
}
