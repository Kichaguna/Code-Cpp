#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] - 'A' >= 0 && s[i] - 'A' <= 25){
            cout << s[i];
            break;
        }
    }
    cout << "UPC";
}
