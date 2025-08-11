#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, f=0, s=0;
    cin >>n;
    while (n)
    {
        if (n % 10 == 4) f++;
        else if (n % 10 == 7) s++;
        n/=10;
    }
    (f + s == 4 || f + s == 7)? cout << "YES": cout << "NO";
}
