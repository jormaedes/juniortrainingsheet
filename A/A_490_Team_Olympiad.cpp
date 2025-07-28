#include <bits/stdc++.h>
using namespace std;
int main() {
    int w, n; cin >> n;
    int *t = new int[n];
    vector<int> t1, t2, t3;
    for (int i=0; i < n; i++)
    {
        cin >> t[i];
        if (t[i] == 1) t1.push_back(i+1);
        else if (t[i] == 2) t2.push_back(i+1);
        else t3.push_back(i+1);
    }
    w = t1.size();
    if(w > t2.size()) w = t2.size();
    if(w > t3.size()) w = t3.size();
    cout << w;
    for (int i=0;i<w;i++)
        cout << "\n" << t1[i] << " " << t2[i] << " " << t3[i];
}
