#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , d , c = 0;
    string s;
    cin >> n >> d;
    cin >> s;
    for(int i = 0 ; i < n; i++){
        if(s[i] == '@'){
            c++;
        }
    }
    int sum = (n - c) + d;
    cout << sum;
}
