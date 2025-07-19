/**
 * @author: jormaedes luis 
 */
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int a, b, c, res = 0; 
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> c;
        (c > b)? res += 2: res += 1;
    }
	cout << res << "\n";
}
