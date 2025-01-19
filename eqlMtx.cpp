#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x = 0,a,b,check;
    cin >> n;
    int mtx1[n][n];
    int mtx2[n][n];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mtx1[i][j];
        }
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mtx2[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mtx1[i][j] != mtx2[i][j]){
                check = 1;
            }
        }

    }
    if(check == 1){
        cout << "Both matrices are not equal";
    }
    else{
        cout << "Both matrices are equal";
    }
}
