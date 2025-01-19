#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , d , c = 0;
    string s;
    cin >> n >> d;
    cin >> s;
    for(int i = n-1 ; i >= 0; i--){
        if(s[i] == '@' && d != 0){
            s[i] = '.';
            d--;
        }
    }
    cout << s;
}

