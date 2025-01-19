#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x = 0;
    cin >> n;
    int mtx[n][n];
    int ans[n][n];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mtx[i][j];
        }
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            ans[i][j] = mtx[j][i];
        }
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j<n; j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}

