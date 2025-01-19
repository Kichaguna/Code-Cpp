#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m , c=0;
    cin >> n >> m;
    int p[n][2];
    int s[m];
    int e[m];
    int p1[n][2];
    for(int i = 0; i < n; i++){
        cin >> p[i][0];
        p[i][1] = i+1;
        p1[i][0] = p[i][0];
        p1[i][0] = p[i][1];
    }
    sort(tp , tp + n);
    for(int i = 0; i < m; i++){
        cin >> s[i];
        e[i] = -1;
        if(s[i] < tp[0]){
            s[i] = 0
        }
    }
    sort(s , s + m);
    for(int i = 0 ; i < n; i++){
        if(p[i] > s[m-1]){
            p[i] = 0;
            c++
        }
    }
    int a = n - c;
    int tp[a];
    c = 0
    for(int i = 0; i < m; i++){
        if()
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < n; j++){
            if(p[j] <= ss[i]){
                break;
            }
            if(p[j] == n-1){
                p[j] = 0;
                c++;
            }

        }
    }
    int b = n - c;
    int ps[b];
    c = 0;
    for(int i = 0; i < b; i++){
        if(p[i] != 0){
            ps[c] = p[i];
            c++;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(ss[i] >= ps[j]){
                e[i] = j+1;
                break;
            }
        }
    }
    for(int i = 0 ; i < m; i++){
        cout << e[i] << endl;
    }
}

