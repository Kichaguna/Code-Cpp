#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , c = 0 , ans = 0 , cn = 0 , c1 = 0;
    cin >> n;
    int s[n];
    int a[n];
    int b[n];
    for(int i = 0 ; i < n; i++){
        a[i] = 128;
        b[i] = 128;
    }
    for(int i = 0 ; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0 ; i < n; i++){
        for(int j  = i; j < n; j++){
            for(int k = i; k <= j; k++){
                c += s[k];
                a[cn] = s[k];
                cn++;
            }
            cn = 0;
            if(c > ans){
                ans = c;
                c1++;
                for(int k = 0 ;k < n; k++){
                    b[k] = a[k];
                    a[k] = 128;
                }
            }
            c = 0;
            for(int k = 0; k < n; k++){
                a[k] = 128;
            }
        }
    }
    if(c1 != 0){
        for(int i = 0; i < n; i++){
            if(b[i] != 128){
                cout<< b[i] << " ";
            }
        }
        cout << endl <<ans;
    }
    else{
        cout << "Empty sequence";
    }
}
