#include <bits/stdc++.h>
using namespace std;

int main(){
    string s[4];
    for(int i = 0 ; i < 4; i++){
        cin >> s[i];
    }
    int n[4][4];
    for(int i = 0 ; i < 4; i++){
        for(int j = 0 ; j < 4; j++){
            cin >> n[i][j];
        }
    }
    int c[4][4];
    for(int i = 0 ; i < 4; i++){
        c[i][0] = i;
        c[i][1] = 10;
        c[i][2] = 10;
        c[i][3] = 10;
    }
    for(int i = 0 ; i< 4; i++){
        for(int j = 0 ; j < 4; j++){
            if(n[i][j] > n[j][i] && i != j){
                c[i][1] += 3;
            }
            else if(n[i][j] == n[j][i] && i != j){
                c[i][1] += 1;
            }
        }
    }
    for(int i = 0 ; i < 4; i++){
        for(int j = 0 ; j < 4; j++){
            if(c[i][1] == c[j][1] && j != i){
                for(int k = 0 ; k < 4; k++){
                    c[i][2] += n[i][k];
                }
                c[i][3] = c[i][2];
                for(int k = 0 ; k < 4; k++){
                    c[i][2] -= n[k][i];
                }
            }
        }
    }
    int a[4][2];
    int so[4];
    for(int i = 0; i < 4; i++){
        a[i][0] = i;
        a[i][1] = (c[i][1] * 10000) + (c[i][2] * 100) + c[i][3];
        so[i] = a[i][1];
    }
    sort(so , so + 4);
    for(int i = 3 ; i >= 0; i--){
        for(int j = 0; j < 4; j++){
            if(so[i] == a[j][1]){
                cout << s[j] << " " << c[j][1] - 10 << endl;
            }
        }
    }
}
