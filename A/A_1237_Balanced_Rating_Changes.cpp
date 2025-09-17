#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool c = true;
  
    while (n--) {
        int x;
        cin>>x;
        if(x%2==0) cout << x/2 << "\n";
        else{
            if(c){
                if(x<0) cout << x/2 << "\n";
                else cout << (x+1)/2 << "\n";
            }
            else{
                if(x<0) cout << (x-1)/2 << "\n";
                else cout << x/2 << "\n";
            }
            c=!c;
        }
    }
}
