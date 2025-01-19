#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,y = 0,z=0,v=0;
    cin >> n;
    int sum[n][n];
    int mtx[n][n];
    int mtx2[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mtx[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mtx2[i][j];
        }
    }
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                sum[k][y] = (mtx[k][j] * mtx2[v][z]) + sum[k][y];
                v++;
            }
            v = 0;
            z++;
            y++;
        }
        z = 0;
        y = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%5d ",sum[i][j]);
        }
        cout << "\n";
    }
}
