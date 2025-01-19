#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , x;
    cin >> n;
    int mtx[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mtx[i][j];
        }
    }
    cin >> x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            mtx[i][j] *= x;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%5d ",mtx[i][j]);
        }
        cout << "\n";
    }
}
