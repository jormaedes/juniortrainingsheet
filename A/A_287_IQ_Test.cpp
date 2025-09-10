#include <bits/stdc++.h>
using namespace std;

int main(){
	char m[4][4];
	char c = '.';
	int n;
	for(int i=0; i<4; i++){
		for (int j = 0; j < 4; j++)
		{
			cin >> m[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{	
		for (int j = 0; j < 3; j++)
		{
			n = 0;
			if(m[i][j] == c) n++; else n--;
			if(m[i][j + 1] == c) n++; else n--;
			if(m[i + 1][j] == c) n++; else n--;
			if(m[i + 1][j + 1] == c) n++; else n--;
			if (abs(n) >= 2){
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return (0);
}
