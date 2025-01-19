#include <bits/stdc++.h>
using namespace std;

int main(){
    int l , x , y , r3 = 0 , sum , r11 = 0;
    string n;
    getline(cin, n);
    l = n.size();
    for(int i = 0; i<l; i++){
        x = n[i] - '0';
        y = x + (r3 * 10);
        r3 = y % 3;
    }
    cout << r3 << " ";
    for(int i = 0; i < l; i++){
        x = n[i] - '0';
        y = x + (r11 * 10);
        r11 = y % 11;
    }
    cout << r11;
}
