#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s[n];
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> s[i] >> b[i];
    }
    int t = 0;
    int c[n];
    int r = 2;
    int coun;
    int s1 = 1;
    int b1 = 0;
    int a = 0;
    int ans = 9999999;
    for(int i = 0; i < n; i++){
        c[i] = 0;
    }
    while(t != pow(2 , n) - 1){
        t += 1;
        r = t;
        coun = 0;
        while(r >= 1){
            c[coun] = r % 2;
            r /= 2;
            coun++;
        }
        for(int i = 0 ; i < n; i++){
            if(c[i] == 1){
                s1 *= s[i];
                b1 += b[i];
            }
        }
        a = abs(s1 - b1);
        if(ans > a){
            ans = a;
        }
        s1 = 1;
        b1 = 0;
        for(int i = 0; i < n; i++){
            c[i] = 0;
        }
    }
    cout << ans;
}
