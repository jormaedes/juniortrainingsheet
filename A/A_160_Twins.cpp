#include <bits/stdc++.h>
using namespace std;

int sum(int *v, int initial, int size)
{
    int s = 0;
    for(int i=initial; i < size; i++) s += v[i];
    return s;
}

int main() {
	int n, r=0; cin >> n;
    int *v = new int[n];
    for(int i=0; i < n; i++)cin >> v[i];
    sort(v, v+n);
    reverse(v, v+n);
    for(int i=0; i < n; i++){
        int s1 = sum(v, 0, i + 1);
        int s2 = sum(v, i + 1, n);
        if (s1 > s2) {
            r = i+1;
            break;
        }
    }
    cout << r;
}
