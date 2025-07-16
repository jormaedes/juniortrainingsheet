#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int res = s.length();
	for(int i=0; s[i]; i++)
	{
		for (int j = i+1; s[j]; j++)
			if(s[i] == s[j])
			{res--;break;} 
	}
	if (res % 2 != 0) cout << "IGNORE HIM!";
	else cout << "CHAT WITH HER!";
}